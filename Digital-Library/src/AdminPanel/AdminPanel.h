#ifndef LIBRARY_ADMINPANEL_H
#define LIBRARY_ADMINPANEL_H

#include <iostream>
#include <string>
#include <set>
#include "Account.h"

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
    bool addUser(const Account &user);

    /**
     *
     * @param userName
     * @return
     */
    bool removeUser(std::string userName);

    /**
     *
     * @param out
     * @param adminPanel
     * @return
     */
    friend std::ostream& operator << (std::ostream& out, const AdminPanel& adminPanel);

private:
    /**
     *
     */
    std::set<Account> bookLibrary;
};


#endif //LIBRARY_ADMINPANEL_H
