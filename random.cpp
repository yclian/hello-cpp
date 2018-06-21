#include <chrono>
#include <iostream>
#include <random>

using namespace std;

/**
 *  Demonstate how to generate random numbers in the latest C++.
 * 
 *  See: http://www.cplusplus.com/forum/beginner/183358/#msg897633
 */
int main() {

  mt19937 generator(chrono::system_clock::now().time_since_epoch().count());

  cout << "Random value: " << (generator() % 100) << endl;

}
