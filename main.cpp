#include <iostream>
#include <vector>

using namespace std;

bool esPrimo(int n) {
    if (n <= 1) {
        return false;
    }

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;     
}


void insertionSort(vector<int> &arr, vector<int> &primos) {
    int n = arr.size();

    for (int i = 1; i < n; i++){
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j -= 1;
        }

        arr[j + 1] = key;
    }

    for (int num : arr) {
        if (esPrimo(num)) {
            primos.push_back(num);
        }
    }

}

void imprimir(vector<int> arr) {
    cout << '[';
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i];
        if (i != arr.size() - 1) {
            cout << ',';
        }
    }
    cout<<']'<<endl;
}

int main() {

    vector<int> arr = {12, 5, 3, 7, 11, 4, 8, 13};
    vector<int> arr_primos;

    cout<<"The array is not in order"<<'\n';
    imprimir(arr);

    insertionSort(arr, arr_primos);
    cout<<'\n';
    cout << "The array is now in order and select the prime numbers" << '\n';
    imprimir(arr_primos);


    return 0;
}