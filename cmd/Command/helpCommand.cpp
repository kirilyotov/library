#include "helpCommand.h"

void HelpCommand::execute() const {
    printSupportedCommandsList();
}

void HelpCommand::printSupportedCommandsList() const {
    std::cout << Utils::SUPPORTED_COMMAND_LIST;
}
