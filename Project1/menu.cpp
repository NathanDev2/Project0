#include <iostream>
#include <ctime>
#include <time.h>
#include "testingunit.cpp"
using namespace std;

int main(){

char userInput; // Get user input
while(userInput != 'q'){ // Let us use q as our base case to close our program
system("cls"); 
    
    cout << "\t\tChoose a sort algorithm or press 'q' to quit" << endl;
    cout << "\t\t\t\t\t\t 1. Insertion Sort" << endl;
    cout << "\t\t\t\t\t\t 2. Selection Sort" << endl;
    cout << "\t\t\t\t\t\t 3. Bubble Sort" << endl;
    cout << "\t\t\t\t\t\t 4. Merge Sort" << endl;
    cout << "\t\t\t\t\t\t 5. Quick Sort" << endl;



    cout << "\t\t\t\t\t\t\tEnter here: "; // Get users Sort Type choice
    cin >> userInput;
    
    system("cls"); // Clear screen

    switch(userInput){ // Out 2nd menu for chose of size to go with their sort choice
    case '1': 
        cout << "\t\tChoose a size" << endl;
        cout << "\t\tChoose a values set or press q to quit" << endl;
        cout << "\t\t\t\t\t\t 1. 10,000 values" << endl;
        cout << "\t\t\t\t\t\t 2. 100,000 values" << endl;
        cout << "\t\t\t\t\t\t 3. 1,000,000 values" << endl;
        cout << "\t\t\t\t\t\t 4. Go Back" << endl;
        cout << "\t\t\t\t\t\t\tEnter here: ";
        break;
    case '2': 
        cout << "\t\tChoose a size" << endl;
        cout << "\t\t\t\t 1. 10,000 values" << endl;
        cout << "\t\t\t\t 2. 100,000 values" << endl;
        cout << "\t\t\t\t 3. 1,000,000 values" << endl;
        cout << "\t\t\t\t 4. Go Back" << endl;
        cout << "\t\t\t\t\tEnter here: ";
        break;
    case '3': 
        cout << "\t\tChoose a size" << endl;
        cout << "\t\t\t\t 1. 10,000 values" << endl;
        cout << "\t\t\t\t 2. 100,000 values" << endl;
        cout << "\t\t\t\t 3. 1,000,000 values" << endl;
        cout << "\t\t\t\t 4. Go Back" << endl;
        cout << "\t\t\t\t\tEnter here: ";
        break;
    case '4':
        cout << "\t\tChoose a size" << endl;
        cout << "\t\t\t\t 1. 10,000 values" << endl;
        cout << "\t\t\t\t 2. 100,000 values" << endl;
        cout << "\t\t\t\t 3. 1,000,000 values" << endl;
        cout << "\t\t\t\t 4. Go Back" << endl;
        cout << "\t\t\t\t\tEnter here: ";
        break;

    default:
        cout << "Error. Back to Main." << endl;
        break;
}
    char sizeOption;
    cin >> sizeOption;


char backToMain;

if(userInput == '1' && sizeOption == '1'){
    Insertionsort10000();
    cout << "Press any key to continue..." << endl;
            
            
}
else if(userInput == '2' && sizeOption == '1'){
    Selectionsort10000();
    cout << "Press any key to continue..." << endl;
            cin.ignore();
            cin.get();
        
}
else if(userInput == '3' && sizeOption == '1'){
    Bubblesort10000();
    cout << "Press any key to continue..." << endl;
            cin.ignore();
            cin.get();  
}
else if(userInput == '4' && sizeOption == '1'){
    Mergesort10000();
    cout << "Press any key to continue..." << endl;
            cin.ignore();
            cin.get(); 
}


}

 return 0;

}