#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include <limits>

void swap_int(int* a, int* b);

TEST_CASE("testing swap_int") {

    SUBCASE("Basic positive numbers") {
        int a{2};
        int b{4};
        swap_int(&a, &b);
        CHECK(a == 4);
        CHECK(b == 2);
    }

    SUBCASE("Negative numbers and zero") {
        int a{-5};
        int b{0};
        swap_int(&a, &b);
        CHECK(a == 0);
        CHECK(b == -5);
    }

    SUBCASE("Two negative numbers") {
        int a{-10};
        int b{-99};
        swap_int(&a, &b);
        CHECK(a == -99);
        CHECK(b == -10);
    }

    SUBCASE("Same values") {
        int a{7};
        int b{7};
        swap_int(&a, &b);
        CHECK(a == 7);
        CHECK(b == 7);
    }

    SUBCASE("Aliasing (swapping a variable with itself)") {
        int a{42};
        swap_int(&a, &a);
        CHECK(a == 42);
    }

    SUBCASE("Integer limits (INT_MAX and INT_MIN)") {
        int a = std::numeric_limits<int>::max();
        int b = std::numeric_limits<int>::min();

        swap_int(&a, &b);

        CHECK(a == std::numeric_limits<int>::min());
        CHECK(b == std::numeric_limits<int>::max());
    }
}

TEST_CASE("testing swap_int with nullptr") {

    SUBCASE("1 nullptr") {
        int a{2};
        int b{4};
        swap_int(&a, nullptr);
        CHECK(a == 2);
        CHECK(b == 4);
    }

    SUBCASE("1 nullptr") {
        int a{2};
        int b{4};
        swap_int(nullptr, &b);
        CHECK(a == 2);
        CHECK(b == 4);
    }

    SUBCASE("1 nullptr") {
        int a{2};
        int b{4};
        swap_int(nullptr, nullptr);
        CHECK(a == 2);
        CHECK(b == 4);
    }
}
