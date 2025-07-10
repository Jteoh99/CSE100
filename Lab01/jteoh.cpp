#include <iostream>

using namespace std;

int main() {
    int size;

    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++){
      cin >> arr[i];
    }

    for(int i = 1; i < size; i++){
      int sorted = i - 1;
      int current = arr[i];

      while(sorted >= 0 && arr[sorted] > current){
        arr[sorted+1] = arr[sorted];
        sorted--;
      }

      arr[sorted + 1] = current;

      for(int k = 0; k <= i; k++){
        cout << arr[k] << ";";
      }
      cout << endl;
    }
}