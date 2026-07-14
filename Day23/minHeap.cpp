#include<bits\stdc++.h>
using namespace std;

class MinHeap{
    vector<int> heap;
    public:
    MinHeap(){};

    int getSize(){
        return heap.size();
    }
    bool isEmpty(){
        return heap.size() == 0;
    }
    int getMin(){
        if(isEmpty()) return -1;
        return heap[0];
    }
    void insert(int val){
        heap.push_back(val);
        int childIndex = getSize() - 1;
        while(childIndex > 0){
            int parentIndex = (childIndex - 1) / 2;
            if(heap[parentIndex] > heap[childIndex]){
                swap(heap[parentIndex], heap[childIndex]);
                childIndex = parentIndex;
            }
            else{
                break;
            }
        }
    }
    int removeMin(){
        if(isEmpty()) return -1;
        int ans=heap[0];
        heap[0] = heap[heap.size() - 1];
        heap.pop_back();
        int parentIndex = 0;
        int leftChildIndex = 2 * parentIndex + 1;
        int rightChildIndex = 2 * parentIndex + 2;
        while(leftChildIndex < heap.size()){
            int minIndex = parentIndex;
            if(heap[leftChildIndex] < heap[minIndex]){
                minIndex = leftChildIndex;
            }
            if(rightChildIndex<heap.size()&&heap[rightChildIndex] < heap[minIndex]){
                minIndex = rightChildIndex;
            }
            if(minIndex == parentIndex) break;
            swap(heap[parentIndex], heap[minIndex]);
            parentIndex = minIndex;
            leftChildIndex = 2 * parentIndex + 1;
            rightChildIndex = 2 * parentIndex + 2;
        }
        return ans;
    }
    void printMinHeap(MinHeap pq){
        while(!pq.isEmpty()){
            cout<<pq.getMin()<<" ";
            pq.removeMin();
        }
    }
};

int main(){
    MinHeap pq;
    cout << "Insert elements in Min heap:" << endl;
    int n;
    cout<<"Enter n:"<<endl;
    cin >> n;
    for(int i=0;i<n;i++){
        int elem;
        cout<<"Enter element "<<endl;
        cin >> elem;
        pq.insert(elem);
    }
    cout<<"size of priority queue before removing any element: "<<pq.getSize()<<endl;
    cout<<"Minimum element in priority queue: "<<pq.getMin()<<endl;
    cout<<"is priority queue empty: "<<pq.isEmpty()<<endl;

    pq.removeMin();
    cout<<"Size after removing minimum element: "<<pq.getSize()<<endl;

    pq.removeMin();
    cout<<"size of priority queue after removing two element: "<<pq.getSize()<<endl;
    
    pq.printMinHeap(pq);
}
