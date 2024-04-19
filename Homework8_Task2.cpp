#include <iostream>	

const int Max_Size = 10;

void InputArray(int arr[][Max_Size], int n, int m){
	
	for(int i = 0; i < n; i ++ ){
		
		for ( int j = 0; j < m; j ++ ){

			std::cout <<"a[ "<< i << "] " << "[" << j << "]="  ;

			std::cin >> arr[i][j];	
		}
	}	
}

void Sum(int arr1[][Max_Size], int arr2[][Max_Size], int k[][Max_Size], int n, int m) {

	for(int i = 0; i < n ; i ++ ){
		
		for ( int j = 0; j < m; j  ++ ){

			k[i][j] = arr1[i][j] + arr2[i][j];

			std::cout<<"k[ "<< i  << "] " << "[" << j  << "]=" << k[i][j]  << std::endl;	
		}	
	} 	
}

int main(){
	
        int  row = 0; 

	std::cout << "INsert number of rows"<<std::endl;

	std::cin >> row;

	std::cout << "INsert number of columns"<<std::endl;
        
	int  column = 0; 

	std::cin >> column;

	if (column > Max_Size){
	
		std::cout << "Wrong input" << std::endl;
	}

	int array1[row][Max_Size];

	int array2[row][Max_Size];

	int array3[row][Max_Size];

	std::cout << "Input Array1" << std::endl;

	InputArray(array1,row, column);

	std::cout << "Input Array2" << std::endl;

	InputArray(array2,row, column);
	
	std::cout << "New Array" << std::endl;

	Sum(array1,array2,array3, row, column);



      return 0;
}
