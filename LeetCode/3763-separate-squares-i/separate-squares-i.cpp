class Solution {
public:
    double calci(vector<vector<int>>& squares,double curr)
    {
        double area=0;
        for(auto &sq:squares)
        {
            double y=sq[1];
            double l=sq[2];
            double top=y+l;
            if(y>=curr)
            {
                continue;
            }
            else if(top<=curr)
            {
                area+=l*l;
            }
            else
            {
                area+=l*(curr-y);
            }
        }
        return area;
    }    
    double separateSquares(vector<vector<int>>& squares) {
        double area = 0;
        double low=1e9;
        double high=0;
        for( auto v:squares)
        {
            double y=v[1];
            double l =v[2];
            area+=l*l;
            low=min(low,l);
            high=max(high,y+l);
        }
        double target=area/2.0;
        while (high - low > 1e-5) {
            double mid = low + (high-low) / 2.0;     
            if (calci(squares, mid) >= target)
                high = mid;
            else
                low = mid;
            }               
        return high; 
    }
};
















