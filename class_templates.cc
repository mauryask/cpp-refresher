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
// Here the typenae T and parameter length replaced at compile time
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

    T &at(int index)
    {
        return arr[index];
    }
};

int main()
{
    Array<int> intArr;
    intArr.fill(20);
    cout << intArr.at(4) << endl;
    Array<string> strArr;
    strArr.fill("Sample String");
    cout << strArr.at(4) << endl;
    //---------
    Array2<int, 10> intArr2;
    intArr2.fill(20);
    cout << intArr2.at(4) << endl;
    Array2<string, 10> strArr2;
    strArr2.fill("abc");
    // Since we are returning reference from at function we can modify it here as well
    // Like at index 4 there will be value "123"
    strArr2.at(4) = "123";
    for (int i = 0; i < 10; i++)
        cout << "strArr2[" << i << "] : " << strArr2.at(i) << endl;

    // Important: this is not valid as the input will be taken at runtime and the template
    // parameter replacement happens at compile time
    // int x;
    // cin >> x;
    // Array2<string, x> strArr3;    //Invlid

    // the parameters should be constant only
    return 0;
}