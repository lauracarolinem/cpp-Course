#include <iostream>
// #include <climits>
// #include <cfloat>

using namespace std;

int main(){

    cout << "char: " << sizeof(char) << "bytes\n";
    cout << "int: " << sizeof(int) << "bytes\n";
    cout << "short: " << sizeof(short) << "bytes\n";
    cout << "long: " << sizeof(long) << "bytes\n";
    cout << "long long: " << sizeof(long long) << "bytes" << endl;

    cout << "FLOATS\n";
    cout << "float: " << sizeof(float) << "bytes\n";
    cout << "double: " << sizeof(double) << "bytes\n";
    cout << "long double: " << sizeof(long double) << "bytes\n";
    return 0;
}