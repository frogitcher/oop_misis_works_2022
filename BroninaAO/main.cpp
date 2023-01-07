#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <iostream>
#include <string>
#include "Header.h"
#include "../doctest.h"

TEST_CASE("testing") {
  CHECK(HelloWorld() == "Hello, world");
  CHECK_FALSE(HelloWorld() == "Hello world");
}