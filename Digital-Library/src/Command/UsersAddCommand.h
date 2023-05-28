#ifndef LIBRARY_USERSADD_H
#define LIBRARY_USERSADD_H
#include <iostream>
#include <vector>
#include "command.h"
class UsersAdd : public Command {
public:
    void execute(std::vector<std::string> &line,const Library& library) const override;
};

#endif //LIBRARY_USERSADD_H
