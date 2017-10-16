#include <iostream>
#include "AI.h"
using namespace std;


void AI::AI()
{
	for(int i=1; i<=3; i++)
		for(int j = 1; j <= 3; j++)
		{
			newData[i][j] = ' ';
			oldData[i][j] = ' ';
		}	
	positionX = 0;
	positionY = 0;
	counter = 0;

}

int AI::Lobby(const char dataInput[])
{
	getNewData(dataInput);
	showNewData();	  

	replaceOldOne();
}

void AI::getNewData(const char dataInput[])
{
	int tempCounter = 1;
	
	for(int i = 1; i<=3; i++)
		for(int j = 1; j<= 3; j++)
		{
			newData[i][j] = dataInput[tempCounter];
			instruction = newData[i][j];
			tempCounter += 1;
		}
	counter ++;
	
	
}

void AI::showNewData()
{
	for(int i=1; i<=3; i++)
		for(int j=1; j<=3; j++)
		{
			cout << newData[i][j];
		}

}

void AI::replaceOldOne(char instruction)
{
	oldData[positionX][positionY] = instruction
}


/*
	k	|	k	|	k	|
	k	|	k	|	k	|
	k	|	k	|	k	|\
*/

int AI::compareData(int& positionX, int& positionY)
{
	
	for(int i=1; i<=3; i++)
		for(int j=1; j<=3; j++)
		{
			if(newData[i][j] != oldData[i][j])
			{
				positionX = i;
				positionY = j;
				break;
			}
		}
}

int 


