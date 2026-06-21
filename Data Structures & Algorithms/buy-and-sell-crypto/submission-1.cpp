class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi = INT_MAX;
        int mini = 0;
        for(int price:prices){
            maxi = min(maxi,price);
            mini = max(mini,price-maxi);
        }
        return mini;
    }
};
