#include<iostream>
int main(){
  int sum = 0;
  std::cout<<"Enter the elements of array: ";
  int arr[3][3];
  for(int i = 0 ; i < 3 ; i++){
    for (int j = 0 ; j < 3 ; j ++){
      std::cin>>arr[i][j];
      continue;
    }
  }

  std::cout<<"You entered:\n";
  for(int i = 0 ; i < 3 ; i++){
    for (int j = 0 ; j < 3 ; j ++){
      std::cout<<arr[i][j]<<"\t";
      sum += arr[i][j];
    }
    std::cout <<"Sum of row: "<<sum<<std::endl;
    sum = 0;
    std::cout<<std::endl;
  }
  //std::cout<<"Sum of element:"<<sum<<std::endl;
  return 0;
}
