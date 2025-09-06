#include <iostream>
#include <string>
using namespace std;

class IntArray
{
public:
    int arr[10];

    void fill(int value)
    {
        for (int i = 0; i < 10; i++)
        {
            arr[i] = value;
        }
    }

    int &at(int index)
    {
        return arr[index];
    }
};

class StringArary
{
public:
    string arr[10];

    void fill(string value)
    {
        for (int i = 0; i < 10; i++)
        {
            arr[i] = value;
        }
    }

    string &at(int index)
    {
        return arr[index];
    }
};

// If we observe both of the above classes has the same structure and funcationality
// Except the data type ones is in and other is string
// The above can we replaced with a single class using c++ class templates

// Version: 01
template <typename T>
class Array
{
public:
    T arr[10];

    void fill(T value)
    {
        for (int i = 0; i < 10; i++)
        {
            arr[i] = value;
        }
    }

    T &at(int index)
    {
        return arr[index];
    }
};

// Version: 02
template <typename T, int length>
class Array2
{
public:
    T arr[length];

    void fill(T value)
    {
        for (int i = 0; i < length; i++)
        {
            arr[i] = value;
        }
    }

    T& at(int index)
    {
        return arr[index];
    }
};

int main()
{
    // Here the type will be dicided at compile time by compiler
    Array<int> intArr;
    intArr.fill(20);
    cout << intArr.at(4) << endl;
    Array<string> strArr;
    strArr.fill("Sample String");
    cout << strArr.at(4) << endl;
    //---------
    Array2<int, 10> intArrr2;
    intArrr2.fill(20);
    cout << intArrr2.at(4) << endl;
    Array2<string, 10> strArrr2;
    strArrr2.fill("Sample String");
    cout << strArrr2.at(4) << endl;
    return 0;
}