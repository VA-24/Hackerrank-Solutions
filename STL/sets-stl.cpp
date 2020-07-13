#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int n, query, integer;
    set<int>s;

    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> query >> integer;
        set<int>::iterator itr=s.find(integer);
        if (query == 1)
            s.insert(integer);
        else if (query == 2)
            s.erase(integer);
        else 
            if (itr != s.end()){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
        
    }
    return 0;
}

//the way that the iterator operator works, is that if it gets through every element in the set without finding the element it's working for,
//it'll be at the end, so that way, we know if it's at the end, it didn't find the element, and thus, we return Yes
