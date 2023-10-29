#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


class MergeSortClass{
    public:
        MergeSortClass(int n); // Constructor
       ~MergeSortClass(); //Deconstructor
    void SetRandomArray();
    void ShowArray();
    void SetShuffledArray();
    void SetSortedArray();
    void SetReversedArray();
    void MergeSort(int,int);
    void Merge(int,int,int);
    private:
        long long size;
        int *a;
};

MergeSortClass::MergeSortClass(int n){
    size = n;
    a = new int[size];
}

MergeSortClass::~MergeSortClass(){
    delete[] a;
}


void MergeSortClass::SetRandomArray(){ // Makes a array of 10 random values
    for(int i=0;i<size; i++){
        long long num = 1 + rand()%(size); // Generate numbers 1-N
        a[i] = num;
    }
}


void MergeSortClass::SetSortedArray() { 
    for (int i = 0; i < size; ++i) {
        a[i] = i + 1;
    }
}

void MergeSortClass::SetShuffledArray() {
    SetSortedArray();
    int shuffleCount = static_cast<int>(size * 10);
    for (int i = 0; i < shuffleCount; ++i) {
        int index1 = rand() % size;
        int index2 = rand() % size;
        swap(a[index1], a[index2]);
    }
}


void MergeSortClass::SetReversedArray() {
    for (int i = 0; i < size; ++i) {
        a[i] = size - i;
    }
}

void MergeSortClass::ShowArray(){
    int count = 0;
    int Display100 = 100; // Display only 100 elements in each list
       for (int i = 0; i < 100; i++) {
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
void MergeSortClass::MergeSort(int l, int h){
   if(l<h){
    int mid=(l+h)/2; // Get mid
    MergeSort(l,mid); // sort left side of the array
    MergeSort(mid+1,h); // sort right side of the array
    Merge(l,mid,h);
   }
}

void MergeSortClass::Merge(int l, int mid, int h) {
    int size1 = mid - l + 1;
    int size2 = h - mid;

    int* leftArray = new int[size1];
    int* rightArray = new int[size2];

    for (int i = 0; i < size1; i++) {
        leftArray[i] = a[l + i]; // Copy data to left array
    }
    for (int i = 0; i < size2; i++) {
        rightArray[i] = a[mid + 1 + i]; // Copy data to right array
    }

    int i = 0;
    int j = 0;
    int k = l; // k is the index for the original array

    while (i < size1 && j < size2) {
        if (leftArray[i] <= rightArray[j]) {
            a[k++] = leftArray[i++];
        } else {
            a[k++] = rightArray[j++];
        }
    }

    // Copy remaining elements if any
    while (i < size1) {
        a[k++] = leftArray[i++];
    }

    while (j < size2) {
        a[k++] = rightArray[j++];
    }

    // Clean up the temporary arrays
    delete[] leftArray;
    delete[] rightArray;
}



