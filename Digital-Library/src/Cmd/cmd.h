#ifndef LIBRARY_CMD_H
#define LIBRARY_CMD_H
#include "../Utils/Utils.h"
#include "../Invoker/Invoker.h"

/**
 * Singleton class
 */
class CMD {
public:
    /**
     *
     */
    CMD(const CMD& ) = delete;

    /**
     *
     * @return
     */
    CMD& operator= (const CMD& ) = delete;

    /**
     *
     * @return
     */
    static  CMD* getInstance();

    /**
     *
     */
    void run();

private:
    /**
     * Default constructor
     */
    CMD() = default;

    /**
     * Single static instantiation of class
     */
    static CMD* cmd;

    /**
     * Invoke command
     */
    Invoker* invoker = new Invoker;
};


#endif //LIBRARY_CMD_H
