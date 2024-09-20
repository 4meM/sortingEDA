#include <iostream>
#include <vector>
using namespace std;

void swap(vector<int> &arr, int pos_i, int pos_j){
    int temp = arr[pos_i];
    arr[pos_i] = arr[pos_j];
    arr[pos_j] = temp;
}


void bubbleSort(vector<int>& arr){
    for(int i = 0; i < arr.size() - 1; i++){
        for(int j = i ; j < arr.size(); j ++){
            if(arr[i] > arr[j])
                swap(arr,i,j);
        }
    }
}

void sortArray(vector<int> &arr){
    bubbleSort(arr);  
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    vector<int> arr;
    int cases; cin >> cases;
    for(int i = 0; i < cases; i++){
        int number; cin >> number;
        arr.push_back(number);
    }

    sortArray(arr);
    

}