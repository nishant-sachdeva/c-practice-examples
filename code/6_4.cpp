// advancing through an array

#include<bits/stdc++.h>


bool can_cross(std::vector<int> v){
    // here if we check if that function can be crossed
    int max_advance = 1;

    for(int i = 0; max_advance < v.size()-1 && i<=max_advance; i++){
        max_advance = std::max(max_advance, i + v[i]);
        std::cout << max_advance << std::endl;
    }
    return (max_advance >= (v.size()-1));
}


int main(){
    int n;
    std::cin >> n;

    std::vector<int> v;

    for(int i=0; i<n; i++){
        int a; std::cin >> a;
        v.push_back(a);
    }

    bool answer = can_cross(v);
    std::cout << int(answer) << std::endl;
    return 0;
}