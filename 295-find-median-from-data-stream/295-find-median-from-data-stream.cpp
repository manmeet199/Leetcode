class MedianFinder {
public:
    priority_queue<int> q1;//maxheap
      priority_queue<int, vector<int>, greater<int> > q2;// min heap
    
    MedianFinder() {
        
    }
    // The left heap is containing elements in decreasing order (Max to Min) and right heap is in increasing order (Min to Max) but all the elements are greater than the left heap elements. We start pushing the elements in left heap and try to balance it everytime by comparing with the new elements and with heap size and accordingly put it into the right heap.
    void addNum(int num) {
        if(q1.empty()|| q1.top()>num)
        {
            q1.push(num);
        }
        else
        {
            q2.push(num);
        }
        if(q1.size()>q2.size()+1)
        {
            q2.push(q1.top());
            q1.pop();
        }
        else if( q2.size()>q1.size()+1)
        {
           q1.push(q2.top());
            q2.pop();              
            

        }
 
        
    }
    
    double findMedian() {
        
         if (q1.size() == q2.size()) {
			if (q1.empty()) {
				return 0;
			} else {
				double avg = (q1.top() + q2.top()) / 2.0;
				return avg;
			}

		} else {
			return q1.size() > q2.size() ? q1.top() : q2.top();
		}
        
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */