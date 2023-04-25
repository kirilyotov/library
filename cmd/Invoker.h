#ifndef LIBRARY_INVOKER_H
#define LIBRARY_INVOKER_H

#include <iostream>
#include <string>
#include "Command/command.h"

class Invoker {
public:
    ~Invoker();

    void getCommand(std::string line);

private:
    Command* command;

    bool isClose(std::string line);
    bool isSave(std::string line);
    bool isSaveAs(std::string line);
    bool isHelp(std::string line);
    bool isExit(std::string line);
};


#endif //LIBRARY_INVOKER_H
