#include <iostream>
#include <ctime>
#include <time.h>
#include <climits>
#include <iomanip>
using namespace std;


/*
    Name: Nathan Darrett
    Professor: Dhanyu Amarasinghe 
    Course: CSCI 41
*/


/*Program Info for SortTypes.cpp
    Purpose: To be able to make, sort and display sorted arrays  including the following...
        1) Selection Sort
        2) Insertion Sort
        3) Bubble Sort
    
Most of this code is from previous labs with added functions
*/



class SortType{

    public:
        SortType(int n); // Constructor
        ~SortType(); // Deconstructor
        void SetRandomArray(); // Sets an array with 10 random values
        void SetSortedArray(); // Make a sorted array of N values 
        void SetShuffledArray(); // Make a sorted array and then shuffle 10% of it's values
        void SetReversedArray(); // Set a reversed array starting N
        void ShowArray(); // Display Array
        void SelectionSort(); // Selection Sort Func
        void InsertionSort(); // Insertion Sort Func
        void BubbleSort(); // Bubble Sort Func
    
        

    private:
        int* a; // Let us use a dynamic array
        int size;
        
};

SortType::SortType(int n){ // Take in a n value where n is our size of the array
    size = n; 
    a = new int[size];

}

SortType::~SortType(){
    delete[] a;
}

void SortType::SetRandomArray(){ // Makes a array of 10 random values
    for(int i=0;i<size; i++){
        int num = 1 + rand()%(size); // Gets values from 1-10000 without including 0
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
    int shuffleCount = static_cast<int>(size * 0.1);
    for (int i = 0; i < shuffleCount; ++i) {
        int index1 = rand() % size; // Take random element
        int index2 = rand() % size; // Take another radnom element
        swap(a[index1], a[index2]); // Swap
    }
}


void SortType::SetReversedArray() {
    for (int i = 0; i < size; ++i) {
        a[i] = size - i;
    }
}

void SortType::ShowArray(){
    int count = 0;
       for (int i = 0; i < 100; i++) {
        cout << "\t" << a[i] << " ";
        count++;
        // Check if we have printed 10 elements
        if ((i + 1) % 10 == 0) {
            cout << endl; // Move to the next line after 10 elements
        }
    }
    cout << endl;
    // cout << "Total amount of elements shown: " << count << endl;
}

void SortType::SelectionSort(){ 
    for(int i = 0; i < size; i++) {
        for(int j = i + 1; j < size; j++) {
            if(a[j] < a[i]) {
                swap(a[j], a[i]);
            }
        }
    }

}

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







