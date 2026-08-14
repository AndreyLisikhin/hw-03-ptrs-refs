#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

void sort_values(int& a, int& b, int& c);

TEST_CASE("testing sort_values") {
    SUBCASE("Basic sort") {
        int a{3};
        int b{2};
        int c{1};
        sort_values(a, b, c);
        CHECK(a == 1);
        CHECK(b == 2);
        CHECK(c == 3);
    }

    SUBCASE("No sort") {
        int a{1};
        int b{2};
        int c{3};
        sort_values(a, b, c);
        CHECK(a == 1);
        CHECK(b == 2);
        CHECK(c == 3);
    }

    SUBCASE("Sort 1") {
        int a{3};
        int b{1};
        int c{2};
        sort_values(a, b, c);
        CHECK(a == 1);
        CHECK(b == 2);
        CHECK(c == 3);
    }

    SUBCASE("Sort 2") {
        int a{2};
        int b{1};
        int c{3};
        sort_values(a, b, c);
        CHECK(a == 1);
        CHECK(b == 2);
        CHECK(c == 3);
    }

    SUBCASE("Sort 3") {
        int a{2};
        int b{3};
        int c{1};
        sort_values(a, b, c);
        CHECK(a == 1);
        CHECK(b == 2);
        CHECK(c == 3);
    }

    SUBCASE("Sort 4") {
        int a{3};
        int b{2};
        int c{1};
        sort_values(a, b, c);
        CHECK(a == 1);
        CHECK(b == 2);
        CHECK(c == 3);
    }

    SUBCASE("Sort 5") {
        int a{3};
        int b{1};
        int c{2};
        sort_values(a, b, c);
        CHECK(a == 1);
        CHECK(b == 2);
        CHECK(c == 3);
    }


    SUBCASE("Sort with same numbers 1") {
        int a{3};
        int b{2};
        int c{2};
        sort_values(a, b, c);
        CHECK(a == 2);
        CHECK(b == 2);
        CHECK(c == 3);
    }

    SUBCASE("Sort with same numbers 2") {
        int a{3};
        int b{3};
        int c{1};
        sort_values(a, b, c);
        CHECK(a == 1);
        CHECK(b == 3);
        CHECK(c == 3);
    }

    SUBCASE("Sort with same numbers 3") {
        int a{3};
        int b{3};
        int c{1};
        sort_values(a, b, c);
        CHECK(a == 1);
        CHECK(b == 3);
        CHECK(c == 3);
    }

    SUBCASE("Sort with same numbers 4") {
        int a{3};
        int b{2};
        int c{3};
        sort_values(a, b, c);
        CHECK(a == 2);
        CHECK(b == 3);
        CHECK(c == 3);
    }

    SUBCASE("Sort with same numbers 5") {
        int a{3};
        int b{4};
        int c{3};
        sort_values(a, b, c);
        CHECK(a == 3);
        CHECK(b == 3);
        CHECK(c == 4);
    }

    SUBCASE("Sort with same numbers 6") {
        int a{3};
        int b{3};
        int c{10};
        sort_values(a, b, c);
        CHECK(a == 3);
        CHECK(b == 3);
        CHECK(c == 10);
    }

    SUBCASE("Sort with same numbers 7") {
        int a{2};
        int b{6};
        int c{6};
        sort_values(a, b, c);
        CHECK(a == 2);
        CHECK(b == 6);
        CHECK(c == 6);
    }

    SUBCASE("Sort with same numbers 8") {
        int a{2};
        int b{6};
        int c{6};
        sort_values(a, b, c);
        CHECK(a == 2);
        CHECK(b == 6);
        CHECK(c == 6);
    }
}

