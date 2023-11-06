#include <iostream>
#include <ctime>
#include <time.h>
#include <limits>
#include "testingunit.cpp"
using namespace std;
/*
    Name: Nathan Darrett
    Professor: Dhanyu Amarasinghe 
    Course: CSCI 41
*/

/*Program Info for SortTypes.cpp
    Purpose: To let the user use the sorting methods available in the menu of different sizes
    
*/


int main(){
char userInput = '\0';
char sizeOption = '\0';
while(userInput != 'q'){ // Let us use q as our base case to close our program
 userInput = '\0'; // Reset userInput to initial value at the beginning of each iteration
 sizeOption = '\0'; // Let us do the same with sizeOption

    system("color 0A");
    system("cls"); 
    cout << "\t\t\t*******************************************" << endl;
    cout << "\t\t\t|                                         |" << endl;
    cout << "\t\t\t|   Choose a sort algorithm or press 'q'  |" << endl;
    cout << "\t\t\t|                  to quit.               |" << endl;
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
    cin.ignore();

    system("cls"); // Clear screen
    system("color 0C");

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
        cout << "Goodbye." << endl;
        return 0;
    default:
        continue;
        cout << "Error. Please rerun the program or key in a value to continue." << endl;
    }

cin >> sizeOption;



system("cls");
system("color 0B");

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
    continue; // This should make user go back to main
}
else if (sizeOption == 'q'){
    cout << "Goodbye." << endl;
    return 0;
}
else{
    continue;
    cout << " Please Try Again." << endl;
        cin.ignore();
        cin.get();
}

}
    system("cls");
    cout << "GoodBye." << endl; // Goodbye message 
 return 0;

}