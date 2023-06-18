#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n>0){
        int t,m,k;
        cin >> t>>m>>k;
        int arr[k];
        for(int count=0;count<k;count++){
            
            cin >>arr[count];
        }
        sort(arr,arr+k);   
        int sum =0;
        for(int count=0;count<m;count++)
            sum +=  arr[count];
        if(sum <= t)
            cout<<sum<<endl;
        else
            cout<<"Impossible"<<endl;
        n--;
    }
} 
