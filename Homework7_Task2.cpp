#include <iostream>

void reverse(char arr[], int n){


	std::cout <<"n=";

	std::cin >>  n;

	
	if (std:: cin.fail()){
		
		std::cout << "Wrong input" << std::endl;
		
	}
	
	for( int i = 0; i < n; i++ ){

		std::cin >> arr[i];
		
		std::cout << arr[i];


	}        

		
	std::cout << "\n" << std::endl;

	for( int i = n; i >= 0 ; i-- ){

		
		std::cout << arr[i];
	}
		

}

int main (){

	int size = 0;

	char array[size];

	reverse (array, size);

		

	

	return(0);
}
