#include "../booksSortCommand.h"

void booksSortCommand::execute(std::vector<std::string> &line, Library &library) const {
    bool asc = false;
    if (library.getLength() == 3 && line[3] == "asc") {
        asc = true;
    }
    std::function<bool(const Book&, const Book&)>  compare = [](const Book &book1, const Book &book2) {
        return book1.getTitle() < book2.getTitle();
    };
    if (line[2] == "title") {
        compare = [](const Book &book1, const Book &book2) {
            return book1.getTitle() < book2.getTitle();
        };
        library.sort(compare, asc);
    }
    if (line[2] == "author") {
        compare = [](const Book &book1, const Book &book2) {
            return book1.getAuthor() < book2.getAuthor();
        };
        library.sort(compare, asc);
    }
    if (line[2] == "year") {
        compare = [](const Book &book1, const Book &book2) {
            return book1.getYear() < book2.getYear();
        };
        library.sort(compare, asc);
    }

    if (line[2] == "rating") {
        compare = [](const Book &book1, const Book &book2) {
            return book1.getRating() < book2.getRating();
        };
        library.sort(compare, asc);
    }
}
