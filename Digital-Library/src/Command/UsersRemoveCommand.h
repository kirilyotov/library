#ifndef LIBRARY_USETSREMOVECOMMAND_H
#define LIBRARY_USETSREMOVECOMMAND_H
#include <iostream>
#include <vector>
#include "command.h"

class UsersRemoveCommand: public Command {
public:
    void execute(std::vector<std::string> &line, Library& library) const override;
};


#endif //LIBRARY_USERSREMOVECOMMAND_H
