#include<bits\stdc++.h>
using namespace std;
class maxHeap{
    vector<int> heap;
    public:
    maxHeap(){};

    int getSize(){
        return heap.size();
    }
    bool isEmpty(){
        return heap.size() == 0;
    }
    int getMax(){
        if(isEmpty()) return -1;
        return heap[0];
    }
    void insert(int val){
        heap.push_back(val);
        int childIndex = getSize() - 1;
        while(childIndex > 0){
            int parentIndex = (childIndex - 1) / 2;
            if(heap[parentIndex] < heap[childIndex]){
                swap(heap[parentIndex], heap[childIndex]);
                childIndex = parentIndex;
            }
            else{
                break;
            }
        }
    }
    int removeMax(){
        if(isEmpty()) return -1;
        int ans=heap[0];
        heap[0] = heap[heap.size() - 1];
        heap.pop_back();

        //down heapify
        int parentIndex = 0;
        int leftChildIndex = 2 * parentIndex + 1;
        int rightChildIndex = 2 * parentIndex + 2;
        while(leftChildIndex < heap.size()){
            int maxIndex = parentIndex;
            if(heap[leftChildIndex] > heap[maxIndex]){
                maxIndex = leftChildIndex;
            }
            if(rightChildIndex<heap.size()&&heap[rightChildIndex] > heap[maxIndex]){
                maxIndex = rightChildIndex;
            }
            if(maxIndex == parentIndex) break;
            swap(heap[parentIndex], heap[maxIndex]);
            parentIndex = maxIndex;
            leftChildIndex = 2 * parentIndex + 1;
            rightChildIndex = 2 * parentIndex + 2;
        }
        return ans;
    }
};
int main(){
    maxHeap pq;
    cout << "Insert elements in Max heap:" << endl;
    int n;
    cout<<"Enter n:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        int val;
        cout<<"Enter value to insert:"<<endl;
        cin>>val;
        pq.insert(val);
    }
    cout<<"size of priority queue before removing any element: "<<pq.getSize()<<endl;
    cout<<"Maximum element in priority queue: "<<pq.getMax()<<endl;
    cout<<"is priority queue empty: "<<pq.isEmpty()<<endl;

    pq.removeMax();
    cout<<"Size after removing maximum element: "<<pq.getSize()<<endl;

    pq.removeMax();
    cout<<"size of priority queue after removing two element: "<<pq.getSize()<<endl;

    while(!pq.isEmpty()){
        cout<<pq.getMax()<<" ";
        pq.removeMax();
    }
}