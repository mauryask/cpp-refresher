#include <iostream>
using namespace std;

int max_val(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

double max_val(double a, double b)
{
    if (a > b)
        return a;
    else
        return b;
}

// Function template to replace above redundent fucntions
template <typename T>
T max_val(T a, T b)
{
    if (a > b)
        return a;
    else
        return b;
}

// Template fucntion with multiple typenames of different types
template <typename T1, typename T2>
int get_size(T1 a, T2 b)
{
    if (sizeof(a) > sizeof(b))
        return sizeof(a);
    else
        return sizeof(b);
}

int main()
{
    int a = 20;
    int b = 15;
    int max_valVal = max_val<int>(a, b);
    cout << max_valVal << endl;

    double x = 20.5;
    double y = 10.2;
    double max_valVal2 = max_val<double>(x, y);
    cout << max_valVal2 << endl;

    int m;
    double n;

    int size = get_size(m, n);
    cout << size << endl;
    return 0;
}