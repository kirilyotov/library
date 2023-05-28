#ifndef LIBRARY_INVOKER_H
#define LIBRARY_INVOKER_H

#include <iostream>
#include <string>
#include "Utils.h"
#include "Command/command.h"
#include "Command/closeCommand.h"
#include "Command/saveCommand.h"
#include "Command/saveAsCommand.h"
#include "Command/helpCommand.h"
#include "Command/exitCommand.h"

class Invoker {
public:
    ~Invoker();

    void getCommand(const std::string &line);

    bool exitProgram();


private:
    Command *command;

    static bool isClose(const std::string &line);

    static bool isSave(const std::string &line);

    static bool isSaveAs(const std::string &line);

    static bool isHelp(const std::string &line);

    static bool isExit(const std::string &line);

    static std::string toLowerCase(const std::string& line);
};


#endif //LIBRARY_INVOKER_H
