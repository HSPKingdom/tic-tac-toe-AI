package core;

import java.util.Scanner;

public class Player {
	private gameCore game;
	private char symbol;
	
	public Player(char symbol)
	{
		this.symbol = symbol;
	}
	
	public boolean addData(int x, int y){
		if (game.getData(x, y) == ' ')
		{
			game.addData(x, y, symbol);
			return true;
		}
		else
		{
			String output = "( ", x, " , ", y, " ) is filled"
			System.out.println(output);
			return false;
	
		}
	}
	
	public char getData(int x, int y)
	{
		return game.getData(x, y);
	}
	
	public void showData(){
		game.showData();
	}
	
	public void inputData()
	{
		char x = ' ', y = ' ';
		
		game.showData();
		
		Scanner reader = new Scanner(System.in);
		do{
			System.out.println("Please Enter a x-axis and y-axis you want to input: ");
			x = reader.next().trim().charAt(0);
			y = reader.next().trim().charAt(0);			
		}while(addData(x,y) == false);
		
		reader.close();

	}
}
