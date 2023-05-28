#ifndef LIBRARY_CLOSECOMMAND_H
#define LIBRARY_CLOSECOMMAND_H

#include "command.h"

class CloseCommand : public Command {

public:
    void execute() const override;

private:
    bool closeDocument = false;
};


#endif //LIBRARY_CLOSECOMMAND_H
