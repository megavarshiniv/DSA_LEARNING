class minHeap {
private :
    priority_queue<int,vector<int>,greater<int>>pq ;

public :
    void push ( int x ) {
        // Insert x into the heap
        pq.push(x);
    }
    
    void pop ( ) {
        // Remove the top (minimum) element
        if (!pq.empty()) {
            pq.pop();
        }
    }
    
    int peek ( ) {
        // Return the top element or -1 if empty
        if (pq.empty()) {
            return -1;
        }
        return pq.top();
    }
    
    int size ( ) {
        // Return the number of elements in the heap
        return pq.size();
    }
};