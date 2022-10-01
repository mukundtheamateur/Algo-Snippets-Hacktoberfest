#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main() {
    const long long MAXN = 1e5 + 5;
    int T, N, Q, nums[MAXN];
    cin >> T;
    while(T--) {
        cin >> N >> Q;
        for(int i=0; i<N; i++) cin >> nums[i];
        multiset<int> mst;  // It stores the difference b/w the elements of nums.
        for(int i=1; i<N; i++) mst.insert(nums[i] - nums[i-1]);
        while(Q--) {
            int i, x;
            cin >> i >> x;
            i--;
            
            if(i < N-1) {
                auto iter = mst.find(nums[i+1] - nums[i]);
                mst.erase(iter);
            }
            
            if(i > 0) {
                auto iter = mst.find(nums[i] - nums[i-1]);
                mst.erase(iter);
            }
            
            nums[i] = x;
            
            if(i < N-1) mst.insert(nums[i+1] - nums[i]);
            if(i > 0) mst.insert(nums[i] - nums[i-1]);
            
            if(mst.size()) {
                if(*mst.begin() < 0) cout << abs(*mst.begin());
                else cout << 0;
            }
            cout << "\n";
        }
    }
    
    return 0;
}