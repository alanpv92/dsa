#include<iostream>
using namespace std;


void printNTo1(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    printNTo1(--n);
}

void print1ToN(int n){
    if(n==0){
        return;
    }
    print1ToN(--n);
    cout<<n<<endl;
}

void printName(const char* name,int currentCount,int totalCount){
    if(currentCount>totalCount){
      return;
    }
  cout<<name<<endl;
  printName(name,++currentCount,totalCount);
}
 
int sumOfNNumbers(int n){
    if(n==1){
        return 1;
    }
    return n+ sumOfNNumbers(n-1);
} 

int fact(int n){
    if(n==1){
        return 1;
    }
    return n*fact(n-1);
}


void reverseArray(int a[],int startingIndex,int n){
    if(startingIndex>=n/2){
        return;
    }
    int temp=a[startingIndex];
    a[startingIndex]=a[n-1-startingIndex];
    a[n-1-startingIndex]=temp;
    reverseArray(a,startingIndex+1,n);
}

int main(){
    // printName("Alan",1,5);
    // printNTo1(10);
    int a[6]={34,2,12,1,5,6};
    reverseArray(a,0,6);
    for(int i=0;i<6;i++){
        cout<<a[i]<<" ";
    }
    // cout<<fact(4);
    return 0;
}