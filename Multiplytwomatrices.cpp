#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int RandomNumbers(int from, int to)
{
    return rand()% (to - from + 1) + from;
}
void FillMatrix(int array[3][3], int row, int col)
{
    int k =1;
    for(int i =0; i < row; i++)
    {
        for(int j =0; j< col; j++){
            array[i][j] = RandomNumbers(1,10);   
        }
    }
}

void PrintNumbers(string massage, int array[3][3], int row, int col)
{
    
    cout << massage;
    for(int i =0; i < row; i++)
    {
        for(int j =0; j< col; j++){
            printf("%0*d  ", 2, array[i][j]);
        }cout << endl;
    }
}
void MultiplyTwoMatrces(int Sumarr[3][3],int array[3][3], int array2[3][3], int row, int col)
{
    for(int i =0; i < row; i++)
    {
        for(int j= 0; j < col; j++)
        {
            Sumarr[i][j] = array[i][j] * array2[i][j];
        }
    }
}
int main(){
    srand(time(0));
    int array[3][3], array2[3][3], Sumarr[3][3];
    FillMatrix(array, 3, 3);
    PrintNumbers("The following is the first 3*3 matrix: \n", array, 3, 3);
    FillMatrix(array2, 3, 3);
    PrintNumbers("The following is the second 3*3 matrix: \n", array2, 3, 3);
    MultiplyTwoMatrces(Sumarr, array, array2, 3, 3);
return 0;
}
    PrintNumbers("The following is the multiplcation of two 3*3 matrix: \n", Sumarr, 3, 3);
