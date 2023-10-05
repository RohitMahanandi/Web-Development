#include <bits/stdc++.h>
using namespace std;
int main() {
    vector <int> v;
    int number;
    cout << "Number of elements in vector(only 1 and 0 are allowed) : ";
    cin >> number;
    int hello;
    while(number--) {
        cin >> hello;
        v.push_back(hello);

    }
    int low = 0;
    int high = v.size() -1;
    while(low < high) {
        if (v[low] == 0) {
            low++;
    }   
        else {
            swap(v[low], v[high]);
            high--;
        }
        

    }
    for (auto i: v) {
        cout << i << " ";
    }
}