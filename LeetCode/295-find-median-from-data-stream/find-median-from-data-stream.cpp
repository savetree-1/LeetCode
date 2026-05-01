class MedianFinder {
private:
    priority_queue<int>maxH;
    priority_queue<int,vector<int>,greater<int>>minH;
public:
    MedianFinder() {}
    void addNum(int num) {
        if(maxH.empty() || num<=maxH.top())
        {
            maxH.push(num);
        }
        else
        {
            minH.push(num);
        }
        if(maxH.size()>minH.size()+1)
        {
            minH.push(maxH.top());
            maxH.pop();
        }
        else if(minH.size()>maxH.size())
        {
            maxH.push(minH.top());
            minH.pop();
        }
    }
    
    double findMedian() {
       if(maxH.size()==minH.size())
       {
        return (maxH.top()+ minH.top())/2.0;
       } 
       return maxH.top();
    }
};
