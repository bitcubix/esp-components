#include "unity.h"

#include "../include/hello_world.h"

TEST_CASE("test hello world lib", "[hello_world]")
{
    TEST_ASSERT_EQUAL("Hello World!", hello_world());
}
