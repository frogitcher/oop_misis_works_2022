#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <iostream>
#include <string>
#include "Header.h"
#include "../doctest.h"

using namespace std;


TEST_CASE("testing") {
    CHECK(HelloWorld() == "Hello, World!");
    CHECK_FALSE(HelloWorld() == "Hello, World");
}