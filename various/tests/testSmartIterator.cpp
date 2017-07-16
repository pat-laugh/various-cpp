#include <sstream>
#include "catch.hpp"

#include "smartIterator.hpp"

using namespace std;
using namespace various;

TEST_CASE("Smart Iterator with empty stringstream", "[siemptybuffer]")
{
	SmartIterator it(stringstream(""));
	
	REQUIRE(it.end());
	REQUIRE(it.peekEnd());
	
}

TEST_CASE("Smart Iterator with empty string", "[siemptybuffer]")
{
	SmartIterator it("");
	
	REQUIRE(it.end());
	REQUIRE(it.peekEnd());
}

TEST_CASE("Smart Iterator with empty buffer", "[siemptybuffer]")
{
	stringstream ss("");
	SmartIterator it(ss.rdbuf());
	
	REQUIRE(it.end());
	REQUIRE(it.peekEnd());
}