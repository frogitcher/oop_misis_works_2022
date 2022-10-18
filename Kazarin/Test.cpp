#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "HelloWorld.h"
#include "../doctest.h"

TEST_CASE("testing") {
    CHECK(HelloWorld() == "HelloWorld!");
    CHECK_FALSE(HelloWorld() == "HelloWorld");
}