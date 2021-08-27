#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin >>arr[i];
    int i = 0;
    int j = n - 1;
    while(i<j)
    {
        while(arr[i] < 0)   i++;
        while(arr[j] > 0)   j--;
        if(i>j)
            break;
        swap(arr[i],arr[j]);
    }
    cout << "Changed array: ";
    for(int i=0;i<n;i++)
        cout << arr[i] << " ";
return 0;
}