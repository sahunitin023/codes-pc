#include <bits/stdc++.h>
using namespace std;
 
// Edit MACROs here, according to your Matrix Dimensions for
// mat1[8][8] and mat2[8][8]

 
void MatMul(int mat1[][8], int mat2[][8])
{
    int mat3[8][8];
 
    cout << "Multiplication of given two matrices is:\n";
 
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            mat3[i][j] = 0;
 
            for (int k = 0; k < 8; k++) {
                mat3[i][j] += mat1[i][k] * mat2[k][j];
            }
 
            cout << mat3[i][j] << "\t";
        }
 
        cout << endl;
    }
}

int main()
{

    int mat1[8][8] = { {1,0,2,1,4,1,1,1},{2,0,3,2,2,1,0,0},{1,2,0,0,1,2,3,1},{3,0,1,1,3,3,1,1},{4,1,1,0,2,4,2,2},{1,0,0,1,3,1,1,1},{1,3,2,1,2,1,0,0},{4,2,2,1,1,0,0,0} };
    int mat2[8][8] = { {1,0,0,1,1,1,0,0},{0,1,1,0,0,0,1,1},{2,0,0,2,0,0,2,2},{0,2,2,0,2,2,0,0},{3,3,3,1,4,3,2,3},{1,2,1,3,1,3,1,1},{3,2,1,2,4,1,1,0},{2,2,2,3,3,2,4,4} };

    MatMul(mat1, mat2);
 
    return 0;
}