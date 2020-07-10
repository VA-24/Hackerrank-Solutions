#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//before you attempt this lesson on your own, hackerrank provided a link to learn lower
// bound, so be sure to check that out

int main() {
    int m, n, o, p;
    vector<int> a;

    cin >> m;

    for (int i = 0; i < m; i++){
        cin >> n;
        a.push_back(n);
    }

    cin >> o;

    for (int i = 0; i < o; i++){
        cin >> p;
        vector<int>::iterator low = lower_bound(a.begin(), a.end(), p);
        //this part was hard to find how to do, i recommend searching it up on
        //cplusplus.com
        if (a[low - a.begin()] == p){
            cout << "Yes " << (low - a.begin()+1)<< endl;
        }
        else{
            cout << "No " << (low - a.begin()+1) << endl;
        }

    }


    return 0;
}
