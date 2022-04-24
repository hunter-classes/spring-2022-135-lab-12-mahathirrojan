#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include <vector> 
#include <string> 

#include "doctest.h"
#include "funcs.h"

std::string vector_to_string(std::vector<int> &vect) { 
    std::string temp = "";

    for(int a : vect) { 
        temp += std::to_string(a) + " ";
    }

    return temp;
}

TEST_CASE("TASK A") { 
    std::vector<int> test_one = makeVector(5);
    std::vector<int> test_two = makeVector(0);
    std::vector<int> test_three = makeVector(-10);  
    std::vector<int> test_four = makeVector(10); 
    std::vector<int> test_five = makeVector(4); 


    CHECK(vector_to_string(test_one) == "0 1 2 3 4 ");
    CHECK(vector_to_string(test_two) == "");
    CHECK(vector_to_string(test_three) == "");
    CHECK(vector_to_string(test_four) == "0 1 2 3 4 5 6 7 8 9 "); 
    CHECK(vector_to_string(test_five) == "0 1 2 3 "); 
}

TEST_CASE("TASK B") { 
    std::vector<int> test_one = {  };
    std::vector<int> test_two = { 1, 4, 6, 10, -10, -12, -14, 5 };
    std::vector<int> test_three = { -10, -5, -1, -10, -6, -100, 0 };
    std::vector<int> test_four = { -100, 4, 5, -10, 2, -5, -6, 1 };
    std::vector<int> test_five = { 1, 2, -1, 3, 4, -1, 6 };

    SUBCASE("TEST ONE") { 
        test_one = goodVibes(test_one);
        CHECK(vector_to_string(test_one) == "");
    }

    SUBCASE("TEST TWO") { 
        test_two = goodVibes(test_two);
        CHECK(vector_to_string(test_two) == "");
    }




}

TEST_CASE("TASK C") { 
    SUBCASE("TEST ONE") { 
        std::vector<int> test_one = {  };
        std::vector<int> test_two = { 1, 4, 6, 10, -10, -12, -14, 5 };

        gogeta(test_one, test_two);

        CHECK(vector_to_string(test_one) == "1 4 6 10 -10 -12 -14 5 ");
        CHECK(vector_to_string(test_two) == "");
    }

    SUBCASE("TEST TWO") { 
        std::vector<int> test_two = { 1, 4, 6, 10, -10, -12, -14, 5 };
        std::vector<int> test_four = { -100, 4, 5, -10, 2, -5, -6, 1 };

        gogeta(test_two, test_four); 

        CHECK(vector_to_string(test_two) == "1 4 6 10 -10 -12 -14 5 -100 4 5 -10 2 -5 -6 1 ");
        CHECK(vector_to_string(test_four) == "");
    }

    SUBCASE("TEST THREE") { 
        std::vector<int> test_three = { -10, -5, -1, -10, -6, -100, 0 };
        std::vector<int> test_four = { -100, 4, 5, -10, 2, -5, -6, 1 };

        gogeta(test_three, test_four);

        CHECK(vector_to_string(test_three) == "-10 -5 -1 -10 -6 -100 0 -100 4 5 -10 2 -5 -6 1 ");
        CHECK(vector_to_string(test_four) == "");
    }

    SUBCASE("TEST FOUR") { 
        std::vector<int> test_five = { 1, 2, -1, 3, 4, -1, 6 };
        std::vector<int> test_one = {  };
        
        gogeta(test_five, test_one);

        CHECK(vector_to_string(test_five) == "1 2 -1 3 4 -1 6 ");
        CHECK(vector_to_string(test_one) == "");
    }
    
    SUBCASE("TEST FIVE") { 
        std::vector<int> test_five = { 1, 2, -1, 3, 4, -1, 6 };
        std::vector<int> test_four = { -100, 4, 5, -10, 2, -5, -6, 1 };
        
        gogeta(test_five, test_four);

        CHECK(vector_to_string(test_five) == "1 2 -1 3 4 -1 6 -100 4 5 -10 2 -5 -6 1 ");
        CHECK(vector_to_string(test_four) == "");    
    }

    SUBCASE("TEST SIX") { 
        std::vector<int> temp = { }; 
        std::vector<int> empty = { };

        gogeta(temp, empty); 

        CHECK(vector_to_string(temp) == "");
        CHECK(vector_to_string(empty) == "");
    }
}

TEST_CASE("TASK D") { 
    SUBCASE("TEST ONE") { 
        std::vector<int> test_one = {  };
        std::vector<int> test_two = { 1, 4, 6, 10, -10, -12, -14, 5 };

        std::vector<int> sums = sumPairWise(test_one, test_two);
        
        CHECK(vector_to_string(sums) == "1 4 6 10 -10 -12 -14 5 ");
    }



    SUBCASE("TEST TWO") { 
        std::vector<int> test_two = { 1, 2, -1, 3, 4, -1, 6 };
        std::vector<int> test_one = {  };
    
        std::vector<int> sums = sumPairWise(test_two, test_one);

        CHECK(vector_to_string(sums) == "1 2 -1 3 4 -1 6 ");
    }
    

}