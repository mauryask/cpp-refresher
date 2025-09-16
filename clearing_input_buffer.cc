#include <iostream>
#include <limits>
using namespace std;

int main()
{
    int number = 0;
    cout << "Enter number: ";
    // Here after entering the number when we press enter ('\n')
    // number variable only goiung to hold the integer and the \n
    // will remain in the buffer which will be encountered by getline()
    // causing instant termination without taking linr input
    cin >> number;

    // The solution is to clear the buffer after the number input
    // ignore() funcation can be used for the same
    // It takes 2 argumenst
    // 5: Can ignore max 5 number of characters tom ignore
    // '\n': It will stop ignoring when encountered '\n' delimiter character

    // But this is not full proof solution
    // As user may etrer so many spaces and then a '\n'
    // Hence it will ignore only first 5 charcaters and wilol never reach till '\n'

    // cin.ignore(5, '\n');

    // Full proof solution
    // Ignore the max number of characters the input stream can have
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    char line[256];
    cout << "Enter line: ";
    // This function will terminate as soon as it encounters
    // the first new-line charcater '\n' in the input buffer
    // It will keep taking input until enter pressed: upto 256 characters
    cin.getline(line, 256);
    cout << "Line: ";
    cout << line << endl;
    return 0;
}