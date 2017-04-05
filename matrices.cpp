// Lizsandra Zuniga
// 03/31/17 


#define ROWS 4
#define COLUMNS 4
#define PI 3.14159265
#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
  
// Filling the array with input values
void fillArray(double rows, double columns,double arr[ROWS][COLUMNS]) {
  // Taking values for Matrix 1 and 2     
  for ( int a = 0; a < rows; a++){    
    for ( int b = 0; b < columns;  b++){
      cin >> arr[a][b]; 
    }
  }  
}

// Passing and printing arrays
void printArray(double arr1[ROWS][COLUMNS], double arr2[ROWS][COLUMNS]) {
  //Printing Matrix 1
  cout << "\n Matrix 1 " <<  endl ;       
  for ( int a = 0; a < ROWS; a++){    
    for ( int b = 0; b < COLUMNS;  b++){
      printf("%10.2f ", arr1[a][b]);
    }
    cout<< endl; 
  }
    
  //Printing Matrix 2
  cout << "\n Matrix 2 " <<  endl ; 
  for ( int a = 0; a < ROWS; a++){    
    for ( int b = 0; b < COLUMNS;  b++){
      printf("%10.2f ", arr2[a][b]);
    }
    cout<< endl; 
  }
}

//Multiplying the matrices and checking for inverses
void multMatrix(double arr1[ROWS][COLUMNS], double arr2[ROWS][COLUMNS]) {
 // Multiplying the matrices 
 double mult[4][4];
  cout << "\n Multiplied Matrices " <<  endl ; 
  for ( int a = 0; a < ROWS; a++){    
    for ( int b = 0; b < COLUMNS;  b++){       
      mult[a][b] = 0;
      for ( int c = 0; c < 4; c++) {
        mult[a][b] += arr1[a][c] * arr2[c][b];          
      }
     printf("%10.2f ", mult[a][b]);
    }         
    cout<< endl; 
  } 
  // Creating identity matrix for comparison
  double identity[4][4] = { 
    {1,0,0,0},
    {0,1,0,0},
    {0,0,1,0},
    {0,0,0,1},
  };
  // Checking if the matrices are inverses
  int yes = 0;
  int no = 1; 
  for ( int a = 0; a < ROWS; a++){          
    for ( int b = 0; b < COLUMNS;  b++){
       if(mult[a][b] == identity[a][b]){
        yes ++;
       }
       else {
         no ++;
       }       
    }  
  }
  //Prints True or False to check inverse matrixes
  if( yes == 16 ){
    cout << "\n TRUE" << endl; 
  }
  else{
    cout << "\n FALSE" << endl; 
  } 
}

// The rotate around the x-axis option
void rotateXMatrix(double rotate1[ROWS][COLUMNS], double rotate2[ROWS][COLUMNS]) {
  double degree;
  double cosine;
  double sine;
  double negativeSine;
  double mult[4][4];
    
  // Computing degrees to radians
  cout << " \n Please enter a degree rotation: " <<  endl ;
  cin >> degree;
  cosine = cos (degree * PI / 180.0);
  sine = sin (degree * PI / 180.0);
  negativeSine = -1 * sin (degree * PI / 180.0);
    
  // Matrix 
  double arr1[4][4] = { 
    {1,0,0,0},
    {0,cosine,negativeSine,0},
    {0,sine,cosine,0},
    {0,0,0,1},
  };
  // Inverse Matrix   
  double arr2[4][4] = { 
    {1,0,0,0},
    {0,cosine,sine,0},
    {0,negativeSine,cosine,0},
    {0,0,0,1},
  };
   
  // Printing Matrix
  cout << "\n Matrix " <<  endl ;
  for ( int a = 0; a < ROWS; a++){    
    for ( int b = 0; b < COLUMNS;  b++){
      printf("%10.2f ", arr1[a][b]);
    }
    cout<< endl; 
  }    
  //Printing Inverse 
  cout << "\n Inverse Matrix " <<  endl ; 
  for ( int a = 0; a < ROWS; a++){    
    for ( int b = 0; b < COLUMNS;  b++){
      printf("%10.2f ", arr2[a][b]);
    }
    cout<< endl; 
  }
  //Multiplication for identity 
  cout << "\n Identity Matrix " <<  endl ; 
  for ( int a = 0; a < ROWS; a++){    
    for ( int b = 0; b < COLUMNS;  b++){       
      mult[a][b] = 0;
      for ( int c = 0; c < 4; c++) {
        mult[a][b] += arr1[a][c] * arr2[c][b];          
      }
      printf("%10.2f ", mult[a][b]);
    }         
    cout<< endl; 
  }
}

// The rotate around the y-axis option
void rotateYMatrix(double rotate1[ROWS][COLUMNS], double rotate2[ROWS][COLUMNS]) {
  double degree;
  double cosine;
  double sine;
  double negativeSine;
  double mult[4][4];
    
  // Computing degrees to radians
  cout << " \n Please enter a degree rotation: " <<  endl ;
  cin >> degree;
  cosine = cos (degree * PI / 180.0);
  sine = sin (degree * PI / 180.0);
  negativeSine = -1 * sin (degree * PI / 180.0);
    
  // Matrix 
  double arr1[4][4] = { 
    {cosine,0,sine,0},
    {0,1,0,0},
    {negativeSine,0,cosine,0},
    {0,0,0,1},
  };
  // Inverse Matrix   
  double arr2[4][4] = { 
    {cosine,0,negativeSine,0},
    {0,1,0,0},
    {sine,0,cosine,0},
    {0,0,0,1},
  };
   
  // Printing Matrix
  cout << "\n Matrix " <<  endl ;
  for ( int a = 0; a < ROWS; a++){    
    for ( int b = 0; b < COLUMNS;  b++){
      printf("%10.2f ", arr1[a][b]);
    }
    cout<< endl; 
  }    
  //Printing Inverse 
  cout << "\n Inverse Matrix " <<  endl ; 
  for ( int a = 0; a < ROWS; a++){    
    for ( int b = 0; b < COLUMNS;  b++){
      printf("%10.2f ", arr2[a][b]);
    }
    cout<< endl; 
  }
  //Multiplication for identity 
  cout << "\n Identity Matrix " <<  endl ; 
  for ( int a = 0; a < ROWS; a++){    
    for ( int b = 0; b < COLUMNS;  b++){       
      mult[a][b] = 0;
      for ( int c = 0; c < 4; c++) {
        mult[a][b] += arr1[a][c] * arr2[c][b];          
      }
      printf("%10.2f ", mult[a][b]);
    }         
    cout<< endl; 
  }
}

// The rotate around the z-axis option
void rotateZMatrix(double rotate1[ROWS][COLUMNS], double rotate2[ROWS][COLUMNS]) {
  double degree;
  double cosine;
  double sine;
  double negativeSine;
  double mult[4][4];
    
  // Computing degrees to radians
  cout << " \n Please enter a degree rotation: " <<  endl ;
  cin >> degree;
  cosine = cos (degree * PI / 180.0);
  sine = sin (degree * PI / 180.0);
  negativeSine = -1 * sin (degree * PI / 180.0);
    
  // Matrix 
  double arr1[4][4] = { 
    {cosine,negativeSine,0,0},
    {sine,cosine,0,0},
    {0,0,1,0},
    {0,0,0,1},
  };
  // Inverse Matrix   
  double arr2[4][4] = { 
    {cosine,sine,0,0},
    {negativeSine,cosine,0,0},
    {0,0,1,0},
    {0,0,0,1},
  };
   
  // Printing Matrix
  cout << "\n Matrix " <<  endl ;
  for ( int a = 0; a < ROWS; a++){    
    for ( int b = 0; b < COLUMNS;  b++){
      printf("%10.2f ", arr1[a][b]);
    }
    cout<< endl; 
  }    
  //Printing Inverse 
  cout << "\n Inverse Matrix " <<  endl ; 
  for ( int a = 0; a < ROWS; a++){    
    for ( int b = 0; b < COLUMNS;  b++){
      printf("%10.2f ", arr2[a][b]);
    }
    cout<< endl; 
  }
  //Multiplication for identity 
  cout << "\n Identity Matrix " <<  endl ; 
  for ( int a = 0; a < ROWS; a++){    
    for ( int b = 0; b < COLUMNS;  b++){       
      mult[a][b] = 0;
      for ( int c = 0; c < 4; c++) {
        mult[a][b] += arr1[a][c] * arr2[c][b];          
      }
      printf("%10.2f ", mult[a][b]);
    }         
    cout<< endl; 
  }
}


// The Translation option
void translationMatrix(double rotate1[ROWS][COLUMNS], double rotate2[ROWS][COLUMNS]) {
  double x;
  double y;
  double z;
  double negativeX;
  double negativeY;
  double negativeZ;
  double mult[4][4];
    
  // Entering x, y, and z option
  cout << " \n Please enter an X translation: " <<  endl ;
  cin >> x;
  cout << " \n Please enter a Y translation: " <<  endl ;
  cin >> y;
  cout << " \n Please enter a Z translation: " <<  endl ;
  cin >> z;
    
  //Computing inverse x, y , and z
  negativeX = -1 * x;
  negativeY = -1 * y;
  negativeZ = -1 * z;
    
  // Matrix 
  double arr1[4][4] = { 
    {1,0,0,x},
    {0,1,0,y},
    {0,0,1,z},
    {0,0,0,1},
  };
  // Inverse Matrix   
  double arr2[4][4] = { 
    {1,0,0,negativeX},
    {0,1,0,negativeY},
    {0,0,1,negativeZ},
    {0,0,0,1},
  };
   
  // Printing Matrix
  cout << "\n Matrix " <<  endl ;
  for ( int a = 0; a < ROWS; a++){    
    for ( int b = 0; b < COLUMNS;  b++){
      printf("%10.2f ", arr1[a][b]);
    }
    cout<< endl; 
  }    
  //Printing Inverse 
  cout << "\n Inverse Matrix " <<  endl ; 
  for ( int a = 0; a < ROWS; a++){    
    for ( int b = 0; b < COLUMNS;  b++){
      printf("%10.2f ", arr2[a][b]);
    }
    cout<< endl; 
  }
  //Multiplication for identity 
  cout << "\n Identity Matrix " <<  endl ; 
  for ( int a = 0; a < ROWS; a++){    
    for ( int b = 0; b < COLUMNS;  b++){       
      mult[a][b] = 0;
      for ( int c = 0; c < 4; c++) {
        mult[a][b] += arr1[a][c] * arr2[c][b];          
      }
      printf("%10.2f ", mult[a][b]);
    }         
    cout<< endl; 
  }
}
// The scaling option
void scalingMatrix(double rotate1[ROWS][COLUMNS], double rotate2[ROWS][COLUMNS]) {
  double x;
  double y;
  double z;
  double inverseX;
  double inverseY;
  double inverseZ;
  double mult[4][4];
    
  // Entering x, y, and z option
  cout << " \n Please enter X scaling factor: " <<  endl ;
  cin >> x;
  cout << " \n Please enter Y scaling factor: " <<  endl ;
  cin >> y;
  cout << " \n Please enter Z scaling factor: " <<  endl ;
  cin >> z;
    
  //Computing inverse x, y , and z
  inverseX = 1 / x;
  inverseY = 1 / y;
  inverseZ = 1 / z;
    
  // Matrix 
  double arr1[4][4] = { 
    {x,0,0,0},
    {0,y,0,0},
    {0,0,z,0},
    {0,0,0,1},
  };
  // Inverse Matrix   
  double arr2[4][4] = { 
    {inverseX,0,0,0},
    {0,inverseY,0,0},
    {0,0,inverseZ,0},
    {0,0,0,1},
  };
   
  // Printing Matrix
  cout << "\n Matrix " <<  endl ;
  for ( int a = 0; a < ROWS; a++){    
    for ( int b = 0; b < COLUMNS;  b++){
      printf("%10.2f ", arr1[a][b]);
    }
    cout<< endl; 
  }    
  //Printing Inverse 
  cout << "\n Inverse Matrix " <<  endl ; 
  for ( int a = 0; a < ROWS; a++){    
    for ( int b = 0; b < COLUMNS;  b++){
      printf("%10.2f ", arr2[a][b]);
    }
    cout<< endl; 
  }
  //Multiplication for identity 
  cout << "\n Identity Matrix " <<  endl ; 
  for ( int a = 0; a < ROWS; a++){    
    for ( int b = 0; b < COLUMNS;  b++){       
      mult[a][b] = 0;
      for ( int c = 0; c < 4; c++) {
        mult[a][b] += arr1[a][c] * arr2[c][b];          
      }
      printf("%10.2f ", mult[a][b]);
    }         
    cout<< endl; 
  }
}

int main(int argc, char** argv) { 
  int option = 0; 
  int moreOptions = 0;
  char axis;
  double matrix1[ROWS][COLUMNS];
  double matrix2[ROWS][COLUMNS];  
  
  cout << " \n Would you like to check if two 4X4 matrices are inverse: Enter 1" <<  endl ;
  cout << " Would you like to compute a 4x4 matrix, its inverse, and rotate, translate, or scale: Enter 2" << endl;
  cin >> option;
    if (option == 1) {
      cout << " \n Please enter 16 numbers for the first matrix : " << endl; 
      fillArray( ROWS, COLUMNS, matrix1);
      cout << " \n Please enter 16 numbers for the second matrix : " << endl;   
      fillArray( ROWS, COLUMNS, matrix2); 
      printArray(matrix1, matrix2);
      multMatrix(matrix1, matrix2);
    }
    else if(option == 2){
      cout << " \n Would you like to rotate a matrix: Enter 1" << endl;
      cout << " Would you like to translate a matrix: Enter 2" << endl;
      cout << " Would you like to scale a matrix: Enter 3" << endl;
      cin>>moreOptions; 
        if (moreOptions == 1) {
          printf( " Pick a Cartesian axis to rotate: Enter x, y, or z\n ");
          cin>>axis;
            if (axis == 'x' ||axis == 'X'){
            rotateXMatrix(matrix1, matrix2);
            }
            else if (axis == 'y' || axis == 'Y'){
            rotateYMatrix(matrix1, matrix2);
            }
            else if (axis == 'z' || axis == 'Z'){
            rotateZMatrix(matrix1, matrix2);
            }         
        }
        else if (moreOptions == 2) {
          translationMatrix(matrix1, matrix2); 
        }
        else if (moreOptions == 3) {
          scalingMatrix(matrix1, matrix2); 
        } 
  }
  
  return 0; 
 
}
