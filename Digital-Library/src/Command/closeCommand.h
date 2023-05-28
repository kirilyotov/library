#ifndef LIBRARY_CLOSECOMMAND_H
#define LIBRARY_CLOSECOMMAND_H

#include <iostream>
#include <vector>
#include "command.h"
class CloseCommand : public Command {

public:
    void execute(std::vector<std::string> &line,const Library& library) const override;

private:
    bool closeDocument = false;
};

#endif //LIBRARY_CLOSECOMMAND_H
