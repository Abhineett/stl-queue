#include <iostream>
#include <queue>
using namespace std;

int main()
{

    queue<int>q;
    queue<int>q1;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q1.push(6);
    q1.push(10);
    q1.push(7);
    q1.push(8);
    q1.push(9);
    swap(q,q1);
    int n=q.size();
    int m=q1.size();
    for(int i=0;i<n;i++)
    {

        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    for(int i=0;i<m;i++)
    {

        cout<<q1.front()<<" ";
        q1.pop();
    }
}
