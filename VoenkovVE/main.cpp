#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "Header.h"
#include "../doctest.h"
TEST_CASE("testing") {
    CHECK(HelloWorld() == "Hello, World!");
    CHECK_FALSE(HelloWorld() == "Hello,World!");
}