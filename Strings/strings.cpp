#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    string b;
    char c;
    string a_new = "";
    string b_new = "";
    
    cin >> a;
    cin >> b;

    int len_a = a.size();
    int len_b = b.size();
    

    cout << len_a << " " << len_b << endl;
    cout <<a<<b << endl;

    c = a[0];
    a[0] = b[0];
    b[0] = c;

    cout <<a << " " << b;



	// Complete the program
  
    return 0;
}
