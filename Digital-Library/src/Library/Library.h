#ifndef LIBRARY_LIBRARY_H
#define LIBRARY_LIBRARY_H
#include <iostream>
#include <set>
#include "../book/source/Book.cpp"


class Library {
public:
    /**
     *
     */
    Library() = default;

    /**
     *
     * @param book
     */
    Library(const Book &book);

    ~Library() = default;
    Book& operator[](int index);
    const Book& operator[](int index) const;
    Book& getBook(int index);

    /**
     * Add book to bookLibrary
     * @param book to add
     * @return True if book is successfully dd
     * @return False if book already exists
     */
    bool addBook( Book const & book);

    /**
     * Remove book by given ISBN
     * @param ISBN Identification string of book
     * @return True if book is successfully deleted
     */
    bool removeBook(std::string ISBN);

    /**
     * Get number of book in library
     * @return
     */
    int getLength() const;

    /**
     * Print books
     */
    void print() const;

private:
    /**
     * Store books
     */
   std::set<Book> bookLibrary;
   /**
    * Check if book exists
    * @param book Book to search
    * @return True if book exists otherwise false
    */
   bool bookExists(const Book& book);
};

#endif //LIBRARY_LIBRARY_H
