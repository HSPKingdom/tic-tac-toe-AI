// AI version
#include<iostream>
//#include<fstream>
#include "xoManager.h"
#include "AI.h"

using namespace std;

int menu(xoFormer);
int checkInput(int , int , xoFormer);
void result(char, int );


int main()
{
	char data[10];
	for(int i=0; i<=9; i++)
		data[i] = ' ';

	int input, winRules;
	char champion;
	char XO[] = {'X', 'O'};
	
	//Default Stuff
	xoFormer a;
	AI b;
	a.dataInitial();
	
	cout << "\n\n\n==========This is a cross-and-circle Game==========\n\n"<< endl;
	

	a.showData();
	
	
	
	a.addData(1,'X');
	a.addData(2,'O');
	a.showData();
	a.getAllData(data);
	b.getNewData(data);
	for(int i=1; i<=9; i++)
		cout << data[i] << " " ;
	
	cout << endl;
	
	b.showNewData();
		
	
	
	
	return 0;
	
}

// Response for input
int menu(xoFormer a)
{
	int inputC, inputR, position = 0;
	bool Re = false;
	do{
		if(Re == true)
		{
			cout << "\nWrong!! Please re-enter!!\n"; 
			a.showData();
		}
		cout << "Colum?";
		cin >> inputC;
		cout << "Row?";
		cin >> inputR;
		Re = true;
		position = checkInput(inputC, inputR, a);
	}while(position == 0);
	return position;	
}


// Check if input is occupyed or if it is valid
int checkInput(int inputC, int inputR, xoFormer a)
{
	int position;
	
	if(inputC >= 1 && inputC <= 3)
		if(inputR >=1 && inputR <=3)
		{
			position = (inputC - 1)*3 + inputR;
			if(a.getData(position) == ' ')
				return position;
		}
	return 0;	 
}

void result(char champion, int winRules)
{
	if(winRules == 9)
		cout << "\nThe List is Full, Game Over!" << endl;
	else
		cout << "\nChampion is " << champion << "\nWin with Rules: " << winRules << endl;
}

