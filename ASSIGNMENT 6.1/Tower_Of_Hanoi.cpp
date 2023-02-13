#include<iostream>
using namespace std;


void TowerOfHanoi(int num,char A,char B,char C){
  if(num>0){
    TowerOfHanoi(num-1, A, C, B);
    cout<<"Move a disk "<<num<<" from "<<" "<<A<<" to"<<" "<<C<<endl;
    TowerOfHanoi( num-1, B, A, C);
  }
}

int main(){
  int numOfDisk;
  cout<<"Enter the no. of disks"<<endl;
  cin>>numOfDisk;
  
  
  TowerOfHanoi(numOfDisk,'A','B','C');
  cout<<endl;
}
