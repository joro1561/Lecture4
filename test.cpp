#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>
using namespace std;

TEST_CASE("Checking AddN")
{
    vector<int> v{1,2,3};
    vector<int> res = AddN(v,5);

    //CHECK(AddN(v,5) == {5,6,7});
    
    REQUIRE(v.size() == res.size());
    REQUIRE(res[0] == 6);
}
