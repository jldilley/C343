/*Name: Joshua Dilley
 *Date: 08/20/2026 (Uncle Ron's 85th birthday)
 *Compiler: Clion
 *Source Code: ModuleOneFunctions.cpp
 *Action: Learning function syntax in C++
 */

#include <iostream>
#include <string>

using namespace std;

int addition (int a, int b)
{
    int r; //variable local to the function
    r = a + b;
    return r;
}

void helloWorld()//used when no values are returned to the calling function
{
    cout << "Hello World!" << '\n';
}

void functionCallFunction()
{
    helloWorld();
}

void passByReference(int &a, int &b)
{
    a *= 10;
    b *= 10;
}

void passByValue(int a, int b)
{
    a *= 10;
    b *= 10;
}

string concatenate(string a, string b)
{
    return a + b;
}

string concatenateByReference(string& a, string& b)
{
    return a + b;
}

string concatenateMixAndMatch(const string& a, const string& b)
{
    return a + b;
}

void odd(int num); //protofunctions defined after the main
void even(int num);

long factorial(long fact) //very basic example of a recursive function
{
    if (fact > 1)
        return (fact * factorial(fact-1));
    else
        return 1;
}


int main()
{
    int multiple, sum, x = 4, y = 6, i;
    sum = addition(3,7);
    string c, d, e;
    string h = "Hello";
    string w = " world!";
    long f;


    cout << "Sum = " << sum << '\n';
    cout << "3 + 7 = " << addition(3,7) << '\n';
    cout << "x + y = " << addition (x,y) << '\n';
    multiple = 10 * addition(x,y);
    cout << "Multiple = " << multiple << '\n';

    helloWorld();
    functionCallFunction();

    passByValue(x,y);
    cout << "Pass by value = " << x << ", " << y << '\n';

    passByReference(x,y);
    cout << "Pass by reference = " << x << ", " << y << '\n';

    c = concatenate("Hello", " world!");
    cout << "Concatenate by value = " << c << '\n';

    d = concatenateByReference(h, w);
    cout << "Concatenate by reference = " << d << '\n';

    e = concatenateMixAndMatch(h, " world!");
    cout << "Concatenate by reference = " << e << '\n';

    do
    {
        cout << "Please enter a number (0 to exit): ";
        cin >> i;
        odd(i);
    }while (i != 0);

    cout << "Let's calculate a factorial. (0 to exit): ";
    cin >> f;
    cout << factorial(f) << '\n';


    return 0;
}

void odd(int num)
{
    if ((num%2!=0)) cout << "It is odd. \n";
    else even(num);
}

void even (int num)
{
    if ((num%2==0)) cout << "It is even. \n";
    else odd(num);
}
/* ****************************************Program Output**************************************************************
*Sum = 10
3 + 7 = 10
x + y = 10
Multiple = 100
Hello World!
Hello World!
Pass by value = 4, 6
Pass by reference = 40, 60
Concatenate by value = Hello world!
Concatenate by reference = Hello world!
Concatenate by reference = Hello world!
Please enter a number (0 to exit):0

It is even.
Let's calculate a factorial. (0 to exit):5

120

Process finished with exit code 0
 *
 *
 *
 *
 *********************************************************************************************************************/
