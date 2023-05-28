#define CATCH_CONFIG_MAIN // This should come **before** including the 'catch.hpp'.
#include "../catch.hpp"
#include "../../src/Book/Book.h"
#include "BookTests/BookTests.cpp"
TEST_CASE("1"){
    Book book("Ivan Vasov", "Podigoto", "roman", "....", 1920, 9, "978013123456");
    REQUIRE(book.getAuthor() == "Ivan Vasov" );
}