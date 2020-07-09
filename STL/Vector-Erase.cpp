#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, a, b, c, i, size;

    vector<int> m;

    cin >> n;

    for (i = 0; i < n; i++){
        int x;
        cin >> x;
        m.push_back(x);
    }

    
    cin >> a >> b >> c;

    m.erase(m.begin()+a-1);
    m.erase(m.begin()+b-1, m.begin()+c-1);

    size = m.size();

    cout << size << endl;

    for (int i = 0; i < size; i++){
        cout << m[i] << " ";
    }

    return 0;
}

