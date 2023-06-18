#include <iostream>
using namespace std;
int main(){
    int prime[505], isprime[505], n = 0;
    for(int count =0;count<505;count++)
        prime[count] = 0;
    for(int count = 2;count <505;count++){
        if(prime[count]==0){
            isprime[n++] = count;
            for(int c = 2; c*count< 505; c++){
                prime[c*count]=1;
            }
        }
    }


    int k;
    while(cin >> k){
        int sum =0, c=0;
        while(c<k){
            cout<<isprime[c]<<",";
            sum += isprime[c++];
        }
        cout<<endl;
        cout<<sum<<endl;
            
    }

    return 0;
}
