#ifndef LIBRARY_IOSTREAM_H
#define LIBRARY_IOSTREAM_H
#include <iostream>
#include <string>
#include <fstream>
#include "../AdminPanel/AdminPanel.h"
#include "../Library/Library.h"
#include "../Book/Book.h"
class IOStream {
public:
    static void writeAccounts(const AdminPanel& adminPanel);

    static void readBooks(const std::string& path, Library& library);

    static void writeBooks(const std::string& path, const Library& library);
};


#endif //LIBRARY_IOSTREAM_H
