#include "../../catch.hpp"
#include "../../../src/Book/Book.h"
#include "../../../src/Utils/Utils.h"
#include <iostream>
#include <sstream>
#include <string>

TEST_CASE("Not correct ISBN") {
    std::string line;
    try {
        Book b("Ivan Vasov", "Podigoto", "roman", "....", 1920, 9, "978013234056");
        std::cout << b.getAuthor() << std::endl;
    } catch (std::invalid_argument error) {
        line = error.what();
    }
    REQUIRE(line.compare(Utils::NOT_CORRECT_ISBN) == 0);
}

TEST_CASE("Test out stream") {
    Book b("Ivan Vasov", "Podigoto", "roman", "....", 1920, 9, "9780132340156");
    std::ostringstream oss;
    oss <<  b;
    std::string expected = "Ivan Vasov Podigoto roman .... 1920 9 9780132340156";
    REQUIRE(oss.str() == expected);
}