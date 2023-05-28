#include <algorithm>
#include "../Invoker.h"

Invoker::~Invoker() {
    delete command;
}

void Invoker::getCommand(std::vector<std::string> &subStrings) {
    std::string linetoLowerCase = toLowerCase(subStrings[0]);
    if(hasOneArgument(subStrings)){
        if (isClose(linetoLowerCase)) {
            command = new CloseCommand();
        }

        if (isHelp(linetoLowerCase)) {
            command = new HelpCommand();
        }

        if (isExit(linetoLowerCase)) {
            exit = false;
            return;
        }


    }


    if (isSave(linetoLowerCase)) {
        command = new SaveCommand();
    }

    if (isSaveAs(linetoLowerCase)) {
        command = new SaveAsCommand();
    }



    else {
        throw std::runtime_error(Utils::commandDoesNotExists(subStrings[0]));
    }

    command->execute(subStrings,library );
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
    return result;
}


bool Invoker::hasOneArgument(std::vector<std::string> &line) {
    return line.size() == 1;
}

bool Invoker::isLogin(const std::string &line) {
    return line == Utils::LOGIN;
}

bool Invoker::isLogout(const std::string &line) {
    return  line == Utils::LOGOUT;
}

bool Invoker::hasTwoArguments(std::vector<std::string> &line) {
    return line.size() == 2;
}

bool Invoker::isBookArgument(const std::string &line) {
    return line == Utils::BOOK;
}

bool Invoker::isAll(const std::string &line) {
    return line == Utils::ALL ;
}

bool Invoker::isSort(const std::string &line) {
    return line == Utils::SORT;
}

bool Invoker::isInfo(const std::string &line) {
    return line == Utils::INFO;
}

bool Invoker::isFind(const std::string &line) {
    return line == Utils::FIND ;
}

bool Invoker::isUserArgument(const std::string &line) {
    return line == Utils:: USER;
}

bool Invoker::isAdd(const std::string &line) {
    return line == Utils:: ADD;
}

bool Invoker::isRemove(const std::string &line) {
    return line == Utils::REMOVE;
}

bool Invoker::isOpen(const std::string &line) {
    return false;
}

bool Invoker::exitProgram() {
    return exit;
}
