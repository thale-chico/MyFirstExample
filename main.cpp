#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int main()

    cout << "THE FIRST EXAMPLE MATH DISPLAY!\n";
    cout << "Hi, please enter two whole numbers: ";

    int32_t x,y;

    cin >> x >> y;
    cout << "Addition: " << x + y << endl;
    cout << "Subtraction: " << x - y << endl;
    cout << "Multiplication: " << x * y << endl;
    if( y == 0 ){
      cout << "Dividing by zero is not a number.\n";
    }
    else{
      cout << "Division: " << x / y << endl;
    }
    cout << "Remainder: " << x % y << endl;
    cout << "Square Root: " << sqrt(x) << endl;
    cout << "Square: " << pow(x, y) << endl;

    return 0;
}
