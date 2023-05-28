#ifndef LIBRARY_LOGOUTCOMMAND_H
#define LIBRARY_LOGOUTCOMMAND_H

#include <iostream>
#include <vector>
#include "command.h"
class logoutCommand : public Command {
public:
    void execute(std::vector<std::string> &line,const Library& library) const override;
};


#endif //LIBRARY_LOGOUTCOMMAND_H
