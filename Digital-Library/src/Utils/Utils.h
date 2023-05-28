#ifndef LIBRARY_UTILS_H
#define LIBRARY_UTILS_H

#include <iostream>
#include <string>

/**
 * Class which stores all console UI strings
 */
class Utils {
public:
    /**
     * Close string
     */
    static const std::string CLOSE;

    /**
     * Save string
     */
    static const std::string SAVE;

    /**
     * Save as string
     */
    static const std::string SAVE_AS;

    /**
     * Help menu
     */
    static const std::string HElP;

    /**
     * Exit string
     */
    static const std::string EXIT;

    /**
     * Menu with supported commands
     */
    static const std::string SUPPORTED_COMMAND_LIST;

    static const std::string NOT_CORRECT_ISBN;

    static const std::string LOGIN;

    static const std::string OPEN;

    static const std::string LOGOUT;

    static const std::string BOOK;

    static const std::string ALL;

    static const std::string SORT;

    static const std::string INFO;

    static const std::string FIND;

    static const std::string USER;

    static const std::string ADD;

    static const std::string REMOVE;
    /**
     * Error message gor not existing command
     * @param command Command which does not exits
     * @return Constructed message
     */
    static std::string commandDoesNotExists(std::string command);

    /**
     * Error Book not found
     * @param ISBN Not found ISBN
     * @return Constructed message
     */
    static std::string bookNotFound(std::string ISBN);
};


#endif //LIBRARY_UTILS_H
