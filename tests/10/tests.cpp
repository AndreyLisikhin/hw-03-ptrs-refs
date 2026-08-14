#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

int sum_array(int* from, int* to);

TEST_CASE("testing sum_array nullptr") {
    int arr[] = {1, 2, 3, 4, 5};
    CHECK(sum_array(nullptr, nullptr) == 0);
    CHECK(sum_array(nullptr, arr+1) == 0);
    CHECK(sum_array(arr+2, nullptr) == 0);
}

TEST_CASE("testing sum_array on array") {
    int arr[] = {1, 2, 3, 4, 5};
    CHECK(sum_array(arr, arr+5) == 15);
    CHECK(sum_array(arr, arr+4) == 10);
    CHECK(sum_array(arr, arr+3) == 6);
    CHECK(sum_array(arr, arr+2) == 3);
    CHECK(sum_array(arr, arr+1) == 1);
    CHECK(sum_array(arr, arr+0) == 0);
}


TEST_CASE("testing sum_array on subarray") {
    int arr[] = {1, 2, 3, 4, 5};
    CHECK(sum_array(arr+1, arr+5) == 14);
    CHECK(sum_array(arr+2, arr+5) == 12);
    CHECK(sum_array(arr+3, arr+5) == 9);
    CHECK(sum_array(arr+4, arr+5) == 5);
    CHECK(sum_array(arr+5, arr+5) == 0);
    CHECK(sum_array(arr+2, arr+4) == 7);
}

TEST_CASE("testing sum_array on incorrect subarray") {
    int arr[] = {1, 2, 3, 4, 5};
    CHECK(sum_array(arr+5, arr+1) == 0);
    CHECK(sum_array(arr+2, arr+2) == 0);
    CHECK(sum_array(arr+3, arr+2) == 0);
    CHECK(sum_array(arr+5, arr+5) == 0);
    CHECK(sum_array(arr+5, arr+5) == 0);
    CHECK(sum_array(arr+5, arr+1) == 0);
}
