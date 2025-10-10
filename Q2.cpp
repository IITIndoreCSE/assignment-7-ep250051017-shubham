/* Write a program that searches for the largest three numbers in an array randomly populated by a user. */

#include <iostream>
using namespace std;

void Swap(int& a, int& b){
  int temp;
  temp=a;
  a=b;
  b=temp;
}


void sortArray(int ar[], int size){

  for (int i =0; i<size; i++){
      for (int j=0; j<size; j++){
          if(ar[j]>ar[j+1]){
              Swap(ar[j],ar[j+1]);    
          }
      }
  }
      
}

int main(){
  cout<<"Enter the number of elements in an array: ";
  int size;
  cin>>size;
  int ar[size];
  cout<<"Enter "<<size<<" numbers: "<<endl;

  for (int i=0; i<size; i++){
    cout<<"Element "<<i+1<<": ";
    cin>>ar[i];
  }
  
  sortArray(ar, size);

  cout<<"The three largest numbers are: "<<endl;
  cout<<"1st: "<<ar[size]<<endl;
  cout<<"2nd: "<<ar[size-1]<<endl;
  cout<<"3rd: "<<ar[size-2]<<endl;

  return 0;
  
}
