/*
 *  CHRISTOPHER APODACA
 *  CSC338 - ALGORITHMS
 *  FLOYD'S ALGORITHM IMPLEMENTATION
 *  01/26/2020
 *  NATIONAL UNIVERSITY CURRICULUM
 *
 */

#include<iostream>

using std::endl;
using std::cout;

const int INFINITY = 99999;
const int SIZE = 5;

//INITIALIZE A 2D ARRAY
void init( int m[][SIZE] ){
  
  m[0][0] = 0;
  m[0][1] = 4;
  m[0][2] = INFINITY;
  m[0][3] = 3;
  m[0][4] = 9;

  m[1][0] = 6;
  m[1][1] = 0;
  m[1][2] = 2;
  m[1][3] = 5;
  m[1][4] = INFINITY;

  m[2][0] = INFINITY;
  m[2][1] = INFINITY;
  m[2][2] = 0;
  m[2][3] = 3;
  m[2][4] = INFINITY;

  m[3][0] = INFINITY;
  m[3][1] = INFINITY;
  m[3][2] = 2;
  m[3][3] = 0;
  m[3][4] = 1;
 
  m[4][0] = 3;
  m[4][1] = INFINITY;
  m[4][2] = INFINITY;
  m[4][3] = INFINITY;
  m[4][4] = 0;
 
}

void floyds_algorithm( int matrix[][SIZE] ){
  for( int k = 0; k < SIZE; k++ ){
    for( int i = 0; i < SIZE; i++ ){
      for( int j = 0; j < SIZE; j++ ){
         if( matrix[i][j] > ( matrix[i][k] + matrix[k][j] ) ){
           matrix[i][j] =  ( matrix[i][k] + matrix[k][j] );
         }
      }
    }
  }
}

void print( int matrix[][SIZE] ){
  
  for( int i = 0; i < SIZE; i++ ){
    for( int k = 0; k < SIZE; k++ ){
      cout << matrix[i][k] << " ";
    }
    cout << endl;
  }
}

int main(){

  int matrix[SIZE][SIZE]; 

  //INITIALIZE THE MATRIX
  init( matrix );
  cout << "GIVEN MATRIX: " << endl;
  print( matrix );
  cout << endl;

  //CALL ALGORITHM
  floyds_algorithm( matrix );
  cout << "SOLVED MATRIX: " << endl;
  //PRINT MATRIX
  print( matrix );

  return 0;
}
