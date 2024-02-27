#include <iostream>
using namespace std;

void myFunction(){
    cout<<"hellow i am being called";
}


void func2(void (*myFunc)()){
  myFunc();
}

int main()
{

     void (*p)()=myFunction;
   func2(p);
    // cout<<myFunction;
    // int n;
    // cout << "enter the size of array:" << endl;
    // cin >> n;
    
    // //   int *array=(int*) malloc(n* sizeof(int));
    // int *array = (int *)calloc(n, sizeof(int));
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> array[i];
    // }

    // array= (int*) realloc(array,n*sizeof(int));

    // for (int i = 0; i < n; i++)
    // {
    //     cout << array[i] << endl;
    // }

    //    int a=10;
    //    int* pa=&a;
    //    cout<<pa<<endl;
    //    *pa=20;
    //    cout<<a;
    //  int a[3];
    //  int array[3]={1,2,3};
    //   for(int i=0;i<3;i++){
    //     cout<<*(array+i);
    //   }
    //  free array[];
    return 0;
}