#include <iostream>
using namespace std;


class QuickSortClass{
    public:
            QuickSortClass(int n);
            ~QuickSortClass();
        void SetRandomArray();
        void SetShuffledArray();
        void SetSortedArray();
        void ShowArray();
        void SetReversedArray();
        int Partition(int l, int h);
        void QuickSort(int l,int j);

    private:
        int* a;
        int size;
        
};

QuickSortClass::QuickSortClass(int n){
    size = n;
    a = new int[size];
 
}

QuickSortClass::~QuickSortClass() {

    delete[] a; // Free the memory allocated for 'a'
}

void QuickSortClass::SetRandomArray(){ // Makes a array of 10 random values
    for(int i=0;i<size; i++){
        long long num = 1 + rand()%(size-1); // Generate numbers 1-N
        a[i] = num;
    }
}


void QuickSortClass::SetSortedArray() { 
    for (int i = 0; i < size; ++i) {
        a[i] = i + 1;
    }
}

void QuickSortClass::SetShuffledArray() {
    SetSortedArray();
    int shuffleCount = static_cast<int>(size * 0.1);
    for (int i = 0; i < shuffleCount; ++i) {
        int index1 = i;
        int index2 = i+1;
        swap(a[index1], a[index2]);
    }
}


void QuickSortClass::SetReversedArray() {
    for (int i = 0; i < size; ++i) {
        a[i] = size - i;
    }
}

void QuickSortClass::ShowArray(){
    int count = 0;
    int Display100 = 100; // Display only 100 elements in each list
       for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
        count++;
        // Check if we have printed 10 elements
        if ((i + 1) % 10 == 0) {
            cout << endl; // Move to the next line after 10 elements
        }
    }
    cout << endl;
    cout << "Total amount of elements shown: " << count << endl;
}

int QuickSortClass::Partition(int l, int h) {
    int pivot = a[l];
    int i = l - 1;
    int j = h + 1;

    while (true) {
        do {
            i++;
        } while (a[i] < pivot);

        do {
            j--;
        } while (a[j] > pivot);

        if (i >= j) {
            return j;
        }

        swap(a[i], a[j]);
    }
}




void QuickSortClass::QuickSort(int l, int h){
    if(l<h){
       int j = Partition(l,h);
        QuickSort(l,j); // Sort the first half of the array
        QuickSort(j+1,h); // Sort the second half of the array
    }
}

