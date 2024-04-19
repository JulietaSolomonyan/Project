#include <iostream>

int main(){
	
	int row= 0;
	
	std::cout << "Enter number of rows"<< std::endl;
	
	std::cin>> row;

	while (std::cin.fail){
		
		std::cout << "Your input was wrong" << std::endl;
		
		std::cin.clear();

		std::cin.(ignore);
	}

	int col = 0;

	std::cout << "Enter number of rows"<< std::endl;
	
	std::cin>> col;

	int a[row][col];

	int k=0;

	int  temp;

	bool temp1 = true;

	for ( int i = 0; i < row; i ++ ){
	
		for( int j = 0; j < col; j++){
		 
			std::cout << "a[" << i << "][" << j << "]=";

			std::cin>>a[i][j];	
		
		}
	}
				
	for ( int i = 0; i < row; i ++ ){

		for( int j = 0; j < col; j++){

			for ( int x = 0; x < row; x ++ ){

				for ( int y = 0; y < col; y ++ ){

					if (( a[x][y] == a[i][j]) && ( (x !=i) || (y != j))) {
					
						temp1 = false;
						
						break;
					     
						}
					}

					if (!temp1) {
				
					break;
					}
				}	

					if (temp1){
					
					std::cout << a[i][j]<<std::endl;
		
					} 
			}		
		}

	
	return 0;
}


						
						

						



					


			

