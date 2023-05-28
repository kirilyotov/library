#include <algorithm>
#include "Invoker.h"

Invoker::~Invoker() {
    delete command;
}

void Invoker::getCommand(const std::string &line) {
    std::string linetoLowerCase = toLowerCase(line);
    if (isClose(linetoLowerCase)) {
        command = new CloseCommand();
    }

    if (isSave(linetoLowerCase)) {
        command = new SaveCommand();
    }

    if (isSaveAs(linetoLowerCase)) {
        command = new SaveAsCommand();
    }

    if(isHelp(linetoLowerCase)){
        command = new HelpCommand();
    }

    if(isExit(linetoLowerCase)){
        command = new ExitCommand();
    } else{
        std::string message = "Command '" + line + "' do not exits!";
        throw std::runtime_error(message);
    }

    command->execute();
}

bool Invoker::isClose(const std::string &line) {
    return Utils::CLOSE == line;
}

bool Invoker::isSave(const std::string &line) {
    return Utils::SAVE == line;
}

bool Invoker::isSaveAs(const std::string &line) {
    return Utils::SAVE_AS == line;
}

bool Invoker::isHelp(const std::string &line) {
    return Utils::HElP == line;
}

bool Invoker::isExit(const std::string &line) {
    return Utils::EXIT == line;
}

std::string Invoker::toLowerCase(const std::string &line) {
    std::string result;
    std::transform(line.begin(), line.end(), std::back_inserter(result),
                   [](unsigned char c) { return std::tolower(c); });
    return  result;
}





