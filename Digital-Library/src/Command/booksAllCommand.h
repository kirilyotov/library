#ifndef LIBRARY_BOOKSALLCOMMAND_H
#define LIBRARY_BOOKSALLCOMMAND_H
#include <iostream>
#include <vector>
#include "command.h"

class booksAllCommand: public Command {
public:
    void execute(std::vector<std::string> &line, Library& library) const override;
};


#endif //LIBRARY_BOOKSALLCOMMAND_H
