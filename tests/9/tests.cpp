#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

int sum_array(int* arr, int size);

TEST_CASE("testing sum_array nullptr") {
    CHECK(sum_array(nullptr, 0) == 0);
    CHECK(sum_array(nullptr, 1) == 0);
    CHECK(sum_array(nullptr, 2) == 0);
    CHECK(sum_array(nullptr, 10) == 0);
    CHECK(sum_array(nullptr, 500) == 0);
}

TEST_CASE("testing sum_array on array") {
    int arr[] = {1, 2, 3, 4, 5};
    CHECK(sum_array(arr, 5) == 15);
    CHECK(sum_array(arr, 4) == 10);
    CHECK(sum_array(arr, 3) == 6);
    CHECK(sum_array(arr, 2) == 3);
    CHECK(sum_array(arr, 1) == 1);
    CHECK(sum_array(arr, 0) == 0);
}


TEST_CASE("testing sum_array on subarray") {
    int arr[] = {1, 2, 3, 4, 5};
    CHECK(sum_array(arr+1, 4) == 14);
    CHECK(sum_array(arr+2, 3) == 12);
    CHECK(sum_array(arr+3, 2) == 9);
    CHECK(sum_array(arr+4, 1) == 5);
    CHECK(sum_array(arr+5, 0) == 0);
    CHECK(sum_array(arr+2, 2) == 7);
}
