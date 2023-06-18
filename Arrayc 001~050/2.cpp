#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int arr[6];
    for(int i=0; i<6; i++){
        int n;
        cin >>arr[i];
    }
for(int i=5; i>=0; i--){
    if(i == 5)
        cout<<arr[i];
        else
    cout<<" " << arr[i];
    
}
cout<<endl;
    return 0;
}
