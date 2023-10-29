#include <iostream>
using namespace std;

class QuickSortClass{
    public:
            QuickSortClass();
            ~QuickSortClass();
        void SetRandomArray();
        void ShowArray();
        int Partition(int l, int h);
        void QuickSort(int l,int j);

    private:
        int* a;
        int l;
        int h;
        int size;
        
};

QuickSortClass::QuickSortClass(){
    size = 10;
    a = new int[size];
    l = 0;
    h = size;
}
QuickSortClass::~QuickSortClass() {

    delete[] a; // Free the memory allocated for 'a'
}
void QuickSortClass::SetRandomArray(){ // Makes a array of random values and random size
    for(int i=0;i<size; i++){ // For whatever the size is...
        a[i] = rand()%100;    // Put A Random value
    }
}

void QuickSortClass::ShowArray(){
    cout << "[";
    for(int i=0;i<size;i++){
        cout << a[i];
    if(i != size-1){
        cout << ", ";
    }
    }
    cout << "]" << endl;
}

int QuickSortClass::Partition(int l, int h) {
    int pivot = a[l]; 

    int i = l-1; // Set i equal l so we can increment
    int j = h;// Set j equal h so we can increment

    while (i<j) {
        do {
            i++; 
        } while (a[i] <= pivot); // Keep incrementing until this is false

        do {
            j--;
        } while (a[j] > pivot); // Keep incrementing until this is false
    if(i<j){
       swap(a[i], a[j]); // Swap the unsorted values
    }
     // Swap if and only if there is a new pivot point, otherwise divide and conquer arrays with QuickSort();
    }
    swap(a[l],a[j]);
    return j;
}



void QuickSortClass::QuickSort(int l, int h){
    if(l<h){
       int j = Partition(l,h);
        QuickSort(l,j); // Sort the first half of the array
        QuickSort(j+1,h); // Sort the second half of the array
    }
}
