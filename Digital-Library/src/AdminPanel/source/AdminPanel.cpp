
#include "../AdminPanel.h"

bool AdminPanel::addUser(const Account &user) {
    return false;
}

bool AdminPanel::removeUser(std::string userName) {
    return false;
}

std::ostream &operator<<(std::ostream &out, const AdminPanel &adminPanel) {

    for(const Account& account : adminPanel.panel){
        out << account;
    }
    return out;
}
