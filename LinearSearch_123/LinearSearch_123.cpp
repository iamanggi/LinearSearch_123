#include <iostream>
using namespace std;

int arr[20];		//array to be search
int n;				// number of element in the array 
int i;				// index of array element 


void input() 
{
	while (true) 
	{
		cout << "enter the number of element in the array: ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\nArray should have minimum 1 and maximum 20 elemnts.\n\n";
	}

	// Accept array elements
	cout << "\n--------------------\n";
	cout << " Enter Array Elements \n";
	cout << "----------------------\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}



void LinearSearch()
{
	char ch;
	int ctr;			// number of comparisons


	do
	{
		//accept the number to be searched 
		cout << "\nEnter the element you want to seacrh: ";			//langkah no 1 algoritma
		int item;
		cin >> item;

		ctr = 0;
		for (i = 0; i < n; i++)										// langkah no 2,3 & 4 algoritma
		{
			ctr++;
		}
	}
}