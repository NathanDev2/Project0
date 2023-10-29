#include <iostream>
#include <ctime>
#include <time.h>
#include <climits>
#include "mergesort.cpp"
#include "quicksort.cpp"
#include "SortTypes.cpp"
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








int main(){

srand(time(0));
clock_t startTime, endTime; 
double timeTaken; // Store time here
cout << "Testing with Fully Shuffled Array using 10000 values" << endl;


SortType list1a(10000); // Using Selection Sort
  list1a.SetRandomArray();
  startTime = clock();
  list1a.SelectionSort();
  endTime = clock();
  timeTaken = (endTime-startTime)/ static_cast<double>(CLOCKS_PER_SEC);
cout << "Time elasped using Selction Sort " << fixed << setprecision(2) << timeTaken << " seconds" << endl;
  
  SortType list1b(10000); // Using Insertion Sort
  list1b.SetRandomArray();
  startTime = clock();
  list1b.InsertionSort();
  endTime = clock();
  timeTaken = (endTime-startTime)/static_cast<double>(CLOCKS_PER_SEC);
  cout << "Time elasped using Insertion Sort " << fixed << setprecision(2) << timeTaken << " seconds" << endl;

  SortType list1c(10000); // Using Bubble Sort
  list1c.SetRandomArray();
  startTime = clock();
  list1c.BubbleSort();
  endTime = clock();
  timeTaken = (endTime-startTime)/static_cast<double>(CLOCKS_PER_SEC);
  cout << "Time elasped using Bubble Sort " << fixed << setprecision(2) << timeTaken << " seconds" << endl;

MergeSortClass list1d(10000);
list1d.SetRandomArray();
startTime = clock();
list1d.MergeSort(0,9999);
endTime = clock();
timeTaken = (endTime-startTime)/static_cast<double>(CLOCKS_PER_SEC); // calculating time in seconds
cout << "Time elasped using Mergesort " << fixed << setprecision(2) << timeTaken <<  " seconds" << endl;


 QuickSortClass list1e(10000);
list1e.SetRandomArray();
startTime = clock();
list1e.QuickSort(0,9999);
endTime = clock();
timeTaken = (endTime-startTime)/static_cast<double>(CLOCKS_PER_SEC); // calculating time in seconds
cout << "Time elasped using Quicksort " << fixed << setprecision(2) << timeTaken << " seconds" << endl;
cout << "Testing 1 completed." << endl;


  
 
  return 0;
}





