#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include <algorithm>
#include <random>

void calculateStats(const int *arr, int size, int& minVal, int& maxVal, long long& sum);

void gen_vec(std::vector<int>& random_vector){
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<size_t> size_dist(1000, 5000);
    size_t random_size = size_dist(gen);
    random_vector.resize(random_size);
    std::uniform_int_distribution<int> val_dist(1, 10000);
    std::generate(random_vector.begin(), random_vector.end(), [&]() {
        return val_dist(gen);
    });
}

TEST_CASE("testing calculateStats") {
    for(int i=0;i<250;i++){
        std::vector<int> vec;
        gen_vec(vec);
        int minV;
        int maxV;
        long long sum;
        calculateStats(vec.data(), vec.size(),minV, maxV,  sum);
        CHECK(minV == *std::min_element(vec.begin(), vec.end()));
        CHECK(maxV == *std::max_element(vec.begin(), vec.end()));
        CHECK(sum == std::accumulate(vec.begin(), vec.end(), 0));
    }
}

