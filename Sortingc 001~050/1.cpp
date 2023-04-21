#include <iostream>
#include <algorithm>
using namespace std;
struct Node{
    int start, end;
};

bool mycompare(Node n1, Node n2){
    if(n1.start == n2.start)
        return n1.end > n2.end;
    return n1.start < n2.start;
}

int main(){
    int total;
    cin >> total;
    while(total > 0){
        int current;
        cin >> current;
        Node node[current];
        for(int count=0; count < current;count++)
            cin >> node[count].start >> node[count].end;
        
        sort(node, node + current, mycompare);
            
        int sum = 0, start = node[0].start, end = node[0].end;
        for(int count=1; count < current;count++){
            if(node[count].start > start){ // 起點不一樣
                if(node[count].start < end){ // 如果還有重疊
                    if(node[count].end > end) // 有超出
                        end = node[count].end;
                    continue;
                }
                // 如果沒有重疊
                sum += end-start;
                start = node[count].start;
                end = node[count].end;
            }
            if(node[count].end > end) // 起點一樣但是終點不一樣
                end = node[count].end;
             
        }
        sum += end-start;
        cout<<sum<<endl;
        total--;
    }
  return 0;
}
