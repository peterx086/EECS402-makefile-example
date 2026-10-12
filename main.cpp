#include <iostream>
#include <string>
#include "mathutils.h"
#include "greeter.h"

using namespace std;

int main()
{
    string name;

    cout << "Enter your name: ";
    getline(cin, name);
    cout << makeGreeting(name) << endl;

    int x = 5;
    int y = 7;
    cout << x << " + " << y << " = " << add(x, y) << endl;
    cout << x << "! = " << factorial(x) << endl;

    return 0;
}