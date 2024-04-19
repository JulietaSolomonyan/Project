#include <iostream>


	const int Max_Size = 100;

	void SpiralView ( int arr[][Max_Size], int STR, int STC, int  n, int  m){


		for ( int j = STC; j < STC + m-1; j ++){

			std::cout << arr[STR][j];
		}	
		for ( int i = STR; i < STR+n-1; i++ ){
		
				std::cout << arr[i][STC+ m-1];
		}	

		if ( m >1){
		
			for ( int j = STC+m-1; j > STC; j--){
		
				std::cout << arr[STR+n-1][j];
			}
		}

		if (n >1){
		
			for ( int i = STR+n-1; i > STR; i-- ){
		
				std::cout << arr[i][STC];
			}
		}

		SpiralView (arr, STR+1, STC+1, n-2, m-2);

	}



int main () 

{

	int row= 0; 

	std::cin >>row;
	
	int col = 0;
	
	std::cin >> col;
 
	int StartRow = 0;

	int StartCol = 0;

	if ( col > Max_Size || row > Max_Size) {
		
		std::cout << "WRong input" << std::endl;
	
			}
	int array[row][Max_Size];

	for ( int i = 0; i < row; i++ ) 
	{
		for ( int j = 0; j < col; j++ )
		{
			std::cout << "array[" << i << "][" << j << "]=";
		
		 	std::cin >> array[i][j];
		}	
		
	}


	SpiralView ( array, StartRow, StartCol, row, col);

	return 0;

}
