#include <iostream>
using namespace std;

/*
 * You nee to compile the program like : g++ main.cpp -o main
 * ./main a1 a2 a3
 * Here './main' [program name itself] is 1st, a1, a2 and a3 are 2nd, 3rd and 4th arguments respectivily
 */

// Here char* is pointer to character
// char* argv[] : it is an array of pointer to character
// more precisely: it is an array of c-style strings (null-terminated)
// argv is the base address of an array where each element is a pointer to a C-string.
// It is a pointer to a pointer to char (char**) when decayed.
int main(int argc /*argument count*/, /*char** argv*/ char *argv[] /*argument vector (aka: dynamic array)*/)
{
    // Note: instead of char* argv[] we can also write it as char **argv (as it is the pointer to the pointers)

    cout << "Argc:: " << argc << endl;

    if (argc == 3)
    {
        cout << "Argv[0]:: " << argv[0] << endl;
        cout << "Argv[1]:: " << argv[1] << endl;
        cout << "Argv[2]:: " << argv[2] << endl;
    }
    else
    {
        cout << "Exactly 2 arguments are required" << endl;
        return -1;
    }

    // argc can be used to iterate over an unknown number of arguments

    // Converting C-style string to C++ string
    string str(argv[0]);
    cout << "String length is:: " << str.length() << endl;
    return 0;
}