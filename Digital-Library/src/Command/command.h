#ifndef LIBRARY_COMMAND_H
#define LIBRARY_COMMAND_H


class Command {
public:
    virtual ~Command() = default;

    virtual void execute() const = 0;
};


#endif
