int solve(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int maxx = INT_MIN;
    for(int i=1;i<=nums.size()-1;i++){
        maxx = max(maxx,nums[i]-nums[i-1]);
    }
    return maxx;
}