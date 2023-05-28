#include "IOStream.h"

void IOStream::writeAccounts(const AdminPanel& adminPanel) {
    std::ofstream file ("./passwords.txt");

    if(!file.is_open()){
        throw std::runtime_error("Problem while opening file!");
    }
    file << adminPanel;
    file.close();
}

void IOStream::readBooks(const std::string &path, Library& library) {
    std::fstream file(path);
    if(!file.is_open()){
        throw std::runtime_error("Problem while writing to file!");
    }
    while (!file.eof()){
        file >> library;

    }
}

void IOStream::writeBooks(const std::string &path, const Library& library) {
    std::ofstream file (path);

    if(!file.is_open()){
        throw std::runtime_error("Problem while opening file!");
    }
    file << library;
    file.close();
}
