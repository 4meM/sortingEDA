#include <iostream>
#include <vector>
using namespace std;

void swap(vector<float> &arr, int pos_i, int pos_j){
    float temp = arr[pos_i];
    arr[pos_i] = arr[pos_j];
    arr[pos_j] = temp;
}


void bubbleSort(vector<float>& arr){
    for(int i = 0; i < arr.size() - 1; i++){
        for(int j = i ; j < arr.size(); j ++){
            if(arr[i] > arr[j])
                swap(arr,i,j);
        }
    }
}

void sortArray(vector<float> &arr){
    bubbleSort(arr);  
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    vector<float> arr;
    float number;
    while(cin >> number){
        arr.push_back(number);
    } 
    sortArray(arr);
}