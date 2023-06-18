#include<iostream>
#include<vector>
#include <iomanip>
#include<algorithm>
using namespace std;
int main(){
   int S,K,M,D;
   while(cin >> S >> K>>M>>D){
        int sum = S;
        if(D<M){
            sum += D * K;
        }
        else{
            sum+=M*K;
            D-= M;
            sum += D *(K+5);
        }
        cout<<sum<<endl;
   }
} 
