//
// Created by Karen on 9/17/2024.
//
#define CATCH_CONFIG_MAIN 
#include "catch.hpp"
#include "myStack.hpp"

TEST_CASE("A new stack is empty", "testTag1")
{
MyStack tester;
REQUIRE(tester.empty() == true);
REQUIRE(tester.full() == false);
}

TEST_CASE("A new stack is full", "testTag2")
{
MyStack tester;
    for (int i = 0; i < 10; ++i) {
        tester.push(i);
    }
REQUIRE(tester.full() == true);
}

TEST_CASE("Pushing and popping values", "[stack]") {
    MyStack tester;

    SECTION("Pushing values onto the stack") {
        REQUIRE(tester.push(1) == true);
        REQUIRE(tester.push(2) == true);
        REQUIRE(tester.push(3) == true);
        REQUIRE(tester.top() == 3);
        REQUIRE(tester.empty() == false);
        REQUIRE(tester.full() == false);
    }
    SECTION("Popping values from the stack") {
        tester.push(10);
        tester.push(20);
        tester.pop();
        REQUIRE(tester.top() == 10);
        tester.pop();
        REQUIRE(tester.empty() == true);
    }
    SECTION("Pushing to a full stack") {
        for (int i = 0; i < 10; ++i) {
            tester.push(i);
        }
        REQUIRE(tester.full() == true);
        REQUIRE(tester.push(11) == false);
    }
}
TEST_CASE("Edge cases for stack", "[stack]") {
    MyStack tester;

    SECTION("Popping an empty stack") {
        tester.pop();
        REQUIRE(tester.empty() == true);
        REQUIRE(tester.top() == -1);
    }

    SECTION("Checking top value of an empty stack") {
        REQUIRE(tester.top() == -1);
    }

    SECTION("Printing the stack") {
        tester.push(5);
        tester.push(15);
        tester.push(25);
        REQUIRE(tester.print().compare("5 15 25 "));
    }
}

