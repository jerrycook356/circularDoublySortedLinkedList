//  Created by Frank M. Carrano and Tim Henry.
//  Copyright (c) 2013 __Pearson Education__. All rights reserved.

#include <iostream>
#include <string>
#include "LinkedSortedList.h" // ADT list operations
#include <time.h>

using namespace std;

void insert50Ints(LinkedSortedList<int>* sortedList)
{
	int counter = 0;
	srand(time(NULL));
	while (counter < 50)
	{
		
		int num = rand() % 100 + 1;
		sortedList->insertSorted(num);
		counter++;

	}
}



int main()
{
	
	LinkedSortedList<int>* sortedList = new LinkedSortedList<int>();
	//insert50Ints(sortedList);

    sortedList->insertSorted(3);
	sortedList->insertSorted(2);	
	sortedList->insertSorted(1);
	sortedList->insertSorted(4);


	

	cout << endl << endl << "traverse foward" << endl;
	sortedList->traverseFoward();
	
	cout << endl <<endl<<endl<< "traverse backwards"<<endl;
    sortedList->traverseBackwards();

	cout << "\nFin\n\n"; 
	return 0;
}  // end main


