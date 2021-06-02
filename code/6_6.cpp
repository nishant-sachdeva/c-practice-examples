#include<bits/stdc++.h>


int find_max_profit(std::vector<int> v) {
    // we have to find the max profit

    int min_so_far = v[0];
    int max_profit = 0;
    for(int i = 0; i< v.size(); i++){
        max_profit = std::max(max_profit, v[i] - min_so_far);
        min_so_far = std::min(min_so_far, v[i]);
        // std::cout << max_profit << std::endl;
        // std::cout << min_so_far << std::endl;
    }
    return max_profit;
}


int main(){
    int n;
    std::cin >> n;

    std::vector<int> v;
    
    for(int i=0; i<n; i++){
        int a; std::cin >> a;
        v.push_back(a);
    }

    int answer = find_max_profit(v);

    std::cout << answer << std::endl;
    return 0;
}