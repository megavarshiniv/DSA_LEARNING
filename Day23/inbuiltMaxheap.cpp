#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> pq;
    //100,90,95,120
    pq.push(100);
    pq.push(90);
    pq.push(95);
    pq.push(120);
    //check size
    cout<<"Size: "<<pq.size()<<endl;
    //get max element
    cout<<"Max element: "<<pq.top()<<endl;

    //print all elements in decreasing order
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
}