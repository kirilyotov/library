#ifndef LIBRARY_USER_H
#define LIBRARY_USER_H

#include <iostream>
#include <string>
#include "GroupType.h"

class User {
public:
    /**
     *
     * @param username
     * @param password
     * @param type
     */
    User(std::string username, std::string password, GroupType type);

    /**
     *
     * @param other
     * @return
     */
    bool operator<(const User &other) const;

    /**
     *
     */
    ~User() = default;

private:
    /**
     *
     */
    std::string userName;

    /**
     *
     */
    std::string password;
};


#endif //LIBRARY_USER_H
