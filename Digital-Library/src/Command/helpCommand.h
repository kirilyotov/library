#ifndef LIBRARY_HELPCOMMAND_H
#define LIBRARY_HELPCOMMAND_H

#include <iostream>
#include <string>
#include <vector>
#include "command.h"
#include "../Utils/Utils.h"

class HelpCommand : public Command {
public:
    void execute(std::vector<std::string> &line, Library& library) const override;

private:
    void printSupportedCommandsList() const;
};


#endif //LIBRARY_HELPCOMMAND_H
