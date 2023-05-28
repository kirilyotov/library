#ifndef LIBRARY_ACCOUNT_H
#define LIBRARY_ACCOUNT_H

#include <iostream>
#include <string>
#include "GroupType.h"

class Account {
public:

    Account() = default;
    /**
     * Constructor with parameters
     * @param username Account username
     * @param password Account password
     * @param type Account type
     */
    Account(std::string username, std::string password, GroupType type);

    /**
     *
     * @param other
     * @return
     */
    bool operator<(const Account &other) const;

    /**
     * Default destructor
     */
    ~Account() = default;

    /**
     * Check if user is ADMIN
     * @return True if admin account
     */
    bool isAdmin();

private:
    /**
     * Account Name
     */
    std::string userName;

    /**
     * Account password
     */
    std::string password;

    GroupType type;
};


#endif //LIBRARY_ACCOUNT_H
