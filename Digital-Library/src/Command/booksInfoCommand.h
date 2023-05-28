#ifndef LIBRARY_BOOKSINFOCOMMAND_H
#define LIBRARY_BOOKSINFOCOMMAND_H

#include <iostream>
#include <vector>
#include "command.h"
#include "../Book/Book.h"
class booksInfoCommand: public Command {
public:
    void execute(std::vector<std::string> &line,const Library& library) const override;
};


#endif //LIBRARY_BOOKSINFOCOMMAND_H
