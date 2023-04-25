#ifndef LIBRARY_SAVECOMMAND_H
#define LIBRARY_SAVECOMMAND_H
#include "command.h"
#include <iostream>
#include <string>
#include "Utils.h"

class SaveCommand :public Command{
public:
    void execute() const override;
};


#endif //LIBRARY_SAVECOMMAND_H
