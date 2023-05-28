#ifndef LIBRARY_BOOKSSORTCOMMAND_H
#define LIBRARY_BOOKSSORTCOMMAND_H

#include <iostream>
#include <vector>
#include "command.h"
class booksSortCommand : public Command {
public:
    void execute(std::vector<std::string> &line,const Library& library) const override;
};


#endif //LIBRARY_BOOKSSORTCOMMAND_H
