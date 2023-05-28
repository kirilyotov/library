#ifndef LIBRARY_SAVEASCOMMAND_H
#define LIBRARY_SAVEASCOMMAND_H

#include <iostream>
#include <vector>
#include "command.h"
class SaveAsCommand : public Command {
public:
    void execute(std::vector<std::string> &line, Library& library) const override;
};


#endif //LIBRARY_SAVEASCOMMAND_H
