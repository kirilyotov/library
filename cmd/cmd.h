#ifndef LIBRARY_CMD_H
#define LIBRARY_CMD_H
#include "Utils.h"
#include "Invoker.h"

class CMD {
public:
    CMD(const CMD& ) = delete;
    CMD& operator= (const CMD& ) = delete;
    static  CMD* getInstance();
    void run();

private:
    CMD() = default;
    static CMD* cmd;
    Invoker* invoker = new Invoker;
};


#endif //LIBRARY_CMD_H
