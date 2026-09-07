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

void FillArray(int array[100], int arrlength){
    for(int i =0; i < arrlength; i++){
        array[i] = RandomNumber(1,100);
    }        
}

int OddNumbersInArray(int array[100], int arrlength){
    int count=0;
    for(int i = 0; i  <arrlength; i++){
        if(array[i]%2 !=0){
            count++;
        }  
    }return count;
}

void PrintArray(int array[100], int arrlength){
    
    for(int i = 0; i < arrlength; i++){
        cout << array[i]<< " ";
        
    }cout << endl;
}


int main (){
    srand((unsigned)time(NULL));
    int array[100], arrlength = ReadPositiveNumber("enter length of array: ");

    FillArray(array, arrlength);
    cout << "Array 1 elements: " << endl;
    PrintArray(array, arrlength);

    
    cout << "Odd numbers count is: " << OddNumbersInArray(array, arrlength) << endl;
    
    

    return 0;
    
} 
