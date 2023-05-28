#include "../booksAllCommand.h"

void booksAllCommand::execute(std::vector<std::string> &line, Library& library) const {
    library.print();
}
