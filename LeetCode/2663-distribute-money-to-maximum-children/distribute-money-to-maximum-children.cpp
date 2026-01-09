class Solution {
public:
    int distMoney(int money, int children){
        if(money<children)return -1;
        if(children==1 && money==4)return -1;
        money-=children;
        int count=0;
        if(money<7)return 0;
        for(int i=0;i<children;i++)
        {
            if(money>=7)
            {money-=7;
            count++;
            if(money==3)
            {
                if(count!=0 && children-count==1)
                {
                    count--;
                }
            }
            }
        }
        if(count==children && money!=0)  return count-1;
        return count;
    }
};