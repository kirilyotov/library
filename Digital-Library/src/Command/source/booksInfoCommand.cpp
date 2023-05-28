#include "../booksInfoCommand.h"

void booksInfoCommand::execute(std::vector<std::string> &subStrings, Library& library) const {
    Book book = library.getBook(subStrings[3]);
    std::cout << book;
}
