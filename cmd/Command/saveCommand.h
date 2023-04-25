#ifndef LIBRARY_SAVECOMMAND_H
#define LIBRARY_SAVECOMMAND_H
#include "command.h"

class saveCommand :public Command{
public:
    void execute() const override;
};


#endif //LIBRARY_SAVECOMMAND_H
