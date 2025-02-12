#include <iostream>
#include <vector>

std::vector<int> mergeSortedVectors(const std::vector<int>& vec1, const std::vector<int>& vec2) {
    std::vector<int> mergedVec;
    int i = 0, j = 0;

    while (i < vec1.size() && j < vec2.size()) {
        if (vec1[i] < vec2[j]) {
            mergedVec.push_back(vec1[i]);
            i++;
        } else {
            mergedVec.push_back(vec2[j]);
            j++;
        }
    }

    while (i < vec1.size()) {
        mergedVec.push_back(vec1[i]);
        i++;
    }

    while (j < vec2.size()) {
        mergedVec.push_back(vec2[j]);
        j++;
    }

    return mergedVec;
}

int main() {
    std::vector<int> vec1 = {1, 3, 5, 7};
    std::vector<int> vec2 = {2, 4, 6, 8};

    std::vector<int> mergedVec = mergeSortedVectors(vec1, vec2);

    std::cout << "Merged Vector: ";
    for (int num : mergedVec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}