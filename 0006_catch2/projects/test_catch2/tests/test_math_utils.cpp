#include "math_utils.h"
#include <catch2/catch_test_macros.hpp>


TEST_CASE("Addition works", "[math]") {
    REQUIRE(add(2, 3) == 5);
    REQUIRE(add(-1, 1) == 0);
    REQUIRE(add(0, 0) == 0);
}
