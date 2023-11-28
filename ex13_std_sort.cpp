//------------------------------------------------------------------------------
// ex13_std_sort.cpp
//
// #TODO 1) write a custom comparison function to be called by std::sort()
// #TODO 2) call std::sort() to sort vector vfun in descending order of stars
// #TODO 3) write a range-based for loop to display elements of vector vfun
//------------------------------------------------------------------------------
#include <iostream>
#include <vector>

using namespace std;

//------------------------------------------------------------------------------
// data struct
//------------------------------------------------------------------------------
struct FunMeter {

    string activity;
    int stars;
};

//------------------------------------------------------------------------------
// #TODO 1) write a custom comparison function to be called by std::sort()
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// entry point
//------------------------------------------------------------------------------
int main() {

    vector<FunMeter> vfun = {
        { "finals week", 1 },
        { "my graduation day", 5 },
        { "roller coaster ride", 4 },
        { "a night at the opera", 2 },
        { "beach bonfire with friends", 3 },
    };

    // #TODO 2) call std::sort() to sort vector vfun in descending order of stars

    // #TODO 3) write a range-based for loop to display elements of vector vfun

    cout << "\nHappy Trails!\n";
}

