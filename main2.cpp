//Знайти мінімальне значення додатних елементів, розташованих правіше першого елемента, кратного двом.

#include <iostream>
using namespace std;

int main()
{
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
                    cout << min << endl;
                }
            }
            if(flag == true){
                cout << min << endl;
            }
            else{
                cout << -1 << endl;
            }
            
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}