#include <bits/stdc++.h>
using namespace std;

int partition(vector<float> &arr, int low, int high) {
    float pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quickSort(vector<float> &vec, int low, int high) {

    if (low < high) {
        int pi = partition(vec, low, high);

        quickSort(vec, low, pi - 1);
        quickSort(vec, pi + 1, high);
    }
}

int main() {
    vector<float> vec; 
    float number;
    while(cin >> number){
        vec.push_back(number);
    }
    quickSort(vec, 0, vec.size() - 1);
    for (auto i : vec) {
        cout << i << " ";
    }
    return 0;
}
