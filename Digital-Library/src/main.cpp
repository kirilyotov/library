#include <iostream>
#include <vector>
#include <map>
#include "Book/Book.h"
class ISBN{
    std::string isbn;
public:
    ISBN(std::string isbn){
        this->isbn = isbn;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    Book b("Ivan Vasov", "Podigoto", "roman", "....", 1920, 9, "9780131234567");
    std::cout << b.getAuthor() << std::endl;
    std::vector<int> a;
    a.push_back(44);
    a.push_back(77);
    std::map<ISBN, Book> bookMap;
    ISBN isbn1("1");
    bookMap[isbn1] = Book ("Ivan Vasov", "Podigoto", "roman", "....", 1920, 9, "9780131234567");;
    std::cout << a.capacity();
    return 0;
}
