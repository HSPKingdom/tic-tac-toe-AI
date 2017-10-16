#include "xoManager.h"
#include <iostream>
using namespace std;


void xoFormer::foo()
{
	cout << "HI" << endl;
}

int xoFormer::getCounter()
{
	return counter;
	
}

// Initial
void xoFormer::dataInitial()
{
	for(int i=0; i<10; i++)
		data[i] = ' ';
		counter = 0;
}


// Show	Data   	   
void xoFormer::showData()
{
	int progress = 1;
	// Display Box to Box
	for(int i=1; i<=3; i++)
	{
		cout << "\t\t|\t\t|\t\t\n" << "\t";
		cout << data[progress++] << "\t|\t";
		cout << data[progress++] << "\t|\t";
		cout << data[progress++] << endl;
		cout << "\t\t|\t\t|\t\t\n";
		cout << "---------------------------------------------" << endl;
		
		
	}	 	 
}

// 
void xoFormer::addData(int position, char instruction)
{
	data[position] = instruction;
	counter ++;

}

char xoFormer::getData(int position)
{
	return data[position];
}


int xoFormer::win(char test)
{
	
	
	for(int i=1; i<=9; i++)
	{
		// Rules 1
		if(i <= 3)	
			if(data[i] == test)  
				for (int j = 0; j<=1; j++)
					if(data[i + 3] == test && data[i + 6] == test)
						return 1;
		// Rules 2
		if(i == 1 || i == 4 || i == 7)
			if(data[i] == test)
				if(data[i + 1] == test && data[i + 2] == test)
					return 2;
	}
	// Rules 3
	if( ( data[3] == test && data[5] == test && data[7] == test ) || ( data[1] == test && data[5] == test && data[9] == test ) )
		return 3;
	if(counter == 9)
		return 9;
	return 0;
}

