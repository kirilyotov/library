#ifndef LIBRARY_ADMINPANEL_H
#define LIBRARY_ADMINPANEL_H
#include <iostream>
#include <string>
#include <set>
#include "User.h"

class AdminPanel {
public:
    /**
     *
     */
    AdminPanel();
    /**
     *
     * @param user
     * @return
     */
    bool addUser(const User & user);

    /**
     *
     * @param userName
     * @return
     */
    bool removeUser(std::string userName);

private:
    /**
     *
     */
    std::set<User> bookLibrary;
};


#endif //LIBRARY_ADMINPANEL_H
