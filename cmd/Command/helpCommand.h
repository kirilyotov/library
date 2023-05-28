#ifndef LIBRARY_HELPCOMMAND_H
#define LIBRARY_HELPCOMMAND_H
#include <iostream>
#include <string>
#include "../Utils.h"

class HelpCommand : public Command{
public:
    void execute() const override;
private:
    void printSupportedCommandsList() const;
};


#endif //LIBRARY_HELPCOMMAND_H
