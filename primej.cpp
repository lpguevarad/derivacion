#include <iostream>
#include <cmath>


int isprime(int n)


{
  if (n<=1){
    return 0;
  }

  if (n==2){
      return 1;
    }
    
  for (int i=2;i<=sqrt(n);i++){
    if (n%i ==0){
      return 0;
    }
      }
  return 1;
  
}

int main ()

{
  
  std::cout << isprime(-2) << std::endl;
  std::cout << isprime(0) << std::endl;
  std::cout << isprime(2) << std::endl;
  std::cout << isprime(3) << std::endl;
  std::cout << isprime(4) << std::endl;
  std::cout << isprime(41) << std::endl;

    return 0;
}
