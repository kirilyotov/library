#include "../cmd.h"

CMD *CMD::cmd = nullptr;

CMD *CMD::getInstance() {
    if (cmd == nullptr)
        cmd = new CMD();

    return cmd;
}

void CMD::run() {
    std::string line;
    while (!invoker->exitProgram()) {
        std::cout << ">";
        getSubstrings();
        try {
            invoker->getCommand(line);
        } catch (std::runtime_error &error) {
            std::cerr << "Error: " << error.what() << std::endl;
        }

    }
}

void CMD::getSubstrings() {
    std::string input;
    std::istringstream iss(input);
    if(subStrings.size()!= 0){
        subStrings.clear();
    }


    std::string substring;
    while (std::getline(iss, substring, ' ')) {
        subStrings.push_back(substring);
    }
}
