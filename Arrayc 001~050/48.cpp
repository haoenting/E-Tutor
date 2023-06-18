#include<iostream>
#include<vector>
#include<string>
#include <iomanip>
#include<algorithm>
using namespace std;
int main(){
    int n;
    while(cin >>n){
        int a = (n/1000 + 7)%10;
        int b = (n/100%10 + 7)%10;
        int c = (n/10%10 + 7)%10;
        int d = (n%10 + 7)%10;
        cout<<c<<d<<a<<b<<endl;
    }
    return 0;
} 
