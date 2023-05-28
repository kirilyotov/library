#ifndef LIBRARY_BOOK_H
#define LIBRARY_BOOK_H
#include <iostream>
#include <string>
#include <ctime>

#define MIN_YEAR 1500
#define MIN_RATING 0
#define MAX_RATING 10
#define BASE_YEAR 1900
#define ISBN_LEN 13

class Book {
public:
    /**
     * All fields constructor
     * @param author Author of book
     * @param title Title of book
     * @param genre Genre of book
     * @param shortDescription Short description of book
     * @param year Year when book was publised
     * @param rating Rating of book from 1 to 10
     * @param ISBN Identification string of book
     */
    Book(std::string author, std::string title, std::string genre, std::string shortDescription, int year, int rating,
         std::string ISBN);

    /**
     * Get author of book
     * @return book author
     */
    const std::string getAuthor() const;

    /**
     * Get title of book
     * @return book title
     */
    const std::string getTitle() const;

    /**
     * Get genre of book
     * @return book genre
     */
    const std::string getGenre() const;

    /**
     * Get description of book
     * @return book description
     */
    const std::string getShortDescription() const;

    /**
     * Get year when book was published
     * @return publish year
     */
    const int getYear() const;

    /**
     * Get rating of book form [1,10]
     * @return book rating
     */
    const int getRating() const;

    /**
     * Get ISBN of book
     * @return ISBN
     */
    const std::string getISBN() const;

    /**
     * Compare books by ISBN
     * @return true if left Book has lower ISBN otherwise false
     */
    bool operator<(const Book& other) const;

    /**
     * Default destructor
     */
    ~Book() = default;
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
     *  Short description of book
     */
    std::string shortDescription;

    /**
     * Publish year of book
     */
    int year;

    /**
     *  Book rating
     */
    int rating;

    /**
     * ISBN of book - unique 13 digit string
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
};


#endif //LIBRARY_BOOK_H