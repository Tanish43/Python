
//code fail to run on test case with too large size(Time Limit Exceeded)
class Solution {
public:
    int trap(vector<int>& height) {
        if(height.size() < 3){ // minimum 3 size of array is required to fill water
            return 0;
        }
        int total = 0;
        int maxL = 0; // maximum left to the pointer(i)
        int maxR = 0; // maximum rught to the pointer(i)

        //Note: water cannot trap at zero and last index...
        // approach is to find the maximum container so that it can store water
        for(int i = 1; i<height.size()-1; i++){
            maxL = 0;
            maxR = i+1;
            for(int j = 0; j < i; j++){
                if(height[j] > height[maxL]){
                    maxL = j;
                }
            }
            for(int p = i+1; p<height.size(); p++){
                if(height[p] > height[maxR]){
                    maxR = p;
                }
            }
            if((min(height[maxL],height[maxR]) - height[i]) > 0){
                total += min(height[maxL],height[maxR]) - height[i];//fromula 
            }
        }
        return total;
    }
};