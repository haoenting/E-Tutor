#include<iostream>
using namespace std;
int main(){
    int n;
    cin >>n;
    while(n>0){
        int a,b,c;
        cin>>a>>b>>c;
        if(a>=60 && b>=60 && c>=60){
            cout<<"P"<<endl;
            n--;
            continue;
        }
        if((a+b+c)>=220){
            cout<<"P"<<endl;
            n--;
            continue;
        }
        if((a>=60 && b>=60)||(a >= 60 && c >= 60)||(b >=60 && c>=60)){
            if(a+b+c<220){
                cout<<"M"<<endl;
                n--;
                continue;
            }
        }
        if((a<60 && b<60)||(a < 60 && c < 60)||(b <60 && c<60)){
            if(a>=80 || b>=80||c >= 80){
                cout<<"M"<<endl;
                n--;
                continue;
            }
        }
        cout<<"F"<<endl;
        n--;
    }
} 
