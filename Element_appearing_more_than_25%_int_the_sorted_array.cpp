class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int a = arr.size();
        a = a * 0.25;
        int ans;
        map<int,int> mp;
        for(int i=0; i<arr.size(); i++){
            mp[arr[i]]++;
            if(mp[arr[i]]>a){
                ans = arr[i];
                break;
            }
        }
        return ans;
    }
};
