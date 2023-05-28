#ifndef LIBRARY_BOOK_H
#define LIBRARY_BOOK_H

#include <iostream>
#include <string>
#include <ctime>
#include "../Utils/Utils.h"

#define MIN_YEAR 1500
#define MIN_RATING 0
#define MAX_RATING 10
#define BASE_YEAR 1900
#define ISBN_LEN 13

class Book {
public:
    Book() = default;
    /**
     * All fields constructor
     * @param author Author of Book
     * @param title Title of Book
     * @param genre Genre of Book
     * @param shortDescription Short description of Book
     * @param year Year when Book was publised
     * @param rating Rating of Book from 1 to 10
     * @param ISBN Identification string of Book
     */
    Book(std::string author, std::string title, std::string genre, std::string shortDescription, int year, int rating,
         std::string ISBN);

    /**
     * Get author of Book
     * @return Book author
     */
    const std::string getAuthor() const;

    /**
     * Get title of Book
     * @return Book title
     */
    const std::string getTitle() const;

    /**
     * Get genre of Book
     * @return Book genre
     */
    const std::string getGenre() const;

    /**
     * Get description of Book
     * @return Book description
     */
    const std::string getShortDescription() const;

    /**
     * Get year when Book was published
     * @return publish year
     */
    const int getYear() const;

    /**
     * Get rating of Book form [1,10]
     * @return Book rating
     */
    const int getRating() const;

    /**
     * Get ISBN of Book
     * @return ISBN
     */
    const std::string getISBN() const;

    /**
     * Compare books by ISBN
     * @return true if left Book has lower ISBN otherwise false
     */
    bool operator<(const Book &other) const;

    /**
     * Default destructor
     */
    ~Book() = default;

    friend std::ostream& operator<<(std::ostream& out, const Book& book);

private:

    /**
     * Author name
     */
    std::string author;

    /**
     *  Book title
     */
    std::string title;

    /**
     * Bool genre
     */
    std::string genre;

    /**
     *  Short description of Book
     */
    std::string shortDescription;

    /**
     * Publish year of Book
     */
    int year;

    /**
     *  Book rating
     */
    int rating;

    /**
     * ISBN of Book - unique 13 digit string
     */
    std::string ISBN;

    /**
     * Set year
     * @param year
     */
    void setYear(int year);

    /**
     * Set rating
     * @param rating
     */
    void setRating(int rating);

    /**
     * Set ISBN
     * @param ISBN
     */
    void setISBN(std::string ISBN);

    /**
     * Get current year
     * @return current year
     */
    int getCurrentYear();

    /**
     * Check if ISBN is correct
     * @param ISBN
     * @return True if correct otherwise false
     */
    bool isCorrectISBN(std::string ISBN);

    /**
     * Helping method for ISBN check
     * @param ch Char to check if its number
     * @return Ture if symbol is number [0-9]
     */
    bool isNumber(char ch) const;

    /**
     * Overload out stream
     * @param out stream
     * @param book book to write in stream
     * @return out
     */

};

#endif //LIBRARY_BOOK_H
