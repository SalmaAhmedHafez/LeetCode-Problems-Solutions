#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
 
#define ordered_set tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update>

class Solution {
public:
    int numTeams(vector<int>& rating) {
        ordered_set lf, ri;

        for(auto val : rating){
            ri.insert(val);
        }

        int ans = 0;
        int n = rating.size();
        for(int i = 0; i < n; i++){
            lf.insert(rating[i]);
            ri.erase(ri.upper_bound(rating[i]));

            int less_l = lf.order_of_key(rating[i]);
            int large_l = i - less_l;

            int less_r = ri.order_of_key(rating[i]);
            int large_r = n - i - 1 - less_r;
        
            ans += (less_l * large_r) + (less_r * large_l);
        }
        return ans;
    }
};