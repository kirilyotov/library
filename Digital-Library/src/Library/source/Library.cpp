#include "../Library.h"


const Book &Library::getBook(std::string ISBN) const {
    for (std::set<Book>::iterator it = bookLibrary.begin(); it != bookLibrary.end(); ++it) {
        if (it->getISBN() == ISBN) {
            return *it;
        }
    }
    throw std::runtime_error(Utils::bookNotFound(ISBN));
}

bool Library::addBook(const Book &book) {
    if (bookLibrary.find(book) == bookLibrary.end()) {
        bookLibrary.insert(book);
        return true;
    }
    return false;
}

bool Library::removeBook(std::string ISBN) {
    for (std::set<Book>::const_iterator it = bookLibrary.begin(); it != bookLibrary.end(); ++it) {
        if (it->getISBN() == ISBN) {
            bookLibrary.erase(it);
            return true;
        }
    }
    return false;
}

int Library::getLength() const {
    return bookLibrary.size();
}

void Library::print() const {

}

bool Library::bookExists(const Book &book) {
    auto it = bookLibrary.find(book);
    if (it != bookLibrary.end()) {
        return true;
    }

    return false;
}

std::istream &operator>>(std::istream &in, Library &library) {
    std::string author;
    std::string title;
    std::string genre;
    std::string shortDescription;
    int year;
    int rating;
    std::string ISBN;

    in >> author >> title >> genre >> shortDescription >> year >> rating >> ISBN;
    library.addBook(Book(author, title, genre, shortDescription, year, rating, ISBN));

    return in;
}

std::ostream &operator<<(std::ostream &out, const Library &library) {

    for (const Book &book: library.bookLibrary) {
        out << book;
    }
    return out;
}

void Library::sort(std::function<bool(const Book&, const Book&)> cmp, bool isAscending) {
    std::vector<Book> lib(bookLibrary.begin(), bookLibrary.end());
    std::sort(lib.begin(), lib.end(), cmp);

    if (!isAscending)
        std::reverse(lib.begin(), lib.end());

    for (const Book& book : lib)
    {
       std::cout << book;
    }
}
