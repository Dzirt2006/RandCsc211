#include <iostream>
#include<time.h>
#include <cmath>

using namespace std;

int FillArr(int*,int);
void MinMax(int*,int);
void Print(int*,int);


int main() {
  const int length=10;
    int arr[length];

FillArr(arr,length);
Print(arr,length);
MinMax(arr,length);
    return 0;
}

int FillArr(int *arr,int len){
   srand((unsigned)time(NULL));


    for(int i=0;i<len;i++){
        arr[i]=rand()%99+10;
    }
    return *arr;
}

void MinMax(int *arr,int len){
    static int min=99;
    static int max=10;
    int i=0;
    do {
        if (arr[i] < min) {
            min = arr[i];
        }
        if(arr[i]>max){
            max=arr[i];
        }
        i++;
    }
        while( i!=len);
        cout<<"Smallest number in array is: "<<min<<endl;
        cout<<"Greater number in array is: "<<max<<endl;
}

void Print(int* arr,int len) {
    for (int i = 0; i < len; i++) {
        cout << arr[i] <<" ";
    }
    cout<< endl;
    cout<< endl;
}
