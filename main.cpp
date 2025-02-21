#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a;
    vector<int> b;
    int n, k;
    cin >> n;
    for(int i = 0;i < n; i++){
        cin >> k;
        a.push_back(k);
    }
    for(int k:a){
        if(k >= 0){
            b.push_back(k);
        }
    }
    for(int k:b){
        cout << k << " ";
    }
    return 0;
}