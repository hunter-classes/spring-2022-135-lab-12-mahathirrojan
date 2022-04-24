#include <string> 
#include <vector>

std::vector<int> makeVector(int n){
    std::vector<int> nums;
    for(int z=0; z<n; z++){
        nums.push_back(z);
    }

    return nums;
}

std::vector<int> goodVibes(const std::vector<int>&v){
    std::vector <int> pos;

    for(int z = 0; z < pos.size(); z++){
        if(v.at(z) > 0){
            pos.push_back(z);
        }
    } 

    return pos;
}

void gogeta(std::vector<int> &goku, std::vector<int> &vegeta){
    const int size = vegeta.size();

    for(int i = 0; i < size; i++){
        goku.push_back(vegeta.at(0));
        vegeta.erase(vegeta.begin());
    }
}

std::vector<int> sumPairWise(const std::vector<int> &v1, const std::vector<int> &v2){
    std::vector<int> sums = v1.size() > v2.size() ? v1 : v2;

    const int size = v1.size() > v2.size() ? v2.size() : v1.size();

    for(int i = 0; i < size; i++){
        sums[i] = v1.at(i) - v2.at(i);

    }
    return sums;
}

