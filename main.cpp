#include <iostream>
#include <cstdlib>
#include <algorithm>
#include "midterm.cpp" 
using namespace std;

int main() {
    midterm1 A(50), B(50);
    int num;

    cout << "Rayver Punzalan\n" << endl;
    cout << "Union and Intersection of Two Sets" << endl;
    cout << "Enter the number of values for Set A: ";
    cin >> num;
    A.initial(num);

    cout << "Enter the number of values for Set B: ";
    cin >> num;
    B.initial(num);

    cin.ignore(); 
    cout << endl;

    // Original values
    cout << "Original" << endl;
    cout << "A = ";
    A.originalAll();
    cout << "\nB = ";
    B.originalAll();
    cout << endl;

    // Activity 1
    cout << "\nActivity 1" << endl;
    cout << "A = ";
    A.displayAll();
    cout << " The current index: " << A.curIndex;
    cout << "\nB = ";
    B.displayAll();
    cout << " The current index: " << B.curIndex;
    cout << endl;

    // Activity 2
    cout << "\nActivity 2" << endl;
    cout << "A = ";
    A.reverseAll();
    cout << " The current index: " << A.curIndex;
    cout << "\nB = ";
    B.reverseAll();
    cout << " The current index: " << B.curIndex;
    cout << endl;

    cout << "\nMerged" << endl;
    B.merge(A.getArray(), A.curValue());
    B.displayAll(); 
    cout << " The current index: " << B.curIndex;
    cout << endl;
	/*
	cout << "\nActivity 3" << endl;
    cout << "Selection Sort = ";
    B.selectionSort();
    B.displayAll();  
    cout << " The current index: " << B.curIndex;
    cout << endl;
 
    cout << "Descending = ";
    B.bubbleSort();
    B.displayAll();
    cout << " The current index: " << B.curIndex;	 
    cout << endl;
 
    cout << "\nActivity 4 : Bubble Sort" << endl;
    cout << "Ascending = ";
    B.bubbleSort();
    B.displayAll(); 
    cout << " The current index: " << B.curIndex;
    cout << endl;
 
    cout << "Descending = ";
    B.bubbleSort();
    B.displayAll();
    cout << " The current index: " << B.curIndex << endl;  
    cout << endl;
    
    cout << "Array" << endl;
    B.merge(A.getArray(), A.curValue());
    B.displayAll(); 
    cout << " The current index: " << B.curIndex;
    cout << endl;
    */
    int val; // item search
    cout << "Enter value to search: ";
    cin >> val;
    int found = B.searchData(val);
    if (found == -1) { 	
       cout << "Record not found!" << endl; 
    } else {
       cout << val << " is located at index " << found << endl; 
    }

    B.searchAll(val);
    
    // Delete by value
    int valueToDelete;
	cout << "Enter value to delete from set: ";
	cin >> valueToDelete;
	B.deleteByValue(valueToDelete);
	B.displayAll();
	cout << " The current index: " << B.curIndex << endl;
	
	/*
    int cntDelete;
	cout << "Enter index to delete from Set B: ";
	cin >> cntDelete;
	B.deleteByIndex(cntDelete);
	B.displayAll();
	cout << " The current index: " << B.curIndex << endl;*/
	int value, location;
	cout << "Enter Value to insert: "; cin >> value;
	cout << "Enter Index: "; cin >> location;
	
	B.insertVal(value, location);
	B.displayAll();
	
    return 0;
}

