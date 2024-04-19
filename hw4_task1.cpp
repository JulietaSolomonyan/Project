#include <iostream>

int main() {

    int n=0;

    std::cin >>n;

    #define FIRST "Առաջին պատկեր ";

    #define SECOND "Երկրորդ պատկեր ";

    #define THIRTH "Երրորդ պատկեր ";

   

    std::cout << "\n" << FIRST;

   

    for(int i =1; i<=n; i++){

  

           std::cout << "\n" ;

          

              for (int j=1; j<=i; j++){

               

                std::cout << "*";

              }

          }

         

    std::cout << "\n" << SECOND;

         

          for(int i =1; i<=n; i++){

  

           std::cout << "\n" ;

          

        for (int j=i; j<=n; j ++){

               

                std::cout << " ";

              }

             

         for (int k=1; k<=i; k ++){

               

                std::cout << "*";

              }

          }


            std::cout << "\n" << THIRTH;

          for(int i =1; i<=n; i++){

  

           std::cout << "\n" ;

          

        for (int j=i; j<n; j ++){

               

                std::cout << " ";

              }

             

         for (int k=1; k<=i; k ++){

               

                std::cout << "* ";

              }

          }

    return 0;

}
