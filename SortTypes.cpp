#include <iostream>
#include <ctime>
#include <time.h>
#include <climits>
#include "mergesort.cpp"
#include "quicksort.cpp"
#include <iomanip>
using namespace std;

/*Goals for this program
     - Include MergeSort 
     - Include Quicksort
     - Add outputs for all functions in main()
     - record data for 10,000 size array for every possible array sort (total of 20)

    Goals right now
        - Get merge sort and quicksort working to display sorted arrays of n
*/



class SortType{

    public:
        SortType(int n);
        ~SortType();
        void SetSize(int);
        void SetRandomArray(); // Sets an array with 10 random values
        void SetSortedArray();
        void SetShuffledArray();
        void SetReverseArray();
        void ShowArray(); // Display Array
        void SelectionSort(); // Selection Sort Func
        void InsertionSort(); // Insertion Sort Func
        void BubbleSort(); // Bubble Sort Func
    
        

    private:
        int* a;
        long long size;
        int capacity = INT_MAX;
        
};

SortType::SortType(int n){
    size = n;
    a = new int[size];

}

SortType::~SortType(){
    delete[] a;
}

void SortType::SetSize(int n){
size = n;
}

void SortType::SetRandomArray(){ // Makes a array of 10 random values
    for(int i=0;i<size; i++){
        long long num = 1 + rand()%(size-1); // Gets values from 1-10000 without including 0
        a[i] = num;
    }
}

void SortType::SetSortedArray() {
    for (int i = 0; i < size; ++i) {
        a[i] = i + 1;
    }
}

void SortType::SetShuffledArray() {
    SetSortedArray();
    int shuffleCount = static_cast<int>(size * 10);
    for (int i = 0; i < shuffleCount; ++i) {
        int index1 = rand() % size;
        int index2 = rand() % size;
        swap(a[index1], a[index2]);
    }
}


void SortType::SetReverseArray() {
    for (int i = 0; i < size; ++i) {
        a[i] = size - i;
    }
}

void SortType::ShowArray(){
    int count = 0;
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

void SortType::SelectionSort(){ 
    int barWidth = 0;
    for(int i = 0; i < size; i++) {
        // Display the progress bar
        float progress = static_cast<float>(i) / size * 100; // Added a timer to check progress of the sorting progress
        cout << "\rSorting: [";
        int barWidth = 50;
        int pos = barWidth * progress / 100;
        for (int j = 0; j < barWidth; ++j) {
            if (j < pos) cout << "=";
            else if (j == pos) cout << ">";
            else cout << " ";
        }
        cout << "] " << setprecision(2) << fixed << progress << "%";
        
        for(int j = i + 1; j < size; j++) {
            if(a[j] < a[i]) {
                swap(a[j], a[i]);
            }
        }
    }

    // Clear the progress bar
    cout << "\rSorting: [";
    for (int j = 0; j < barWidth; ++j) {
        cout << "=";
    }
    cout << "] 100.00%" << endl;
}

 /*   for(int i=0;i<size;i++){ // I will be our starting index
        for (int j=i+1;j<size;j++){ // j will be i+1 and would compare every vaulue with the starting value
            if(a[j]<a[i]){
                swap(a[j], a[i]);
            }
        }
    } 
    */


void SortType::InsertionSort(){
    for(int i = 0;i<size;i++){
        int j=i;
        while(j>0 && a[j-1]>a[j]){ 
                swap(a[j-1],a[j]);
                j--;
            
            }
        }
    }

void SortType::BubbleSort(){
    for(int i=0;i<size;i++){
        for(int j=0;j<size-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
}






