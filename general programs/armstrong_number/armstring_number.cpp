#include<iostream>
#include<math.h>
using namespace std;

/*



-> logic
  -> keep on dividing number by 10
  -> take each remaider and find the cube
  -> if sum of all cubes is the same number then return true else false

*/


bool isArmstrong(int n){
    int temp=n;
    int sumOfCubes=0;
    while(temp>0){
        sumOfCubes+=pow(temp%10,3);
        temp=temp/10;
    }
    return sumOfCubes==n;
}



int main(){
  int n;
  cout<<"enter number you want to check:"<<endl;
  cin>>n;
  isArmstrong(n)?cout<<"Number you entered is armstrong":cout<<"Number is not armstrong";
  return 0;
}