#ifndef LIBRARY_COMMAND_H
#define LIBRARY_COMMAND_H
#include <iostream>
#include <vector>
#include "../Library/Library.h"
class Command {
public:
    virtual ~Command() = default;

    virtual void execute(std::vector<std::string> &line, Library &library ) const = 0;
};


#endif
