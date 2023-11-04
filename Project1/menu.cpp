#include <iostream>
#include <ctime>
#include <time.h>
#include "testingunit.cpp"
using namespace std;

int main(){

char userInput; // Get user input
while(userInput != 'q'){ // Let us use q as our base case to close our program
system("clear"); 
    cout << "\t\t\t*******************************************" << endl;
    cout << "\t\t\t|                                         |" << endl;
    cout << "\t\t\t|    Choose a sort algorithm or press 'q' |" << endl;
    cout << "\t\t\t|            to quit.                     |" << endl;
    cout << "\t\t\t|                                         |" << endl;
    cout << "\t\t\t|  1. Insertion Sort                      |" << endl;
    cout << "\t\t\t|  2. Selection Sort                      |" << endl;
    cout << "\t\t\t|  3. Bubble Sort                         |" << endl;
    cout << "\t\t\t|  4. Merge Sort                          |" << endl;
    cout << "\t\t\t|  5. Quick Sort                          |" << endl;
    cout << "\t\t\t|                                         |" << endl;
    cout << "\t\t\t*******************************************" << endl;


    cout << "\t\t\t Enter here: "; // Get users Sort Type choice
    cin >> userInput;
    
    system("clear"); // Clear screen
    switch(userInput){ // Out 2nd menu for chose of size to go with their sort choice
    case '1': 
    cout << "\t\t\t******************************" << endl;
    cout << "\t\t\t|                            |" << endl;
    cout << "\t\t\t| *Choose a size *           |" << endl;
    cout << "\t\t\t| 1. 10,000 values           |" << endl;
    cout << "\t\t\t| 2. 100,000 values          |" << endl;
    cout << "\t\t\t| 3. 1,000,000 values        |" << endl;
    cout << "\t\t\t| 4. Go Back                 |" << endl;
    cout << "\t\t\t|                            |" << endl;
    cout << "\t\t\t******************************" << endl;
    cout << "\t\t\t Enter here: ";
        break;
    case '2': 
    cout << "\t\t\t******************************" << endl;
    cout << "\t\t\t|                            |" << endl;
    cout << "\t\t\t| *Choose a size *           |" << endl;
    cout << "\t\t\t| 1. 10,000 values           |" << endl;
    cout << "\t\t\t| 2. 100,000 values          |" << endl;
    cout << "\t\t\t| 3. 1,000,000 values        |" << endl;
    cout << "\t\t\t| 4. Go Back                 |" << endl;
    cout << "\t\t\t|                            |" << endl;
    cout << "\t\t\t******************************" << endl;
    cout << "\t\t\t Enter here: ";

        break;
    case '3': 
    cout << "\t\t\t******************************" << endl;
    cout << "\t\t\t|                            |" << endl;
    cout << "\t\t\t| *Choose a size *           |" << endl;
    cout << "\t\t\t| 1. 10,000 values           |" << endl;
    cout << "\t\t\t| 2. 100,000 values          |" << endl;
    cout << "\t\t\t| 3. 1,000,000 values        |" << endl;
    cout << "\t\t\t| 4. Go Back                 |" << endl;
    cout << "\t\t\t|                            |" << endl;
    cout << "\t\t\t******************************" << endl;
    cout << "\t\t\t Enter here: ";
        break;
    case '4':
    cout << "\t\t\t******************************" << endl;
    cout << "\t\t\t|                            |" << endl;
    cout << "\t\t\t| *Choose a size *           |" << endl;
    cout << "\t\t\t| 1. 10,000 values           |" << endl;
    cout << "\t\t\t| 2. 100,000 values          |" << endl;
    cout << "\t\t\t| 3. 1,000,000 values        |" << endl;
    cout << "\t\t\t| 4. Go Back                 |" << endl;
    cout << "\t\t\t|                            |" << endl;
    cout << "\t\t\t******************************" << endl;
    cout << "\t\t\t Enter here: ";
        break;
    case '5':
    cout << "\t\t\t******************************" << endl;
    cout << "\t\t\t|                            |" << endl;
    cout << "\t\t\t| *Choose a size *           |" << endl;
    cout << "\t\t\t| 1. 10,000 values           |" << endl;
    cout << "\t\t\t| 2. 100,000 values          |" << endl;
    cout << "\t\t\t| 3. 1,000,000 values        |" << endl;
    cout << "\t\t\t| 4. Go Back                 |" << endl;
    cout << "\t\t\t|                            |" << endl;
    cout << "\t\t\t******************************" << endl;
    cout << "\t\t\t Enter here: ";
        break;
    case 'q':
        cout << "End of Program." << endl;
        return 0;
        break;
    default:
        cout << "Invalid. Please Try Again." << endl;
        cout << "Press any key to continue. . ." << endl;
        cin.ignore();
        cin.get();
        continue;
}

char sizeOption;
cin >> sizeOption;

system("clear");

if(userInput == '1' && sizeOption == '1'){ // Insertion Sort for 10,000
    Insertionsort10000();
    cout << "SortType: Insertion" << endl;
    cout << "Value Size: 10,000" << endl;
    cout << "Press any key to continue..." << endl;
        cin.ignore();
        cin.get();      
            
}
else if(userInput == '2' && sizeOption == '1'){ // Selection Sort for 10,000
    Selectionsort10000();
    cout << "SortType: Selection" << endl;
    cout << "Value Size: 10,000" << endl;
    cout << "Press any key to continue..." << endl;
            cin.ignore();
            cin.get();
        
}
else if(userInput == '3' && sizeOption == '1'){ // Bubble Sort for 10,000
    Bubblesort10000();
    cout << "SortType: Bubble" << endl;
    cout << "Value Size: 10,000" << endl;
    cout << "Press any key to continue..." << endl;
            cin.ignore();
            cin.get();  
}
else if(userInput == '4' && sizeOption == '1'){ // Merge Sort for 10,000
    Mergesort10000();
    cout << "SortType: Merge" << endl;
    cout << "Value Size: 10,000" << endl;
    cout << "Press any key to continue..." << endl;
            cin.ignore();
            cin.get(); 
}
else if(userInput == '5' && sizeOption == '1'){ // Quick Sort for 10,000
    Quicksort10000();
    cout << "SortType: Quick" << endl;
    cout << "Value Size: 10,000" << endl;
    cout << "Press any key to continue..." << endl;
            cin.ignore();
            cin.get(); 
}
else if(userInput == '1' && sizeOption == '2'){ // Insertion Sort for 100,000
    Insertionsort100000();
    cout << "SortType: Insertion" << endl;
    cout << "Value Size: 100,000" << endl;
    cout << "Press any key to continue..." << endl;
        cin.ignore();
        cin.get();      
            
}
else if(userInput == '2' && sizeOption == '2'){ // Selection Sort for 100,000
    Selectionsort100000();
    cout << "SortType: Selection" << endl;
    cout << "Value Size: 100,000" << endl;
    cout << "Press any key to continue..." << endl;
        cin.ignore();
        cin.get();  
        
}
else if(userInput == '3' && sizeOption == '2'){ // Bubble Sort for 100,000
    Bubblesort100000();
    cout << "SortType: Bubble" << endl;
    cout << "Value Size: 100,000" << endl;
    cout << "Press any key to continue..." << endl;
        cin.ignore();
        cin.get();    
}
else if(userInput == '4' && sizeOption == '2'){ // Merge Sort for 100,000
    Mergesort100000();
    cout << "SortType: Merge" << endl;
    cout << "Value Size: 100,000" << endl;
    cout << "Press any key to continue..." << endl;
        cin.ignore();
        cin.get();  
}
else if(userInput == '5' && sizeOption == '2'){ // Quick Sort for 100,000
    Quicksort100000();
    cout << "SortType: Quick" << endl;
    cout << "Value Size: 100,000" << endl;
    cout << "Press any key to continue..." << endl;
        cin.ignore();
        cin.get();  
}
else if(userInput == '1' && sizeOption == '3'){ // Insertion Sort for 1,000,000
    Insertionsort1000000();
    cout << "SortType: Insertion" << endl;
    cout << "Value Size: 1,000,000" << endl;
    cout << "Press any key to continue..." << endl;
        cin.ignore();
        cin.get();      
            
}
else if(userInput == '2' && sizeOption == '3'){ // Selection Sort for 1,000,000
    Selectionsort1000000();
    cout << "SortType: Selection" << endl;
    cout << "Value Size: 1,000,000" << endl;
    cout << "Press any key to continue..." << endl;
        cin.ignore();
        cin.get();  
        
}
else if(userInput == '3' && sizeOption == '3'){ // Bubble Sort for 1,000,000
    Bubblesort1000000();
    cout << "SortType: Bubble" << endl;
    cout << "Value Size: 1,000,000" << endl;
    cout << "Press any key to continue..." << endl;
        cin.ignore();
        cin.get();    
}
else if(userInput == '4' && sizeOption == '3'){ // Merge Sort for 1,000,000
    Mergesort1000000();
    cout << "SortType: Merge" << endl;
    cout << "Value Size: 1,000,000" << endl;
    cout << "Press any key to continue..." << endl;
        cin.ignore();
        cin.get();  
}
else if(userInput == '5' && sizeOption == '3'){ // Quick Sort for 1,000,000
    Quicksort1000000();
    cout << "SortType: Quick" << endl;
    cout << "Value Size: 1,000,000" << endl;
    cout << "Press any key to continue..." << endl;
        cin.ignore();
        cin.get();  
}
else if(sizeOption == '4'){
    cout << "Press any key to go back. . ." << endl;
        cin.ignore();
        cin.get();
}
else{
    cout << "Invalid Option. Please Try Again." << endl;
        cin.ignore();
        cin.get();
}

}


 return 0;

}