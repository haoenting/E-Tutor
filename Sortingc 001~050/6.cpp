#include <bits/stdc++.h>
#define MAX 100

using namespace std;

typedef struct students
{
    int no;
    int math;
    int eng;
} Node;

bool cmp(Node a,Node b)
{
    if(a.math==b.math)
        return (a.eng>b.eng);
    else
        return (a.math>b.math);
}
Node arr[MAX];

int main()
{
    int n;
    Node *ptr=arr;
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> arr[i].no >> arr[i].math >> arr[i].eng;
    sort(arr,arr+n,cmp);
    while(n-->0)
    {
        cout << ptr->no << " " << ptr->math << " " << ptr->eng << endl;
        ptr++;
    }

    return 0;
}
