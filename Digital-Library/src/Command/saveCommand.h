#ifndef LIBRARY_SAVECOMMAND_H
#define LIBRARY_SAVECOMMAND_H

#include "command.h"
#include <iostream>
#include <string>
#include "../Utils/Utils.h"

class SaveCommand : public Command {
public:
    void execute(std::vector<std::string> &line, Library& library) const override;
};


#endif //LIBRARY_SAVECOMMAND_H
