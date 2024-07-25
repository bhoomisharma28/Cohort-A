class Solution {
public:
    int sum(vector<int> amt){
        int s=0;
        for(int i:amt){
            s+=i;
        }
        return s;
    }
    int maximumWealth(vector<vector<int>>& accounts) {
        int m=0;
        for(auto i: accounts){

                m=max(sum(i),m);

        }
        return m;
}
};
