#include <iostream>
#include <algorithm>
using namespace std;

struct Player{
  string name;
  int sum;
};

bool mycompare(Player p1, Player p2){
   return p1.sum > p2.sum;
}

int main(){
    int total;
    cin >> total;
    Player p[300];
    int high, a,b,c,d,e;
    for(int count =0;count<total;count++){
        cin >> p[count].name >>high >> a >>b>>c>>d>>e;
        p[count].sum = 1000 + (high - 170) * 100 + (a + b + c + d + e) *20;
    }
    sort(p, p + total, mycompare);
            
    for(int count =0;count<total;count++)
        cout << p[count].name << endl;
   
  return 0;
}
