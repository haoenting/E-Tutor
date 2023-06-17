#include <iostream>
using namespace std;
int main(){
    int a, b;
    while(cin >> a>> b){
        if(a*a+b*b < 10000)
            cout<<"inside"<<endl;
        else
            cout<<"outside"<<endl;
    }
    return 0;
}
