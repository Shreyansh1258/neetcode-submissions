class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int l  = 0;
        int r  = n-1;
        int water = INT_MIN;
        while(l<r){
            int height = min(heights[l],heights[r]);
            int width = r-l;
            int area = width*height;
            water = max(water,area);
            if(heights[l]<heights[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return water;
    }
};
