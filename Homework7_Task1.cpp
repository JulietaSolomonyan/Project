
#include <iostream>// SXAL KAAAA:wq

void FindNumbers (int arr[], int size) {
	
	int number = 0;

	std::cout << " insert number - ";

	std::cin >> number;
	

	if (std::cin.fail()){
	
		std::cout << "WRong input" <<std::endl;
	}
	
	for( int i = 0; i < size; i ++ ){
	
		std::cout << "araay[" << i << "]=";
		
		std::cin >> arr[i];

	}



	for( int i = 0; i < size; i ++ ){
	
		for ( int  j = i+1; j < size; j ++){
		 
			if ( ( arr[i] + arr[j] ) == number){
				
			std::cout << arr[i] << "  " << arr[j] << std::endl;
	
			}	else {
			
				std::cout << "THere are not founded numbers" << std::endl;
			}
		
		}	
	
	}

}





int main(){



	int n = 0;	

	std::cin >> n;

	int array [n];

	FindNumbers (array, n);


	return 0;
}



	// Or we can also do like this
	//
/* 
#include <iostream>

void SetMember(int arr[], int size);

void FindNumbers (int arr1[], int size1) ; 


int main(){



	int n = 0;	

	int array [n];



	FindNumbers (array, n);


return 0;
}


void SetMember (int arr[], int size){




	
	for( int i = 0; i < size; i ++ ){
	
		std::cout << "araay[" << i << "]=";
		
		std::cin >> arr[i];

	}
}

void FindNumbers (int arr1[], int size1) {
	
	std::cout << " size = ";

	std::cin >> size1;
	
	SetMember(arr1, size1);

	int number = 0;

	std::cout << " insert number - ";

	std::cin >> number;



	for( int i = 0; i < size1; i ++ ){
	
		for ( int  j = i+1; j < size1; j ++){
		 
		
			if ( ( arr1[i] + arr1[j] ) == number){
				
				std::cout << arr1[i] << "  " << arr1[j] << std::endl;
		}	
		
		}	
	
	}


}*/
