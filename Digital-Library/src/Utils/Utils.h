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

    /**
     * Error message gor not existing command
     * @param command Command which does not exits
     * @return Constructed message
     */
    static std::string commandDoesNotExists(std::string command);
};


#endif //LIBRARY_UTILS_H
