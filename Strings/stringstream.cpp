#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	stringstream ss (str);
    vector<int> output;
    char ch;
    int num;


    for (int i = 0; i <= str.size(); i ++)
        while (ss >> num){
            output.push_back(num); // makes it so that when it extracts, it adds to array output

            ss >> ch; // assigns each number to a character, original code didn't have this but after like 3 failed attempts i looked at the docs and saw that it needed it
        }
    return output; // returns finalized array after loops
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
