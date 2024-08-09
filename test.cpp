
#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
    float const pi = 3.14f;
    float radius;
    cout << "Enter the radius: ";
    cin >> radius;
    float area = pi * radius * radius;
    cout << "Area of circle is: " << area;
    return 0;
}