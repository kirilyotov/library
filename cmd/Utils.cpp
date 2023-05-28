#include "Utils.h"

const std::string Utils::CLOSE = "close";
const std::string Utils::SAVE = "save";
const std::string Utils::SAVE_AS = "saveas";
const std::string Utils::HElP = "help";
const std::string Utils::EXIT = "exit";

const std::string Utils::SUPPORTED_COMMAND_LIST = "The following commands are supported:\n"
                                                  "open <file>\topens <file>\n"
                                                  "close\t\t\tcloses currently opened file\n"
                                                  "save\t\t\tsaves the currently open file\n"
                                                  "saveas <file>\tsaves the currently open file in <file>\n"
                                                  "help\t\t\tprints this information\n"
                                                  "exit\t\t\texists the program\n";