#include <iostream>
#include <ctime>
#include <time.h>
#include "mergesort.cpp"
#include "quicksort.cpp"
#include "SortTypes.cpp"
#include <iomanip>
using namespace std;



clock_t startTime, endTime; 
double timeTaken; // Store time here



// All 10,000 sort values

void Insertionsort10000(){
    srand(time(0));
SortType list1b(10000); // Using Insertion Sort
list1b.SetRandomArray();
startTime = clock();
list1b.InsertionSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << " \t\t\t\tSort Type: Random Array " << endl;
list1b.ShowArray();
cout << "\t\t\t\tTime elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list1b.SetShuffledArray();
startTime = clock();
list1b.InsertionSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << " \t\t\t\tSort Type: Shuffled Array " << endl;
list1b.ShowArray();
cout << "\t\t\t\tTime elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list1b.SetReversedArray();
startTime = clock();
list1b.InsertionSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << "\t\t\t\tSort Type: Reversed Array " << endl;
list1b.ShowArray();
cout << "\t\t\t\tTime elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list1b.SetSortedArray();
startTime = clock();
list1b.InsertionSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << "\t\t\t\tSort Type: Sorted Array " << endl;
list1b.ShowArray();
cout << "\t\t\t\tTime elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;


}

void Selectionsort10000(){
    srand(time(0));
SortType list1b(10000); // Using Insertion Sort

list1b.SetRandomArray();
startTime = clock();
list1b.SelectionSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << "\t\t\t\tSort Type: Random Array " << endl;
list1b.ShowArray();
cout << "\t\t\t\tTime elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list1b.SetShuffledArray();
startTime = clock();
list1b.SelectionSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << "\t\t\t\tSort Type: Shuffled Array " << endl;
list1b.ShowArray();
cout << "\t\t\t\tTime elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list1b.SetReversedArray();
startTime = clock();
list1b.SelectionSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << "\t\t\t\tSort Type: Reversed Array " << endl;
list1b.ShowArray();
cout << "\t\t\t\tTime elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list1b.SetSortedArray();
startTime = clock();
list1b.SelectionSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << "\t\t\t\tSort Type: Sorted Array" << endl;
list1b.ShowArray();
cout << "\t\t\t\tTime elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

}

void Bubblesort10000(){
    srand(time(0));
SortType list2a(10000);

list2a.SetRandomArray();
startTime = clock();
list2a.BubbleSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << "\t\t\t\tSort Type: Random Array " << endl;
list2a.ShowArray();
cout << "\t\t\t\tTime elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list2a.SetShuffledArray();
startTime = clock();
list2a.BubbleSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << "\t\t\t\tSort Type: Shuffled Array " << endl;
list2a.ShowArray();
cout << "\t\t\t\tTime elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list2a.SetReversedArray();
startTime = clock();
list2a.BubbleSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << "\t\t\t\tSort Type: Reversed Array " << endl;
list2a.ShowArray();
cout << "\t\t\t\tTime elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list2a.SetSortedArray();
startTime = clock();
list2a.BubbleSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << "\t\t\t\tSort Type: Sorted Array " << endl;
list2a.ShowArray();
cout << "\t\t\t\tTime elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;
}

void Mergesort10000(){
    srand(time(0));
MergeSortClass list2d(10000);
list2d.SetRandomArray();
startTime = clock();
list2d.MergeSort(0, 9999);
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC); // calculating time in seconds
cout << "\t\t\t\tSort Type: Random Array " << endl;
list2d.ShowArray();
cout << "\t\t\t\tTime elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list2d.SetShuffledArray();
startTime = clock();
list2d.MergeSort(0, 9999);
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC); // calculating time in seconds
cout << "\t\t\t\tSort Type: Shuffled Array " << endl;
list2d.ShowArray();
cout << "\t\t\t\tTime elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list2d.SetReversedArray();
startTime = clock();
list2d.MergeSort(0, 9999);
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC); // calculating time in seconds
cout << "\t\t\t\tSort Type: Reversed Array " << endl;
list2d.ShowArray();
cout << "\t\t\t\tTime elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list2d.SetSortedArray();
startTime = clock();
list2d.MergeSort(0, 9999);
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC); // calculating time in seconds
cout << "\t\t\t\tSort Type: Sorted Array " << endl;
list2d.ShowArray();
cout << "\t\t\t\tTime elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;
}

void Quicksort10000(){
    srand(time(0));
QuickSortClass list2e(10000);

list2e.SetRandomArray();
startTime = clock();
list2e.QuickSort(0, 9999);
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC); // calculating time in seconds
cout << "\t\t\t\tSort Type: Random Array " << endl;
list2e.ShowArray();
cout << "\t\t\t\tTime elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list2e.SetShuffledArray();
startTime = clock();
list2e.QuickSort(0, 9999);
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC); // calculating time in seconds
cout << "\t\t\t\tSort Type: Shuffled Array " << endl;
list2e.ShowArray();
cout << "\t\t\t\tTime elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list2e.SetReversedArray();
startTime = clock();
list2e.QuickSort(0, 9999);
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC); // calculating time in seconds
cout << "\t\t\t\tSort Type: Reversed Array " << endl;
list2e.ShowArray();
cout << "\t\t\t\tTime elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list2e.SetSortedArray();
startTime = clock();
list2e.QuickSort(0, 9999);
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC); // calculating time in seconds
cout << "\t\t\t\tSort Type: Sorted Array " << endl;
list2e.ShowArray();
cout << "\t\t\t\tTime elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;
}



// All 100,000 sort values


void Insertionsort100000(){
     srand(time(0));
SortType list1b(100000); // Using Insertion Sort
list1b.SetRandomArray();
startTime = clock();
list1b.InsertionSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << " \t\t\t\tSort Type: Random Array " << endl;
list1b.ShowArray();
cout << "\t\t\t\tTime elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list1b.SetShuffledArray();
startTime = clock();
list1b.InsertionSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << " \t\t\t\tSort Type: Shuffled Array " << endl;
list1b.ShowArray();
cout << "\t\t\t\tTime elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list1b.SetReversedArray();
startTime = clock();
list1b.InsertionSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << "\t\t\t\tSort Type: Reversed Array " << endl;
list1b.ShowArray();
cout << "\t\t\t\tTime elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list1b.SetSortedArray();
startTime = clock();
list1b.InsertionSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << "\t\t\t\tSort Type: Sorted Array " << endl;
list1b.ShowArray();
cout << "\t\t\t\tTime elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;
}

void Selectionsort100000(){
      srand(time(0));
SortType list1b(100000); // Using Insertion Sort

list1b.SetRandomArray();
startTime = clock();
list1b.SelectionSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << "\t\t\t\tSort Type: Random Array " << endl;
list1b.ShowArray();
cout << "\t\t\t\tTime elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list1b.SetShuffledArray();
startTime = clock();
list1b.SelectionSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << "\t\t\t\tSort Type: Shuffled Array " << endl;
list1b.ShowArray();
cout << "\t\t\t\tTime elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list1b.SetReversedArray();
startTime = clock();
list1b.SelectionSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << "\t\t\t\tSort Type: Reversed Array " << endl;
list1b.ShowArray();
cout << "\t\t\t\tTime elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list1b.SetSortedArray();
startTime = clock();
list1b.SelectionSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << "\t\t\t\tSort Type: Sorted Array" << endl;
list1b.ShowArray();
cout << "\t\t\t\tTime elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;
}

void Bubblesort100000(){
    srand(time(0));
SortType list2a(100000);

list2a.SetRandomArray();
startTime = clock();
list2a.BubbleSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << "\t\t\t\tSort Type: Random Array " << endl;
list2a.ShowArray();
cout << "\t\t\t\tTime elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list2a.SetShuffledArray();
startTime = clock();
list2a.BubbleSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << "\t\t\t\tSort Type: Shuffled Array " << endl;
list2a.ShowArray();
cout << "\t\t\t\tTime elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list2a.SetReversedArray();
startTime = clock();
list2a.BubbleSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << "\t\t\t\tSort Type: Reversed Array " << endl;
list2a.ShowArray();
cout << "\t\t\t\tTime elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list2a.SetSortedArray();
startTime = clock();
list2a.BubbleSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << "\t\t\t\tSort Type: Sorted Array " << endl;
list2a.ShowArray();
cout << "\t\t\t\tTime elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl; 
}

void Mergesort100000(){
 srand(time(0));
MergeSortClass list2d(100000);
list2d.SetRandomArray();
startTime = clock();
list2d.MergeSort(0, 99999);
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC); // calculating time in seconds
cout << "\t\t\t\tSort Type: Random Array " << endl;
list2d.ShowArray();
cout << "\t\t\t\tTime elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list2d.SetShuffledArray();
startTime = clock();
list2d.MergeSort(0, 99999);
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC); // calculating time in seconds
cout << "\t\t\t\tSort Type: Shuffled Array " << endl;
list2d.ShowArray();
cout << "\t\t\t\tTime elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list2d.SetReversedArray();
startTime = clock();
list2d.MergeSort(0, 99999);
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC); // calculating time in seconds
cout << "\t\t\t\tSort Type: Reversed Array " << endl;
list2d.ShowArray();
cout << "\t\t\t\tTime elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list2d.SetSortedArray();
startTime = clock();
list2d.MergeSort(0, 99999);
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC); // calculating time in seconds
cout << "\t\t\t\tSort Type: Sorted Array " << endl;
list2d.ShowArray();
cout << "\t\t\t\tTime elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;
}

void Quicksort100000(){
     srand(time(0));
QuickSortClass list2e(100000);

list2e.SetRandomArray();
startTime = clock();
list2e.QuickSort(0, 99999);
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC); // calculating time in seconds
cout << "\t\t\t\tSort Type: Random Array " << endl;
list2e.ShowArray();
cout << "\t\t\t\tTime elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list2e.SetShuffledArray();
startTime = clock();
list2e.QuickSort(0, 99999);
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC); // calculating time in seconds
cout << "\t\t\t\tSort Type: Shuffled Array " << endl;
list2e.ShowArray();
cout << "\t\t\t\tTime elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list2e.SetReversedArray();
startTime = clock();
list2e.QuickSort(0, 99999);
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC); // calculating time in seconds
cout << "\t\t\t\tSort Type: Reversed Array " << endl;
list2e.ShowArray();
cout << "\t\t\t\tTime elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list2e.SetSortedArray();
startTime = clock();
list2e.QuickSort(0, 99999);
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC); // calculating time in seconds
cout << "\t\t\t\tSort Type: Sorted Array " << endl;
list2e.ShowArray();
cout << "\t\t\t\tTime elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;
}


// All 1,000,000 sorts 

void Insertionsort1000000(){
    srand(time(0));
SortType list1b(1000000); // Using Insertion Sort
list1b.SetRandomArray();
startTime = clock();
list1b.InsertionSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << " \t\t\t\tSort Type: Random Array " << endl;
list1b.ShowArray();
cout << "\t\t\t\tTime elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list1b.SetShuffledArray();
startTime = clock();
list1b.InsertionSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << " \t\t\t\tSort Type: Shuffled Array " << endl;
list1b.ShowArray();
cout << "\t\t\t\tTime elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list1b.SetReversedArray();
startTime = clock();
list1b.InsertionSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << "\t\t\t\tSort Type: Reversed Array " << endl;
list1b.ShowArray();
cout << "\t\t\t\tTime elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list1b.SetSortedArray();
startTime = clock();
list1b.InsertionSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << "\t\t\t\tSort Type: Sorted Array " << endl;
list1b.ShowArray();
cout << "\t\t\t\tTime elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;
}

void Selectionsort1000000(){
          srand(time(0));
SortType list1b(1000000); // Using Insertion Sort

list1b.SetRandomArray();
startTime = clock();
list1b.SelectionSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << "\t\t\t\tSort Type: Random Array " << endl;
list1b.ShowArray();
cout << "\t\t\t\tTime elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list1b.SetShuffledArray();
startTime = clock();
list1b.SelectionSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << "\t\t\t\tSort Type: Shuffled Array " << endl;
list1b.ShowArray();
cout << "\t\t\t\tTime elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list1b.SetReversedArray();
startTime = clock();
list1b.SelectionSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << "\t\t\t\tSort Type: Reversed Array " << endl;
list1b.ShowArray();
cout << "\t\t\t\tTime elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list1b.SetSortedArray();
startTime = clock();
list1b.SelectionSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << "\t\t\t\tSort Type: Sorted Array" << endl;
list1b.ShowArray();
cout << "\t\t\t\tTime elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;
}

void Bubblesort1000000(){
        srand(time(0));
SortType list2a(1000000);

list2a.SetRandomArray();
startTime = clock();
list2a.BubbleSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << "\t\t\t\tSort Type: Random Array " << endl;
list2a.ShowArray();
cout << "\t\t\t\tTime elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list2a.SetShuffledArray();
startTime = clock();
list2a.BubbleSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << "\t\t\t\tSort Type: Shuffled Array " << endl;
list2a.ShowArray();
cout << "\t\t\t\tTime elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list2a.SetReversedArray();
startTime = clock();
list2a.BubbleSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << "\t\t\t\tSort Type: Reversed Array " << endl;
list2a.ShowArray();
cout << "\t\t\t\tTime elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list2a.SetSortedArray();
startTime = clock();
list2a.BubbleSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << "\t\t\t\tSort Type: Sorted Array " << endl;
list2a.ShowArray();
cout << "\t\t\t\tTime elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl; 
}

void Mergesort1000000(){
    srand(time(0));
MergeSortClass list2d(1000000);
list2d.SetRandomArray();
startTime = clock();
list2d.MergeSort(0, 999999);
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC); // calculating time in seconds
cout << "\t\t\t\tSort Type: Random Array " << endl;
list2d.ShowArray();
cout << "\t\t\t\tTime elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list2d.SetShuffledArray();
startTime = clock();
list2d.MergeSort(0, 999999);
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC); // calculating time in seconds
cout << "\t\t\t\tSort Type: Shuffled Array " << endl;
list2d.ShowArray();
cout << "\t\t\t\tTime elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list2d.SetReversedArray();
startTime = clock();
list2d.MergeSort(0, 999999);
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC); // calculating time in seconds
cout << "\t\t\t\tSort Type: Reversed Array " << endl;
list2d.ShowArray();
cout << "\t\t\t\tTime elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list2d.SetSortedArray();
startTime = clock();
list2d.MergeSort(0, 999999);
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC); // calculating time in seconds
cout << "\t\t\t\tSort Type: Sorted Array " << endl;
list2d.ShowArray();
cout << "\t\t\t\tTime elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;
}

void Quicksort1000000(){
         srand(time(0));
QuickSortClass list2e(1000000);

list2e.SetRandomArray();
startTime = clock();
list2e.QuickSort(0, 999999);
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC); // calculating time in seconds
cout << "\t\t\t\tSort Type: Random Array " << endl;
list2e.ShowArray();
cout << "\t\t\t\tTime elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list2e.SetShuffledArray();
startTime = clock();
list2e.QuickSort(0, 999999);
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC); // calculating time in seconds
cout << "\t\t\t\tSort Type: Shuffled Array " << endl;
list2e.ShowArray();
cout << "\t\t\t\tTime elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list2e.SetReversedArray();
startTime = clock();
list2e.QuickSort(0, 999999);
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC); // calculating time in seconds
cout << "\t\t\t\tSort Type: Reversed Array " << endl;
list2e.ShowArray();
cout << "\t\t\t\tTime elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list2e.SetSortedArray();
startTime = clock();
list2e.QuickSort(0, 999999);
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC); // calculating time in seconds
cout << "\t\t\t\tSort Type: Sorted Array " << endl;
list2e.ShowArray();
cout << "\t\t\t\tTime elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;
}




// Other Tests

void TESTTENTHOUSAND(){
srand(time(0));
SortType list1a(10000); // Using Selection Sort
list1a.SetRandomArray();
startTime = clock();
list1a.SelectionSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << " Selection Sort with 10,000 values " << endl;
list1a.ShowArray();
cout << "Time elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

SortType list1b(10000); // Using Insertion Sort
list1b.SetRandomArray();
startTime = clock();
list1b.InsertionSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << " Insertion Sort with 10,000 values " << endl;
list1b.ShowArray();
cout << "Time elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

SortType list1c(10000); // Using Bubble Sort
list1c.SetRandomArray();
startTime = clock();
list1c.BubbleSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << " Bubble Sort with 10,000 values " << endl;
list1c.ShowArray();
cout << "Time elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

MergeSortClass list1d(10000);
list1d.SetRandomArray();
startTime = clock();
list1d.MergeSort(0, 9999);
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC); // calculating time in seconds
cout << " Merge Sort with 10,000 values " << endl;
list1d.ShowArray();
cout << "Time elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

QuickSortClass list1e(10000);
list1e.SetRandomArray();
startTime = clock();
list1e.QuickSort(0, 9999);
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC); // calculating time in seconds
cout << " Quick Sort with 10,000 values " << endl;
list1e.ShowArray();
cout << "Time elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

//------------------------------------------------------------------------------------------------------------------------------------------

// cout << "Testing with Shuffled Array at 10% using 10,000 values" << endl;

list1a.SetShuffledArray();
startTime = clock();
list1a.SelectionSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << " Selection Sort with 10,000 values " << endl;
list1a.ShowArray();
cout << "Time elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list1b.SetShuffledArray();
startTime = clock();
list1b.InsertionSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << " Insertion Sort with 10,000 values " << endl;
list1b.ShowArray();
cout << "Time elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list1c.SetShuffledArray();
startTime = clock();
list1c.BubbleSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << " Bubble Sort with 10,000 values " << endl;
list1c.ShowArray();
cout << "Time elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list1d.SetShuffledArray();
startTime = clock();
list1d.MergeSort(0, 9999);
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC); // calculating time in seconds
cout << " Merge Sort with 10,000 values " << endl;
list1d.ShowArray();
cout << "Time elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list1e.SetShuffledArray();
startTime = clock();
list1e.QuickSort(0, 9999);
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC); // calculating time in seconds
cout << " Quick Sort with 10,000 values " << endl;
list1e.ShowArray();
cout << "Time elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

//------------------------------------------------------------------------------------------------------------------------------------------
// cout << "Testing with Reversed Array using 10,000 values" << endl;

list1a.SetReversedArray();
startTime = clock();
list1a.SelectionSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << " Selection Sort with 10,000 values " << endl;
list1a.ShowArray();
cout << "Time elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list1b.SetReversedArray();
startTime = clock();
list1b.InsertionSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << " Insertion Sort with 10,000 values " << endl;
list1b.ShowArray();
cout << "Time elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list1c.SetReversedArray();
startTime = clock();
list1c.BubbleSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << " Bubble Sort with 10,000 values " << endl;
list1c.ShowArray();
cout << "Time elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list1d.SetReversedArray();
startTime = clock();
list1d.MergeSort(0, 9999);
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC); // calculating time in seconds
cout << " Merge Sort with 10,000 values " << endl;
list1d.ShowArray();
cout << "Time elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list1e.SetReversedArray();
startTime = clock();
list1e.QuickSort(0, 9999);
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC); // calculating time in seconds
cout << " QuickSort Sort with 10,000 values " << endl;
list1e.ShowArray();
cout << "Time elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

//------------------------------------------------------------------------------------------------------------------------------------------
// cout << "Testing with Sorted Array using 10,000 values" << endl;

list1a.SetSortedArray();
startTime = clock();
list1a.SelectionSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << " Selection Sort with 10,000 values " << endl;
list1a.ShowArray();
cout << "Time elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list1b.SetSortedArray();
startTime = clock();
list1b.InsertionSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << " Insertion Sort with 10,000 values " << endl;
list1b.ShowArray();
cout << "Time elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list1c.SetSortedArray();
startTime = clock();
list1c.BubbleSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << " Insertion Sort with 10,000 values " << endl;
list1c.ShowArray();
cout << "Time elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list1d.SetSortedArray();
startTime = clock();
list1d.MergeSort(0, 9999);
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC); // calculating time in seconds
cout << " Merge Sort with 10,000 values " << endl;
list1d.ShowArray();
cout << "Time elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list1e.SetSortedArray();
startTime = clock();
list1e.QuickSort(0, 9999);
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC); // calculating time in seconds
cout << " Quick Sort with 10,000 values " << endl;
list1e.ShowArray();
cout << "Time elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;
}

void TESTONEHUNDREDTHOUSAND(){
   srand(time(0)); 
// cout << "Testing with Fully Shuffled Array using 100,000 values" << endl;
SortType list2a(100000); // Using Selection Sort
list2a.SetRandomArray();
startTime = clock();
list2a.SelectionSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << " Selection Sort with 100,000 values " << endl;
list2a.ShowArray();
cout << "Time elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

SortType list2b(100000); // Using Insertion Sort
list2b.SetRandomArray();
startTime = clock();
list2b.InsertionSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << " Insertion Sort with 100,000 values " << endl;
list2b.ShowArray();
cout << "Time elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

SortType list2c(100000); // Using Bubble Sort
list2c.SetRandomArray();
startTime = clock();
list2c.BubbleSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << " Bubble Sort with 100,000 values " << endl;
list2c.ShowArray();
cout << "Time elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

MergeSortClass list2d(100000);
list2d.SetRandomArray();
startTime = clock();
list2d.MergeSort(0, 99999);
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC); // calculating time in seconds
cout << " Merge Sort with 100,000 values " << endl;
list2d.ShowArray();
cout << "Time elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

QuickSortClass list2e(100000);
list2e.SetRandomArray();
startTime = clock();
list2e.QuickSort(0, 99999);
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC); // calculating time in seconds
cout << " Quick Sort with 100,000 values " << endl;
list2e.ShowArray();
cout << "Time elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;


//------------------------------------------------------------------------------------------------------------------------------------------

// cout << "Testing with Shuffled Array at 10% using 100,000 values" << endl;

list2a.SetShuffledArray();
startTime = clock();
list2a.SelectionSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << " Selection Sort with 100,000 values " << endl;
list2a.ShowArray();
cout << "Time elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list2b.SetShuffledArray();
startTime = clock();
list2b.InsertionSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << " Insertion Sort with 100,000 values " << endl;
list2b.ShowArray();
cout << "Time elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list2c.SetShuffledArray();
startTime = clock();
list2c.BubbleSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << " Bubble Sort with 100,000 values " << endl;
list2c.ShowArray();
cout << "Time elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list2d.SetShuffledArray();
startTime = clock();
list2d.MergeSort(0, 99999);
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC); // calculating time in seconds
cout << " Merge Sort with 100,000 values " << endl;
list2d.ShowArray();
cout << "Time elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list2e.SetShuffledArray();
startTime = clock();
list2e.QuickSort(0, 99999);
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC); // calculating time in seconds
cout << " Quick Sort with 100,000 values " << endl;
list2e.ShowArray();
cout << "Time elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

//------------------------------------------------------------------------------------------------------------------------------------------
// cout << "Testing with Reversed Array using 100,000 values" << endl;

list2a.SetReversedArray();
startTime = clock();
list2a.SelectionSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << " Selection Sort with 100,000 values " << endl;
list2a.ShowArray();
cout << "Time elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list2b.SetReversedArray();
startTime = clock();
list2b.InsertionSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << " Insertion Sort with 100,000 values " << endl;
list2b.ShowArray();
cout << "Time elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list2c.SetReversedArray();
startTime = clock();
list2c.BubbleSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << " Bubble Sort with 100,000 values " << endl;
list2c.ShowArray();
cout << "Time elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list2d.SetReversedArray();
startTime = clock();
list2d.MergeSort(0, 99999);
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC); // calculating time in seconds
cout << " Merge Sort with 100,000 values " << endl;
list2d.ShowArray();
cout << "Time elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list2e.SetReversedArray();
startTime = clock();
list2e.QuickSort(0, 99999);
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC); // calculating time in seconds
cout << " Quick Sort with 100,000 values " << endl;
list2e.ShowArray();
cout << "Time elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

//------------------------------------------------------------------------------------------------------------------------------------------
// cout << "Testing with Sorted Array using 100,000 values" << endl;


list2a.SetSortedArray();
startTime = clock();
list2a.SelectionSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << " Selection Sort with 100,000 values " << endl;
list2a.ShowArray();
cout << "Time elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list2b.SetSortedArray();
startTime = clock();
list2b.InsertionSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << " Insertion Sort with 100,000 values " << endl;
list2b.ShowArray();
cout << "Time elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list2c.SetSortedArray();
startTime = clock();
list2c.BubbleSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << " Bubble Sort with 100,000 values " << endl;
list2c.ShowArray();
cout << "Time elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list2d.SetSortedArray();
startTime = clock();
list2d.MergeSort(0, 99999);
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC); // calculating time in seconds
cout << " Merge Sort with 100,000 values " << endl;
list2d.ShowArray();
cout << "Time elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;

list2e.SetSortedArray();
startTime = clock();
list2e.QuickSort(0, 99999);
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC); // calculating time in seconds
cout << " Quick Sort with 100,000 values " << endl;
list2e.ShowArray();
cout << "Time elapsed: " << fixed << setprecision(2) << timeTaken << " seconds" << endl; 
cout << endl;
}

void TESTONEMILLION(){

}
 // WARNING THIS WILL TAKE HOURS/DAYS DO NOT RECOMMMED
void TestAllSorts(){ 
srand(time(0));

cout << "Testing with Fully Shuffled Array using 10,000 values" << endl;
SortType list1a(10000); // Using Selection Sort
list1a.SetRandomArray();
startTime = clock();
list1a.SelectionSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << "Time elapsed using Selection Sort with Fully Shuffled array using 10,000 values: " << fixed << setprecision(2) << timeTaken << " seconds" << endl;

SortType list1b(10000); // Using Insertion Sort
list1b.SetRandomArray();
startTime = clock();
list1b.InsertionSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << "Time elapsed using Insertion Sort with Fully Shuffled array using 10,000 values: " << fixed << setprecision(2) << timeTaken << " seconds" << endl;

SortType list1c(10000); // Using Bubble Sort
list1c.SetRandomArray();
startTime = clock();
list1c.BubbleSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << "Time elapsed using Bubble Sort with Fully Shuffled array using 10,000 values: " << fixed << setprecision(2) << timeTaken << " seconds" << endl;

MergeSortClass list1d(10000);
list1d.SetRandomArray();
startTime = clock();
list1d.MergeSort(0, 9999);
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC); // calculating time in seconds
cout << "Time elapsed using Merge Sort with Fully Shuffled array using 10,000 values: " << fixed << setprecision(2) << timeTaken << " seconds" << endl;

QuickSortClass list1e(10000);
list1e.SetRandomArray();
startTime = clock();
list1e.QuickSort(0, 9999);
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC); // calculating time in seconds
cout << "Time elapsed using Quick Sort with Fully Shuffled array using 10,000 values: " << fixed << setprecision(2) << timeTaken << " seconds" << endl;
cout << "Testing 1 completed." << endl;
cout << endl;

//------------------------------------------------------------------------------------------------------------------------------------------

cout << "Testing with Shuffled Array at 10% using 10,000 values" << endl;

list1a.SetShuffledArray();
startTime = clock();
list1a.SelectionSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << "Time elapsed using Selection Sort with Shuffled Array at 10% with 10,000 values: " << fixed << setprecision(2) << timeTaken << " seconds" << endl;

list1b.SetShuffledArray();
startTime = clock();
list1b.InsertionSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << "Time elapsed using Insertion Sort with Shuffled Array at 10% with 10,000 values: " << fixed << setprecision(2) << timeTaken << " seconds" << endl;

list1c.SetShuffledArray();
startTime = clock();
list1c.BubbleSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << "Time elapsed using Bubble Sort with Shuffled Array at 10% with 10,000 values: " << fixed << setprecision(2) << timeTaken << " seconds" << endl;

list1d.SetShuffledArray();
startTime = clock();
list1d.MergeSort(0, 9999);
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC); // calculating time in seconds
cout << "Time elapsed using Merge Sort with Shuffled Array at 10% with 10,000 values: " << fixed << setprecision(2) << timeTaken << " seconds" << endl;

list1e.SetShuffledArray();
startTime = clock();
list1e.QuickSort(0, 9999);
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC); // calculating time in seconds
cout << "Time elapsed using Quick Sort with Shuffled Array at 10% with 10,000 values: " << fixed << setprecision(2) << timeTaken << " seconds" << endl;
cout << "Testing 2 completed." << endl;
cout << endl;

//------------------------------------------------------------------------------------------------------------------------------------------
cout << "Testing with Reversed Array using 10,000 values" << endl;

list1a.SetReversedArray();
startTime = clock();
list1a.SelectionSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << "Time elapsed using Selection Sort with Reversed Array with 10,000 values: " << fixed << setprecision(2) << timeTaken << " seconds" << endl;

list1b.SetReversedArray();
startTime = clock();
list1b.InsertionSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << "Time elapsed using Insertion Sort with Reversed Array with 10,000 values: " << fixed << setprecision(2) << timeTaken << " seconds" << endl;

list1c.SetReversedArray();
startTime = clock();
list1c.BubbleSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << "Time elapsed using Bubble Sort with Reversed Array with 10,000 values: " << fixed << setprecision(2) << timeTaken << " seconds" << endl;

list1d.SetReversedArray();
startTime = clock();
list1d.MergeSort(0, 9999);
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC); // calculating time in seconds
cout << "Time elapsed using Merge Sort with Reversed Array with 10,000 values: " << fixed << setprecision(2) << timeTaken << " seconds" << endl;

list1e.SetReversedArray();
startTime = clock();
list1e.QuickSort(0, 9999);
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC); // calculating time in seconds
cout << "Time elapsed using Quick Sort with Reversed Array with 10,000 values: " << fixed << setprecision(2) << timeTaken << " seconds" << endl;
cout << "Testing 3 completed." << endl;
cout << endl;

//------------------------------------------------------------------------------------------------------------------------------------------
cout << "Testing with Sorted Array using 10,000 values" << endl;

list1a.SetSortedArray();
startTime = clock();
list1a.SelectionSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << "Time elapsed using Selection Sort with Sorted Array with 10,000 values: " << fixed << setprecision(2) << timeTaken << " seconds" << endl;

list1b.SetSortedArray();
startTime = clock();
list1b.InsertionSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << "Time elapsed using Insertion Sort with Sorted Array with 10,000 values: " << fixed << setprecision(2) << timeTaken << " seconds" << endl;

list1c.SetSortedArray();
startTime = clock();
list1c.BubbleSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << "Time elapsed using Bubble Sort with Sorted Array with 10,000 values: " << fixed << setprecision(2) << timeTaken << " seconds" << endl;

list1d.SetSortedArray();
startTime = clock();
list1d.MergeSort(0, 9999);
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC); // calculating time in seconds
cout << "Time elapsed using Merge Sort with Sorted Array with 10,000 values: " << fixed << setprecision(2) << timeTaken << " seconds" << endl;

list1e.SetSortedArray();
startTime = clock();
list1e.QuickSort(0, 9999);
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC); // calculating time in seconds
cout << "Time elapsed using Quick Sort with Sorted Array with 10,000 values: " << fixed << setprecision(2) << timeTaken << " seconds" << endl;
cout << "Testing 4 completed." << endl;
cout << endl;




//------------------------------------------------------------------------------------------------------------------------------------------

// Testing with 100,000
cout << "Testing with Fully Shuffled Array using 100,000 values" << endl;
SortType list2a(100000); // Using Selection Sort
list2a.SetRandomArray();
startTime = clock();
list2a.SelectionSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << "Time elapsed using Selection Sort with 100,000 values: " << fixed << setprecision(2) << timeTaken << " seconds" << endl;

SortType list2b(100000); // Using Insertion Sort
list2b.SetRandomArray();
startTime = clock();
list2b.InsertionSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << "Time elapsed using Insertion Sort with 100,000 values: " << fixed << setprecision(2) << timeTaken << " seconds" << endl;

SortType list2c(100000); // Using Bubble Sort
list2c.SetRandomArray();
startTime = clock();
list2c.BubbleSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << "Time elapsed using Bubble Sort with 100,000 values: " << fixed << setprecision(2) << timeTaken << " seconds" << endl;

MergeSortClass list2d(100000);
list2d.SetRandomArray();
startTime = clock();
list2d.MergeSort(0, 99999);
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC); // calculating time in seconds
cout << "Time elapsed using Merge Sort with 100,000 values: " << fixed << setprecision(2) << timeTaken << " seconds" << endl;

QuickSortClass list2e(100000);
list2e.SetRandomArray();
startTime = clock();
list2e.QuickSort(0, 99999);
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC); // calculating time in seconds
cout << "Time elapsed using Quick Sort with 100,000 values: " << fixed << setprecision(2) << timeTaken << " seconds" << endl;
cout << "Testing 1 completed." << endl;
cout << endl;

//------------------------------------------------------------------------------------------------------------------------------------------

cout << "Testing with Shuffled Array at 10% using 100,000 values" << endl;

list2a.SetShuffledArray();
startTime = clock();
list2a.SelectionSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << "Time elapsed using Selection Sort with Shuffled Array at 10% with 100,000 values: " << fixed << setprecision(2) << timeTaken << " seconds" << endl;

list2b.SetShuffledArray();
startTime = clock();
list2b.InsertionSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << "Time elapsed using Insertion Sort with Shuffled Array at 10% with 100,000 values: " << fixed << setprecision(2) << timeTaken << " seconds" << endl;

list2c.SetShuffledArray();
startTime = clock();
list2c.BubbleSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << "Time elapsed using Bubble Sort with Shuffled Array at 10% with 100,000 values: " << fixed << setprecision(2) << timeTaken << " seconds" << endl;

list2d.SetShuffledArray();
startTime = clock();
list2d.MergeSort(0, 99999);
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC); // calculating time in seconds
cout << "Time elapsed using Merge Sort with Shuffled Array at 10% with 100,000 values: " << fixed << setprecision(2) << timeTaken << " seconds" << endl;

list2e.SetShuffledArray();
startTime = clock();
list2e.QuickSort(0, 99999);
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC); // calculating time in seconds
cout << "Time elapsed using Quick Sort with Shuffled Array at 10% with 100,000 values: " << fixed << setprecision(2) << timeTaken << " seconds" << endl;
cout << "Testing 2 completed." << endl;
cout << endl;

//------------------------------------------------------------------------------------------------------------------------------------------
cout << "Testing with Reversed Array using 100,000 values" << endl;

list2a.SetReversedArray();
startTime = clock();
list2a.SelectionSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << "Time elapsed using Selection Sort with Reversed Array with 100,000 values: " << fixed << setprecision(2) << timeTaken << " seconds" << endl;

list2b.SetReversedArray();
startTime = clock();
list2b.InsertionSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << "Time elapsed using Insertion Sort with Reversed Array with 100,000 values: " << fixed << setprecision(2) << timeTaken << " seconds" << endl;

list2c.SetReversedArray();
startTime = clock();
list2c.BubbleSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << "Time elapsed using Bubble Sort with Reversed Array with 100,000 values: " << fixed << setprecision(2) << timeTaken << " seconds" << endl;

list2d.SetReversedArray();
startTime = clock();
list2d.MergeSort(0, 99999);
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC); // calculating time in seconds
cout << "Time elapsed using Merge Sort with Reversed Array with 100,000 values: " << fixed << setprecision(2) << timeTaken << " seconds" << endl;

list2e.SetReversedArray();
startTime = clock();
list2e.QuickSort(0, 99999);
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC); // calculating time in seconds
cout << "Time elapsed using Quick Sort with Reversed Array with 100,000 values: " << fixed << setprecision(2) << timeTaken << " seconds" << endl;
cout << "Testing 3 completed." << endl;
cout << endl;

//------------------------------------------------------------------------------------------------------------------------------------------
cout << "Testing with Sorted Array using 100,000 values" << endl;


list2a.SetSortedArray();
startTime = clock();
list2a.SelectionSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << "Time elapsed using Selection Sort with Sorted Array with 100,000 values: " << fixed << setprecision(2) << timeTaken << " seconds" << endl;

list2b.SetSortedArray();
startTime = clock();
list2b.InsertionSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << "Time elapsed using Insertion Sort with Sorted Array with 100,000 values: " << fixed << setprecision(2) << timeTaken << " seconds" << endl;

list2c.SetSortedArray();
startTime = clock();
list2c.BubbleSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << "Time elapsed using Bubble Sort with Sorted Array with 100,000 values: " << fixed << setprecision(2) << timeTaken << " seconds" << endl;

list2d.SetSortedArray();
startTime = clock();
list2d.MergeSort(0, 99999);
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC); // calculating time in seconds
cout << "Time elapsed using Merge Sort with Sorted Array with 100,000 values: " << fixed << setprecision(2) << timeTaken << " seconds" << endl;

list2e.SetSortedArray();
startTime = clock();
list2e.QuickSort(0, 99999);
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC); // calculating time in seconds
cout << "Time elapsed using Quick Sort with Sorted Array with 100,000 values: " << fixed << setprecision(2) << timeTaken << " seconds" << endl;
cout << "Testing 4 completed." << endl;
cout << endl;


// Testing with 1,000,000
cout << "Testing with Fully Shuffled Array using 1,000,000 values" << endl;
SortType list3a(1000000); // Using Selection Sort
list3a.SetRandomArray();
startTime = clock();
list3a.SelectionSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << "Time elapsed using Selection Sort with 1,000,000 values: " << fixed << setprecision(2) << timeTaken << " seconds" << endl;

SortType list3b(1000000); // Using Insertion Sort
list3b.SetRandomArray();
startTime = clock();
list3b.InsertionSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << "Time elapsed using Insertion Sort with 1,000,000 values: " << fixed << setprecision(2) << timeTaken << " seconds" << endl;

SortType list3c(1000000); // Using Bubble Sort
list3c.SetRandomArray();
startTime = clock();
list3c.BubbleSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << "Time elapsed using Bubble Sort with 1,000,000 values: " << fixed << setprecision(2) << timeTaken << " seconds" << endl;

MergeSortClass list3d(1000000);
list3d.SetRandomArray();
startTime = clock();
list3d.MergeSort(0, 999999);
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC); // calculating time in seconds
cout << "Time elapsed using Merge Sort with 1,000,000 values: " << fixed << setprecision(2) << timeTaken << " seconds" << endl;

QuickSortClass list3e(1000000);
list3e.SetRandomArray();
startTime = clock();
list3e.QuickSort(0, 999999);
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC); // calculating time in seconds
cout << "Time elapsed using Quick Sort with 1,000,000 values: " << fixed << setprecision(2) << timeTaken << " seconds" << endl;
cout << "Testing 1 completed." << endl;
cout << endl;

//------------------------------------------------------------------------------------------------------------------------------------------

cout << "Testing with Shuffled Array at 10% using 1,000,000 values" << endl;

list3a.SetShuffledArray();
startTime = clock();
list3a.SelectionSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << "Time elapsed using Selection Sort with Shuffled Array at 10% with 1,000,000 values: " << fixed << setprecision(2) << timeTaken << " seconds" << endl;

list3b.SetShuffledArray();
startTime = clock();
list3b.InsertionSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << "Time elapsed using Insertion Sort with Shuffled Array at 10% with 1,000,000 values: " << fixed << setprecision(2) << timeTaken << " seconds" << endl;

list3c.SetShuffledArray();
startTime = clock();
list3c.BubbleSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << "Time elapsed using Bubble Sort with Shuffled Array at 10% with 1,000,000 values: " << fixed << setprecision(2) << timeTaken << " seconds" << endl;

list3d.SetShuffledArray();
startTime = clock();
list3d.MergeSort(0, 999999);
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC); // calculating time in seconds
cout << "Time elapsed using Merge Sort with Shuffled Array at 10% with 1,000,000 values: " << fixed << setprecision(2) << timeTaken << " seconds" << endl;

list3e.SetShuffledArray();
startTime = clock();
list3e.QuickSort(0, 999999);
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC); // calculating time in seconds
cout << "Time elapsed using Quick Sort with Shuffled Array at 10% with 1,000,000 values: " << fixed << setprecision(2) << timeTaken << " seconds" << endl;
cout << "Testing 2 completed." << endl;
cout << endl;

//------------------------------------------------------------------------------------------------------------------------------------------
cout << "Testing with Reversed Array using 1,000,000 values" << endl;

list3a.SetReversedArray();
startTime = clock();
list3a.SelectionSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << "Time elapsed using Selection Sort with Reversed Array with 1,000,000 values: " << fixed << setprecision(2) << timeTaken << " seconds" << endl;

list3b.SetReversedArray();
startTime = clock();
list3b.InsertionSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << "Time elapsed using Insertion Sort with Reversed Array with 1,000,000 values: " << fixed << setprecision(2) << timeTaken << " seconds" << endl;

list3c.SetReversedArray();
startTime = clock();
list3c.BubbleSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << "Time elapsed using Bubble Sort with Reversed Array with 1,000,000 values: " << fixed << setprecision(2) << timeTaken << " seconds" << endl;

list3d.SetReversedArray();
startTime = clock();
list3d.MergeSort(0, 999999);
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC); // calculating time in seconds
cout << "Time elapsed using Merge Sort with Reversed Array with 1,000,000 values: " << fixed << setprecision(2) << timeTaken << " seconds" << endl;

list3e.SetReversedArray();
startTime = clock();
list3e.QuickSort(0, 999999);
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC); // calculating time in seconds
cout << "Time elapsed using Quick Sort with Reversed Array with 1,000,000 values: " << fixed << setprecision(2) << timeTaken << " seconds" << endl;
cout << "Testing 3 completed." << endl;
cout << endl;

//------------------------------------------------------------------------------------------------------------------------------------------
cout << "Testing with Sorted Array using 1,000,000 values" << endl;

list3a.SetSortedArray();
startTime = clock();
list3a.SelectionSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << "Time elapsed using Selection Sort with Sorted Array with 1,000,000 values: " << fixed << setprecision(2) << timeTaken << " seconds" << endl;

list3b.SetSortedArray();
startTime = clock();
list3b.InsertionSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << "Time elapsed using Insertion Sort with Sorted Array with 1,000,000 values: " << fixed << setprecision(2) << timeTaken << " seconds" << endl;

list3c.SetSortedArray();
startTime = clock();
list3c.BubbleSort();
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC);
cout << "Time elapsed using Bubble Sort with Sorted Array with 1,000,000 values: " << fixed << setprecision(2) << timeTaken << " seconds" << endl;

list3d.SetSortedArray();
startTime = clock();
list3d.MergeSort(0, 999999);
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC); // calculating time in seconds
cout << "Time elapsed using Merge Sort with Sorted Array with 1,000,000 values: " << fixed << setprecision(2) << timeTaken << " seconds" << endl;

list3e.SetSortedArray();
startTime = clock();
list3e.QuickSort(0, 999999);
endTime = clock();
timeTaken = (endTime - startTime) / static_cast<double>(CLOCKS_PER_SEC); // calculating time in seconds
cout << "Time elapsed using Quick Sort with Sorted Array with 1,000,000 values: " << fixed << setprecision(2) << timeTaken << " seconds" << endl;
cout << "Testing 4 completed." << endl;
cout << endl;


}





