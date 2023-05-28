#ifndef LIBRARY_INVOKER_H
#define LIBRARY_INVOKER_H

#include <iostream>
#include <string>
#include "../Utils/Utils.h"
#include "../Command/command.h"
#include "../Command/closeCommand.h"
#include "../Command/saveCommand.h"
#include "../Command/saveAsCommand.h"
#include "../Command/helpCommand.h"
#include "../Command/exitCommand.h"

class Invoker {
public:
    /**
     * Destructor deletes Command* command
     */
    ~Invoker();

    /**
     *
     * @param line
     */
    void getCommand(const std::string &line);

    /**
     * Exit from program
     * @return
     */
    bool exitProgram();


private:
    /**
     * Store command
     */
    Command *command;

    /**
     * Check if command is 'close'
     * @param line Line to check
     * @return True if is correct command
     */
    static bool isClose(const std::string &line);

    /**
     * Check if command is 'save'
     * @param line Line to check
     * @return True if is correct command
     */
    static bool isSave(const std::string &line);

    /**
      * Check if command is 'save as'
      * @param line Line to check
      * @return True if is correct command
      */
    static bool isSaveAs(const std::string &line);

    /**
      * Check if command is 'help'
      * @param line Line to check
      * @return True if is correct command
      */
    static bool isHelp(const std::string &line);

    /**
     * Check if command is 'exit'
     * @param line Line to check
     * @return True if is correct command
     */
    static bool isExit(const std::string &line);

    /**
     * Transforms line to lower case
     * @param line Line to transform
     * @return Line to lower case
     */
    static std::string toLowerCase(const std::string& line);
};


#endif //LIBRARY_INVOKER_H
