#include <iostream>
#include <map>
using namespace std;
int main(){
    int n;
    while(cin >> n){
        if(n > 2 && n < 6)
        cout<<"Spring"<<endl;
        else if(n > 5 && n < 9)
            cout<<"Summer"<<endl;
        else if(n > 8 && n < 12)
            cout<<"Autumn"<<endl;
        else cout<<"Winter"<<endl;
    }
    return 0;
}
