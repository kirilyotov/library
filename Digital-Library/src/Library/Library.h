#ifndef LIBRARY_LIBRARY_H
#define LIBRARY_LIBRARY_H

#include <iostream>
#include <fstream>
#include <set>
#include <algorithm>
#include "../Book/Book.h"

class Library {
public:
    /**
     * Default Constructor
     */
    Library() = default;

    /**
     * Default destructor
     */
    ~Library() = default;

    /**
     * Get book by ISBN
     * @param ISBN ISBN value
     * @return Book if exits otherwise nullptr
     */
    const Book &getBook(std::string ISBN) const;

    /**
     * Add Book to bookLibrary
     * @param book to add
     * @return True if Book is successfully dd
     * @return False if Book already exists
     */
    bool addBook(Book const &book);

    /**
     * Remove Book by given ISBN
     * @param ISBN Identification string of Book
     * @return True if Book is successfully deleted
     */
    bool removeBook(std::string ISBN);

    void sort(std::function<bool(const Book&, const Book&)>, bool isAscending);

    /**
     * Get number of Book in library
     * @return
     */
    int getLength() const;

    /**
     * Print books
     */
    void print() const;

    /**
    * Overload operator >> for istream
    * @param in Istream
    * @param library library to read
    * @return in stream
    */
    friend std::istream &operator>>(std::istream &in, Library& library);

    /**
     * Overload operator >> for istream
     * @param out OStream
     * @param library to write
     * @return out stream
     */
    friend std::ostream &operator<<(std::ostream &out, const Library &library);
private:
    /**
     * Store books
     */
    std::set<Book> bookLibrary;

    /**
     * Check if Book exists
     * @param book Book to search
     * @return True if Book exists otherwise false
     */
    bool bookExists(const Book &book);


};

#endif //LIBRARY_LIBRARY_H
