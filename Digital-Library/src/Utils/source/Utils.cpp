#include "../Utils.h"


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

const std::string Utils::NOT_CORRECT_ISBN = "Not correct ISBN";

const std::string Utils::LOGIN = "login";

const std::string Utils::OPEN = "open";

const std::string Utils::LOGOUT = "logout";

const std::string Utils::BOOK = "book";

const std::string Utils::ALL = "all";

const std::string Utils::SORT = "sort";

const std::string Utils::INFO = "info";

const std::string Utils::FIND = "find";

const std::string Utils::USER = "user";

const std::string Utils::ADD = "add";

const std::string Utils::REMOVE = "remove";

std::string Utils::commandDoesNotExists(std::string command) {
    return "Error: Command: " + command + " not found!";
}


std::string Utils::bookNotFound(std::string ISBN) {
    return "Book with ISBN: " + ISBN + " not found";
}
