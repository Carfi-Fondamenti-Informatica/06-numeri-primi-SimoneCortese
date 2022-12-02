#include <iostream>
#include "lib.h"
int main(){
  int a;
  std::cin>>a;
  if (numeroprimo(a) == 0){
  std::cout<<"numero primo"<<
    std::endl;
  }
  else{
  std::cout<<"numero non primo"<<
    std::endl;
  }
  return 0;
}
