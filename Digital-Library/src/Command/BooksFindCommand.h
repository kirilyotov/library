#ifndef LIBRARY_BOOKSFINDCOMMAND_H
#define LIBRARY_BOOKSFINDCOMMAND_H

#include <iostream>
#include <vector>
#include "command.h"
class BooksFindCommand : public Command {
public:
    void execute(std::vector<std::string> &line, Library& library) const override;
};


#endif //LIBRARY_BOOKSFINDCOMMAND_H
