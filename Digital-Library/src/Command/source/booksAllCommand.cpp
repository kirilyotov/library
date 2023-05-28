#include "../booksAllCommand.h"

void booksAllCommand::execute(std::vector<std::string> &line,const Library& library) const {
    library.print();
}
