#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
using namespace std;

int ReadPositiveNumber(string massage){
    int number;
    do
    {
        cout << massage;
        cin >> number;
    } while (number < 0);
    return number;   
}
int RandomNumber(int from, int to){
    return rand()%(to - from +1) +from;
}
void FillArray(int array[100], int number){
    for(int i = 0; i < number; i++){
        array[i] = RandomNumber(1, 100);
    }
}
void AddArrayElement(int number, int array2[100], int &length){
    int array[100];
    if (number % 2 != 0){
        array2[length] = number ;
        length++;
    }    
}
void CopyArray(int array[100], int array2[100], int number, int &length){
    for(int i =0; i < number; i++){
        AddArrayElement(array[i],array2,length);
    }
}
void PrintArray(int array[100], int length){
    
    for(int i = 0; i < length; i++){
        cout << array[i]<< " ";
        
    }cout << endl;
}


int main (){
    srand((unsigned)time(NULL));
    int array[100], number = ReadPositiveNumber("enter your massge "), array2[100], length =0;

    FillArray(array, number);
    cout << "Array 1 elements: " << endl;
    PrintArray(array, number);

    CopyArray(array, array2, number, length);
    cout << "Array 2 elements: " << endl;
    PrintArray(array2, length);
    

    return 0;
    
} 
