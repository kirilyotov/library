#include "../Book.h"

Book::Book(std::string author, std::string title, std::string genre, std::string shortDescription, int year, int rating,
           std::string ISBN) {
    this->author = author;
    this->title = title;
    this->genre = genre;
    this->shortDescription = shortDescription;
    setYear(year);
    setRating(rating);
    setISBN(ISBN);
}

const std::string Book::getAuthor() const {
    return author;
}


const std::string Book::getTitle() const {
    return title;
}

const std::string Book::getGenre() const {
    return genre;
}

const std::string Book::getShortDescription() const {
    return shortDescription;
}

const int Book::getYear() const {
    return year;
}

const int Book::getRating() const {
    return rating;
}

const std::string Book::getISBN() const {
    return ISBN;
}

void Book::setYear(int year) {
    if (year > getCurrentYear() || year < MIN_YEAR) {
        throw std::invalid_argument("Not correct year");
    }
    this->year = year;

}

void Book::setRating(int rating) {
    if (rating < MIN_RATING || rating > MAX_RATING) {
        throw std::invalid_argument("Not correct rating");
    }
    this->rating = rating;
}

void Book::setISBN(std::string ISBN) {
    if (!isCorrectISBN(ISBN)) {
        throw std::invalid_argument(Utils::NOT_CORRECT_ISBN);
    }
}

int Book::getCurrentYear() {
    std::time_t time = std::time(nullptr);
    std::tm *localTime = std::localtime(&time);
    return localTime->tm_year + BASE_YEAR;
}

bool Book::operator<(const Book &other) const {
    return ISBN < other.ISBN;
}


bool Book::isCorrectISBN(std::string ISBN) {
    if (ISBN.length() != ISBN_LEN) {
        return false;
    }
    for (int i = 0; i < ISBN.length(); ++i) {
        if (!isNumber(ISBN[i])) {
            return false;
        }
    }
    return true;
}

bool Book::isNumber(char ch) const {
    return ch >= '0' && ch <= '9';
}

std::ostream &operator<<(std::ostream &out, const Book &book) {
    out << book.getAuthor() << " " << book.getTitle() << " "
        << book.getGenre() << " " << book.getShortDescription() << " "
        << book.getYear() << book.getRating() << " " << book.getISBN() << "\n";
    return out;
}

