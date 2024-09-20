#include  <iostream>
#include <vector>
using namespace std;

int shellSort(vector<float> &arr)
{
    for (int gap = arr.size()/2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < arr.size(); i += 1)
        {
            float temp = arr[i];
            int j;            
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
                arr[j] = arr[j - gap];
            arr[j] = temp;
        }
    }
    return 0;
}

void printArray(vector<float> & arr)
{
    shellSort(arr);
    for (int i=0; i< arr.size(); i++)
        cout << arr[i] << " ";
}

int main()
{
    vector<float> arr;
    float number;
    while(cin >> number){
        arr.push_back(number);
    }
    printArray(arr);
    return 0;
}
