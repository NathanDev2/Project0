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
float timeTaken; // Store time here

MergeSortClass list1(1000000);
list1.SetRandomArray();
startTime = clock();
list1.MergeSort(0,999999);
endTime = clock();
timeTaken = (endTime-startTime)/CLOCKS_PER_SEC*1000; // calculating time in seconds
list1.ShowArray();

cout << "Time elapsed: " << fixed << setprecision(2) << timeTaken << " seconds " << endl;

/* SortType list2(10000);
  list2.SetRandomArray();
  clock_t startTime2;  
  clock_t endTime2;
  startTime2 = clock();
  list2.MergeSort(0,99999);
  endTime2 = clock();
  list2.ShowArray();
  double time2 = (endTime2-startTime2)/CLOCKS_PER_SEC*1000;
  cout << "Time elapsed for MergeSort: "  << time2 << " ms " << endl;

  */
 
  return 0;
}





