#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "catch.hpp"
#include "stats.h"
#include <math.h>
#include <cmath>
#include<algorithm>

TEST_CASE("reports average, minimum and maximum") {
    auto computedStats = Statistics::ComputeStatistics({1.5f, 8.9f, 3.2f, 4.5f});
    float epsilon = 0.001;
    REQUIRE(std::abs(computedStats.avg - 4.525) < epsilon);
    REQUIRE(std::abs(computedStats.max - 8.9) < epsilon);
    REQUIRE(std::abs(computedStats.min - 1.5) < epsilon);
}

TEST_CASE("average is NaN for empty array") {
    auto computedStats = Statistics::ComputeStatistics({});
    REQUIRE(isnan(computedStats.avg));
}
TEST_CASE("reports average for a array having nan values") {
    auto computedStats = Statistics::ComputeStatistics({1.5f,8.9f,3.2f,4.5f,NAN});
     float epsilon = 0.001;
    REQUIRE(std::abs(computedStats.avg - 4.525) < epsilon);
    REQUIRE(std::abs(computedStats.max - 8.9) < epsilon);
    REQUIRE(std::abs(computedStats.min - 1.5) < epsilon);
}

