
#include "../Account.h"

Account::Account(std::string username, std::string password, GroupType type) {
    this->userName = username;
    this->password  = password;
    this->type = type;
}

bool Account::operator<(const Account &other) const {
    return other.userName < userName;
}

bool Account::isAdmin() {
    return type == GroupType::ADMIN;
}

std::ostream &operator<<(std::ostream &out, const Account &account) {
    out << account.userName << " " << account.password << "\n";
    return out;
}
