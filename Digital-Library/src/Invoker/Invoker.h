#ifndef LIBRARY_INVOKER_H
#define LIBRARY_INVOKER_H

#include <iostream>
#include <string>
#include <vector>
#include "../Utils/Utils.h"
#include "../Command/command.h"
#include "../Command/closeCommand.h"
#include "../Command/saveCommand.h"
#include "../Command/saveAsCommand.h"
#include "../Command/helpCommand.h"
#include "../AdminPanel/AdminPanel.h"
#include "../AdminPanel/Account.h"
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
    void getCommand(std::vector<std::string> &line);

    /**
     * Exit from program
     * @return value
     */
    bool exitProgram();

    bool createUser(std::string username, std::string password);
private:
    /**
     * Exit from program
     */
    bool exit = false;
    /**
     * Library with books
     */
    Library library = Library();

    Account* currentAccount;

    /**
     * Library with accounts
     */
    AdminPanel adminPanel= AdminPanel();

    /**
     * Store command
     */
    Command *command;

    /**
     * Check if command is 'open'
     * @param line Line to check
     * @return True if is correct command
     */
    static bool isOpen(const std::string &line);

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
    static std::string toLowerCase(const std::string &line);

    /**
     * Check if has one argument
     * @param line Line to check
     * @return True if has one argument
     */
    static bool hasOneArgument(std::vector<std::string> &line);

    /**
      * Check if command is 'login'
      * @param line Line to check
      * @return True if is correct command
      */
    static bool isLogin(const std::string &line);

    /**
      * Check if command is 'logout'
      * @param line Line to check
      * @return True if is correct command
      */
    static bool isLogout(const std::string &line);

    /**
     * Check if has two argument
     * @param line Line to check
     * @return True if has two argument
     */
    static bool hasTwoArguments(std::vector<std::string> &line);

    /**
      * Check if command is 'book'
      * @param line Line to check
      * @return True if is correct command
      */
    static bool isBookArgument(const std::string &line);

    /**
      * Check if command is 'all'
      * @param line Line to check
      * @return True if is correct command
      */
    static bool isAll(const std::string &line);

    /**
      * Check if command is 'sort'
      * @param line Line to check
      * @return True if is correct command
      */
    static bool isSort(const std::string &line);

    /**
      * Check if command is 'info'
      * @param line Line to check
      * @return True if is correct command
      */
    static bool isInfo(const std::string &line);

    /**
      * Check if command is 'find'
      * @param line Line to check
      * @return True if is correct command
      */
    static bool isFind(const std::string &line);

    /**
      * Check if command is 'user'
      * @param line Line to check
      * @return True if is correct command
      */
    static bool isUserArgument(const std::string &line);

    /**
      * Check if command is 'add'
      * @param line Line to check
      * @return True if is correct command
      */
    static bool isAdd(const std::string &line);

    /**
      * Check if command is 'remove'
      * @param line Line to check
      * @return True if is correct command
      */
    static bool isRemove(const std::string &line);
};


#endif //LIBRARY_INVOKER_H
