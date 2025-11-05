#include <iostream>
using namespace std;

/*
 * You nee to compile the program like : g++ main.cpp -o main
 * ./main a1 a2 a3
 * Here main [program name itself] is first argument, a1, a2 and a3 are 2nd, 3rd and 4th arguments respectivily
 */

// Here char* is pointer to character
// char* argv[] : it is an array of pointer to character
// more precisely: it is an array of c-style strings (null-terminated)
// argv is the base address of an array where each element is a pointer to a C-string.
// It is a pointer to a pointer to char (char**) when decayed.
int main(int argc /*argument count*/, char *argv[] /*argument vector (aka: dynamic array)*/)
{
    cout << "Argc:: " << argc << endl;
    cout << "Argv[0]:: " << argv[0] << endl;
    cout << "Argv[1]:: " << argv[1] << endl;
    return 0;
}