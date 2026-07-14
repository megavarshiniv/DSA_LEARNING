#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int,vector<int>,greater<int>> pq;
    //100,90,95,120
    pq.push(100);
    pq.push(90);
    pq.push(95);
    pq.push(120);
    //output-90,95,100,120
    //check size
    cout<<"Size: "<<pq.size()<<endl;
    //get min element
    cout<<"Min element: "<<pq.top()<<endl;

    //print all elements in increasing order
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
}