class FindSumPairs {
public:
    vector<int> nums1,nums2;
    unordered_map<int,int> map;


    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        this->nums1 = nums1;    
        this->nums2 = nums2;
        for(int num : nums2) {
            map[num]++;
        }
     }
    
    void add(int index, int val) {
        map[nums2[index]]--;
        if(map[nums2[index]]<=0) {
            map.erase(nums2[index]);
        }
        nums2[index]+=val;
        map[nums2[index]]++;
    }
    
    int count(int tot) {
        
        int count = 0;
        int diff = 0;

        for(int i=0;i<nums1.size();i++){
            diff = tot - nums1[i];
            if (map.find(diff)!=map.end()) {
                count+=map[diff];
            }
        }

        return count;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */