#include "../Library.h"

Library::Library(const Book &book) {

}

Book& Library::operator[](int index) {
    if(index < 0 || index > getLength()){
        throw new std::invalid_argument("Not correct index!");
    }
  //  return bookLibrary[index];
}

const Book& Library::operator[](int index) const{
    if(index < 0 || index > getLength()){
        throw new std::invalid_argument("Not correct index!");
    }
   // return bookLibrary[index];
}

Book &Library::getBook(int index) {
    if(index < 0 || index > getLength()){
        throw std::invalid_argument("Not correct index.");
    }
   // return bookLibrary[index];
}

bool Library::addBook(const Book &book) {
    if(bookLibrary.find(book) == bookLibrary.end()){
       bookLibrary.insert(book);
        return true;
    }
    return false ;
}

bool Library::removeBook(std::string ISBN) {
    for(std::set<Book>::const_iterator it = bookLibrary.begin(); it != bookLibrary.end(); ++it){
        if(it->getISBN() == ISBN){
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
