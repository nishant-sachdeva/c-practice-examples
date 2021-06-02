#include<bits/stdc++.h>

int number_of_duplicates(std::vector<int> v){
    // from the vector now, we have to remove duplicates
    // the assumption is that the array is sorted. but we did not assume that,
    sort(v.begin(), v.end());
    // now our array is sorted

    if(v.empty())
        return 0;

    int count = 1;

    for(int i = 1 ; i<v.size() ; i++)
        if(v[count-1] != v[i]){
            v[count++] = v[i];
        }

    for(int i = 0 ; i<count ; i++)
        std::cout << v[i] << " ";    
    std::cout << std::endl;

    return count;

}


int main(){
    int n;
    std::cin >> n;

    std::vector<int> v;

    for(int i=0; i<n; i++){
        int a; std::cin >> a;
        v.push_back(a);
    }

    int answer = number_of_duplicates(v);

    std::cout << answer << std::endl;

    return 0;
}