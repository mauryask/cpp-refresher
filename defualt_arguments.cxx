#include <iostream>
using namespace std;

// Default args should be assigned from right to left always: else will get error
// int add(int a, int b = 0, int c = 0)
// {
//     return a + b + c;
// }

// If prototype of a fucntion is given then you need to assign the
// Default args only in the prototype not in definition itself
int add(int a = 0, int b = 0, int c = 0);

int add(int a, int b, int c)
{
    return a + b + c;
}

int main()
{
    cout << add(1, 2, 3) << endl;
    cout << add(1, 2) << endl;
    cout << add(1) << endl;
    cout << add() << endl;
    return 0;
}