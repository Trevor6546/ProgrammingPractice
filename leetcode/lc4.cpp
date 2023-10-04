class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        for(int x : nums1){
            v.push_back(x);
        }
        for(int x : nums2){
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        int x = v.size();
        if(x % 2 == 1){
            return v[x/2];
        }
        else{
            double ans = v[x/2] + v[(x/2)-1];
            ans /= 2;
            return ans;
        }
    }
};