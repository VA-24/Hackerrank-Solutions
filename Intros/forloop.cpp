#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    double a, b;

    cin >> a >> b;

    string Arr[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    for (int i = a; i <= b; i++)
        if (i <= 9)
            cout << Arr[i-1] << endl;
        else 
            if (i % 2 == 0)
                cout << "even" << endl;
        else 
            cout << "odd" << endl;


    return 0;
}
