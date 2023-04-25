#include "cmd.h"

CMD *CMD::cmd = nullptr;

CMD *CMD::getInstance() {
    if (cmd == nullptr)
        cmd = new CMD();

    return cmd;
}

void CMD::run() {
    std::string line;
    while (!invoker->exitProgram()) {
        std::getline(std::cin, line);
        try {
            invoker->getCommand(line);
        } catch (std::runtime_error &error) {
            std::cerr << "Error: " << error.what() << std::endl;
        }

    }
}
