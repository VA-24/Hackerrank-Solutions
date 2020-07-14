#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    map<string, int>m;
    int n, score, num;
    string name;
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> num;
        if (num == 1){
            cin >> name >> score;
            map<string,int>::iterator it = m.find(name);

            if (it != m.end()){
                int total = m[name] + score;
                m.erase(name);
                m.insert(make_pair(name, total));
            }
            else
                m.insert(make_pair(name, score));
        }
        else{
            cin >> name;
            map<string,int>::iterator it = m.find(name);

            if (num == 2){

                if (it != m.end())
                    m.erase(name);
            }
            else{
                if (it != m.end())
                    cout << m[name] << endl;
                else
                    cout << 0 << endl;
            }
        }

    }

    return 0;
}
