#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int ReadPositiveNumber(string massage){
    int number;
    do
    {
        cout << massage;
        cin >> number;
    } while (number <= 0);
    return number;   
}
int RandomNumber(int from, int to){
    return rand()% (to - from +1) + from;
}
void FillArrayWithRandomNumbers(int array[100],int number){
    
    for (int i = 0; i < number; i++){
        array[i] =i+1;   
    }
}
void Swap(int &a, int &b ){
        int temp =0;
        temp =a;
        a =b;
        b = temp;
}
void PrintArray(int array[100],int number){
    
    for (int i = 0; i < number; i++){

        cout << array[i]<< " " ;   
    }cout << endl;
}
void ShuffleArrays(int array[100], int number){
    for(int i = 0; i <number;i++){

        Swap(array[RandomNumber(1,number)-1], array[RandomNumber(1, number)-1]);
        
    }
}
int main (){
    srand((unsigned)time(NULL));
    int array[100] , number;
    number= ReadPositiveNumber("enter your number: ");

    FillArrayWithRandomNumbers(array, number);
    
    cout << "Elements of Array One: "<< endl;
    PrintArray(array, number);
    
    ShuffleArrays(array, number );

    cout <<endl << "Elements After Shffle Array : "<< endl;
    PrintArray(array, number);

    
    
    return 0;
    
} 
