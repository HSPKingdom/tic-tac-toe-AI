

class AI{


	public:
		void dataInitialize();
		void getNewData(const char []);
		void showNewData();
		int  compareData();
	
	private:
		char newData[4][4];
		char oldData[4][4];
		int  counter;
		int positionX;
		int positionY;
		char instruction;
		
		
};

