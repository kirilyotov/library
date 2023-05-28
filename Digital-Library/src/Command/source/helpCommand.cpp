#include "../helpCommand.h"

void HelpCommand::execute(std::vector<std::string> &line, Library& library) const {
    printSupportedCommandsList();
}

void HelpCommand::printSupportedCommandsList() const {
    std::cout << Utils::SUPPORTED_COMMAND_LIST;
}
