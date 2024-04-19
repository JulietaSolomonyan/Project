#include <iostream>

	const int Max_Size = 100;	
	
	void InputArray(int a[][Max_Size], int n){

		
		for(int i = 0; i < n; i ++ ){
	
			for ( int j = 0; j < n; j ++ ){	

				std::cout <<"a[ "<< i << "] " << "[" << j << "]="  ;
							
				std::cin >> a[i][j];
	
			}
		}
	}	
	


  	void NewArray(int a[][Max_Size], int n) {


		for(int i = 0; i < n ; i ++ ){
	
			for ( int j = 0; j < n; j  ++ ){
		
				std::cout <<"a[ "<< i  << "] " << "[" << j  << "]=" <<  a[j][i] << std::endl;
				} 
	
		}
	}
int main(){

        int  size = 0; 

	std::cin >> size;

	if (size > Max_Size){
	
		std::cout << "Wrong input" << std::endl;
	}

	int array[size][Max_Size];

	std::cout << "Input Array" << std::endl;

	InputArray(array,size);
	
	std::cout << "New Array" << std::endl;

	NewArray(array,size);


      return 0;
}
	
