README

I. Included
-----------
this README
matrices.cpp

II. Objective
----------
This was assigned as a homework assignment for my Principles of
Interactive Computer Graphics. This assignment was made to check 
my understanding of transformation matrices for computer graphics.

III. How to Run
---------------
How to Run "matrices.cpp":
To complile: g++ matrices.cpp -o matrices
To run:      ./matrices

IIII. Outputs
-------------
Would you like to check if two 4X4 matrices are inverse: Enter 1
  - This option is followed by,
    Please enter 16 numbers for the first matrix :
      - you enter 16 numbers that are separated by spaces, for example: 
      1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 
    Please enter 16 numbers for the second matrix : 
      - you enter 16 numbers that are separated by spaces, for example
      1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4
      - The output is the two matrices entered
      - Followed by the product of the two 4X4 matrices entered 
      - It will also state TRUE or FALSE if the matrices are inverse of one another
      Matrix 1 
        1.00       2.00       3.00       4.00 
	5.00       6.00       7.00       8.00 
        9.00       0.00       1.00       2.00 
        3.00       4.00       5.00       6.00 

      Matrix 2 
	1.00       2.00       3.00       4.00 
	1.00       2.00       3.00       4.00 
	1.00       2.00       3.00       4.00 
	1.00       2.00       3.00       4.00 

      Multiplied Matrices 
       10.00      20.00      30.00      40.00 
       26.00      52.00      78.00     104.00 
       12.00      24.00      36.00      48.00 
       18.00      36.00      54.00      72.00 

      FALSE
      - If the matrices are inverses of one another then the product would be an identity:
	1.00       0.00       0.00       0.00 
	0.00       1.00       0.00       0.00 
	0.00       0.00       1.00       0.00 
	0.00       0.00       0.00       1.00 

Would you like to compute a 4x4 matrix, its inverse, and rotate, translate, or scale: Enter 2
  - This is followed by three options,
  Would you like to rotate a matrix: Enter 1
    -This option is followed by
    Pick a Cartesian axis to rotate: Enter x, y, or z
      - you choose one of the three options and capalization does not matter.
      - A rotation around x-axis is calculated as:  
      1       0       0       0 
      0       cos     -sin    0 
      0       sin     cos     0 
      0       0       0       1 
      - A rotation around y-axis is calculated as:  
      cos     0       sin     0 
      0       1       0       0 
      -sin    0       cos     0 
      0       0       0       1 
      - A rotation around z-axis is calculated as:  
      cos     -sin    0       0 
      sin     cos     0       0 
      0       0       1       0 
      0       0       0       1 
      - The following question is asked
    Please enter a degree rotation:
      - you can enter a degree such as, 45
      - It converts the degrees to radians
      - The output for option x, and 45 degrees is
      Matrix 
        1.00       0.00       0.00       0.00 
        0.00       0.71      -0.71       0.00 
        0.00       0.71       0.71       0.00 
        0.00       0.00       0.00       1.00 

      Inverse Matrix 
        1.00       0.00       0.00       0.00 
        0.00       0.71       0.71       0.00 
        0.00      -0.71       0.71       0.00 
        0.00       0.00       0.00       1.00 

      Identity Matrix 
        1.00       0.00       0.00       0.00 
        0.00       1.00       0.00       0.00 
        0.00       0.00       1.00       0.00 
        0.00       0.00       0.00       1.00
      -It puts your options in a 4X4 matrix
      -It gives you the inverse of the 4X4
      -It proves it is the inverse by multiplying the matrix by its inverse
       and producing the identity.   
  Would you like to translate a matrix: Enter 2
    - A translation is calculated as:  
    1       0       0       x 
    0       1       0       y 
    0       0       1       Z 
    0       0       0       1 
    - This option is followed by,
    Please enter an X translation:
      - This option is followed by,
    Please enter a Y translation:
      - This option is followed by,
    Please enter a Z translation:
      - For the three options above you can enter any number, like, 5
      Matrix 
        1.00       0.00       0.00       5.00 
        0.00       1.00       0.00       6.00 
        0.00       0.00       1.00       7.00 
        0.00       0.00       0.00       1.00 

      Inverse Matrix 
        1.00       0.00       0.00      -5.00 
        0.00       1.00       0.00      -6.00 
        0.00       0.00       1.00      -7.00 
        0.00       0.00       0.00       1.00 

      Identity Matrix 
        1.00       0.00       0.00       0.00 
        0.00       1.00       0.00       0.00 
        0.00       0.00       1.00       0.00 
        0.00       0.00       0.00       1.00 
      -It puts your options in a 4X4 matrix
      -It gives you the inverse of the 4X4
      -It proves it is the inverse by multiplying the matrix by its inverse
       and producing the identity.   
  Would you like to scale a matrix: Enter 3
    - A scaling is calculated as:
    x       0       0       0 
    0       y       0       0 
    0       0       z       0 
    0       0       0       1  
    Please enter an X translation:
      - This option is followed by,
    Please enter a Y translation:
      - This option is followed by,
    Please enter a Z translation:  
      - For the three options above you can enter any number, like, 47
      Matrix 
        47.00       0.00       0.00       0.00 
         0.00      32.00       0.00       0.00 
         0.00       0.00       2.00       0.00 
         0.00       0.00       0.00       1.00 

      Inverse Matrix 
        0.02       0.00       0.00       0.00 
        0.00       0.03       0.00       0.00 
        0.00       0.00       0.50       0.00 
        0.00       0.00       0.00       1.00 

      Identity Matrix 
        1.00       0.00       0.00       0.00 
        0.00       1.00       0.00       0.00 
        0.00       0.00       1.00       0.00 
        0.00       0.00       0.00       1.00 
      -It puts your options in a 4X4 matrix
      -It gives you the inverse of the 4X4
      -It proves it is the inverse by multiplying the matrix by its inverse
       and producing the identity.   
