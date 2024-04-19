#include <iostream>

const int Max_Size = 100;

void InputArray (int arr[][Max_Size],int row, int col);

void CheckUniqueness ( int arr[][Max_Size], int row, int col); 

int main() {

	std::cout << "Insert rows" << std::endl;	
	
	int row= 0;

	std::cin>> row;

	int col = 0;

	std::cout << "Insert columns" <<std::endl;

	std::cin>> col;

	int array[row][Max_Size];



	InputArray (array, row, col);
	
	CheckUniqueness (array, row, col);

		return 0;
}

void InputArray (int arr[][Max_Size],int row, int col){

	for ( int i = 0; i < row; i++) {

		for ( int j = 0; j < col; j++){	
		
			std::cout << "array[" << i << "][" << j << "]=";

			std::cin>>arr[i][j];	
			
			while (std::cin.fail()){
			
				std::cout << "you have input wrong type";

				std::cin.clear();

				std:: cin.ignore();	
				
				std::cin>>arr[i][j];	
			}
		}
	}
}


void CheckUniqueness ( int arr[][Max_Size], int row, int col) {
	
	
	bool TempArray[row][Max_Size]; 

	for ( int i = 0; i < row; i++ ){
	
		for (int j = 0; j < col; j++){
			
			TempArray[i][j] = true;		
			
		}
	}	

	for ( int i = 0; i < row; i++) {

		for ( int j = 0; j < col; j++){	
		
			for ( int x = 0; x < row; x++) {

				for ( int y = 0; y < col; y++){	
		
					if (( arr[x][y] == arr[i][j]) && ( (x !=i) || (y != j))) {
					
						TempArray[i][j] = false;
		
					}		
						
				}
			}
		}
	}

	for ( int i = 0; i < row; i ++ ){
	
		for( int j = 0; j < col; j++){
		
			if (TempArray[i][j] == true){
				
				std::cout << arr[i][j] << std::endl;
			
			}
		}
	}	
}

