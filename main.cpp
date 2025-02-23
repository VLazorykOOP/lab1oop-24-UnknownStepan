#include <iostream>
#include <vector>
using namespace std;

int lab11() {
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

int lab12() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int start_flag = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] % 2 == 0)
        {
            start_flag = i;
            bool flag = false;
            int min = arr[i];
            for(int j = start_flag + 1; j < n; j++){
                if(arr[j]>= 0 and flag == false){
                    flag = true;
                    min = arr[j];
                }
                if(arr[j] < min and flag == true and arr[j] >= 0){
                    min = arr[j];
                }
            }
            if(flag == true){
                cout << min << endl;
            }
            else{
                
                cout << "no positive " << -1 << endl;
            }
            
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}
int lab13() {
    int n;
	cin >> n;
	int arr[2*n];
	vector<int> v;
	for (int i = 0; i < 2*n; i++)
		cin >> arr[i];
	int maxis = min(arr[0], arr[2*n-1]);
	for (int i = 0; i < n; i++)
	{
		v.push_back(min(arr[i], arr[2*n-i-1]));   
		
		if(maxis < v[i]){
			maxis = v[i];
		}
	}

	
	for (int k:v){
		cout << k << " ";
	}
	cout << endl << "max:" << maxis << endl;
	return 0;
}


int main() {
    int c;
    cout << "Enter number of lab[ ]\b\b";  
    cin >> c;
    switch (c)
    {
    case 1:
        lab11();
        break;
    case 2:
        lab12();
        break;
    case 3:
        lab13();
        break;
    default:
        break;
    }
}