#include<iostream>
using namespace std;

int sum(int a, int b){
   return a+b;
}

int main(){
    int a;
    int b;
    printf("Enter value of a & b \n");
    cin>>a;
    cin>>b;
    printf("Sum of a & b is %d", sum(a,b));
}
