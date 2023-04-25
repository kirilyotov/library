#include "cmd.h"
CMD* CMD::cmd = nullptr;

CMD *CMD::getInstance() {
    if(cmd == nullptr)
        cmd = new CMD();

    return cmd;
}

void CMD::run() {
    std::string line;
    while (true){
        std::getline(std::cin, line);
    }
}
