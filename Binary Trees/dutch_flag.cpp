#include <iostream>
#include <vector>
#include <time.h>
#include <bits/stdc++.h>   
using namespace std;

void sorting(vector <int> & v) {
    int low = 0;
    int high = v.size() - 1;
    int i = 0;
    while(i<=high) {
        if (v[i] == 0) {
            swap(v[low],v[i]);
            low++;
        }
        else if (v[i] == 1) {
            i++;
        }
        else {
            swap(v[i],v[high]);
            high--;
        }
    
    
    
    }

}

int main() {
    time_t start,end;
    ios_base::sync_with_stdio(false);
    
    vector <int> v;
    int no;
    cout << "Enter the number of numbers(Only 0's,1's and 2's are allowed): ";
    cin >> no;
    int n;
    while(no--) {
        cout << "enter the number: ";
        cin >> n;
        v.push_back(n);

    }
    cout << "after Sorting: " << endl;
    vector <int> v1 = v;
    time(&start);
    
    sorting(v);
    time(&end);
    double time1 = double(end-start);
    cout << "First Time: " << time1 << endl;
    time(&start);
    sort(v1.begin(),v1.end());
    time(&end);
    double time2 = double(end-start);
    cout << "Second time: " << time2 << endl;
    for (auto i:v) {
        cout << i << endl;
    }
}