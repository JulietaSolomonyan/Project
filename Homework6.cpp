#include <iostream>
	
		void sortArray (int OurArray[], int  size) {
			  	
  		for (int i = 0; i < size; i++) {

		for ( int j = i+1; j < size; j++){
		
			if (OurArray[i] > OurArray[j]){
			
				int temp = OurArray[i];
				
				OurArray[i] = OurArray[j];
				
				OurArray[j] = temp;
					
			}
			}
		}	  
  
		}
int main (){

		
 	int n =0;

	std::cin >> n;

	int arr[n];
	
	for (int i = 0; i< n; i++){
		
		std::cout << "arr[" << i <<"]= ";	
		std::cin >> arr[i];
	}	
	  

		
	sortArray(arr, n);
		
	for (int i = 0; i< n; i++){
		
	std::cout << arr[i];
	}
		

	
	 return 0;
    }


