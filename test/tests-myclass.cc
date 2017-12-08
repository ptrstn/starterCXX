#include "myclass.h"
#include "catch.hpp"

TEST_CASE("MyClass Unit-Test1") {
    MyClass a;

    SECTION("default values") {
        REQUIRE(a.int_value() == 0);
        REQUIRE(a.float_value() == std::nullopt);
        REQUIRE(a.string_value().empty());
    }

    SECTION("Setter") {
        a.int_value(13);
        a.float_value(3.14);
        a.string_value("cheese");

        REQUIRE(a.int_value() == 13);
        REQUIRE(a.float_value() == 3.14f);
        REQUIRE(a.string_value() == "cheese");
    }
}