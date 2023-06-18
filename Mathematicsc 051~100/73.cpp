#include<iostream>
#include<vector>
#include <iomanip>
#include<algorithm>
using namespace std;
int main(){
   int a,b;
   while(cin >>a>>b){
   while(a>0){
    b=(b+1)*2;
    a--;
   }
   cout<<b<<endl;
   }
} 
