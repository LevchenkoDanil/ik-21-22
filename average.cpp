#include <iostream>
using namespace std;

double calculateAverage(int arr[], int size) {
    double sum = 0.0;
    
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    
    return sum / size;
}

int main()
{
    int size;
    cout << "size: ";
    cin >> size;
    
    int* arr = new int[size];
    
    cout << "Write element:\n";
    for (int i = 0; i < size; i++) {
        cout << "element " << i + 1 << ": ";
        cin >> arr[i];
    }
    
    double average = calculateAverage(arr, size);
    
    cout << "average: " << average << endl;
    
    return 0;
}