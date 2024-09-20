#include <iostream>
#include <vector>
using namespace std;

void swap(vector<int> &arr, int pos_i, int pos_j){
    int temp = arr[pos_i];
    arr[pos_i] = arr[pos_j];
    arr[pos_j] = temp;
}



void insertionSort(vector<int> &arr){
    for(int i = 0; i < arr.size() - 1; i ++){
        int menor = arr[i];
        int pos = i;
        for(int j = i + 1; j < arr.size(); j ++){
            if(menor > arr[j]){
                menor = arr[j]; 
                pos = j;
            }
        }
        swap(arr,i,pos);
    }
}

void sortArray(vector<int> &arr){
    insertionSort(arr);  
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