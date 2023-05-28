#ifndef LIBRARY_LOGINCOMMAND_H
#define LIBRARY_LOGINCOMMAND_H
#include <iostream>
#include <vector>
#include "command.h"

class loginCommand : public Command{
public:
    void execute(std::vector<std::string> &line, Library& library) const override;
};


#endif //LIBRARY_LOGINCOMMAND_H
