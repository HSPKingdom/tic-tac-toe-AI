package core;

public class gameCore {

	
	private char game[][];
	private int counter = 0;
	
	public gameCore()
	{
		for(int i=0; i<=2; i++)
			for(int j=0; j<=2; j++)
				game[i][j] = ' ';
		counter = 0;
	}
	
	public gameCore(char tempGame[][], int tempCounter)
	{
		game = tempGame;
		counter = tempCounter;
	}
	
	public int getCounter()
	{
		return counter;
	}
	
	public void showData()
	{
		int progress = 1; 			// the x axis
		for(int i=0; i<=2; i++)
		{
			System.out.print("\t\t|\t\t|\t\t\n\t");
			System.out.print(game[progress++][i] + "\t|\t");
			System.out.print(game[progress++][i] + "\t|\t");
			System.out.print(game[progress++][i] + "\t|\t\n");
			System.out.print("---------------------------------------------\n");
		}
	}
	
	public char getData(int positionX, int positionY)
	{
		return game[positionX][positionY];
	}
	
	public void addData(int positionX, int positionY, char instruction)
	{
		game[positionX][positionY] = instruction;
		counter ++;
	}
	
	public gameCore getAllData()
	{
		gameCore temp = new gameCore(game, counter);
		return temp;
	}
	
	
}
