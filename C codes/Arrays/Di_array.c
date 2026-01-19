#include <stdio.h>
int main(){


    // Array to input and print the numbers in a two_di array


// int numbers[4][4];
// for(int i = 0; i <= 3; i++){
//     for(int j = 0; j <= 3; j++){
//        printf("Enter numbers in two dimensional array [%d][%d]: ",i,j);
//        scanf("%d",&numbers[i][j]);
//     }
//    }
//    printf("Matrix: \n");
// for(int i = 0; i <= 3; i++){
//     for(int j = 0; j <= 3; j++){
//         printf("%d ", numbers[i][j]);
//     }
// printf("\n");
// }

//Array to print maximum number in the array

// int array[3][3];
//  for(int i = 0; i <= 2; i++){
//     for(int j = 0; j <= 2; j++){
//        printf("Enter numbers in two dimensional array [%d][%d]: ",i,j);
//        scanf("%d",&array[i][j]);
//     }
//    }

//    int max = array[0][0];

//    for(int i = 0; i <= 2; i++){
//     for(int j = 0; j <= 2; j++){
//       if(array[i][j] > max){
//         max = array[i][j];
//       }
//       }
//     }
//     printf("%d\n",max);
 
//OPERATION WITH TWO DIMENSIONAL ARRAY


//Sum and product of all elements in 2D array


int array[3][3];
for(int i = 0; i < 3; i++){
    for(int k = 0; k < 3; k++){
        printf("Enter array members [%d][%d]",i,k);
        scanf("%d",&array[i][k]);
    }
}

// Printing sum of all elements in the matrix



// int sum = 0;
// int product = 1;
// for(int i = 0; i < 3; i++){
//     for(int k = 0; k < 3; k++){
//         sum += array[i][k];
//         product *= array[i][k];
//     }
// }
// printf("Sum = %d\n",sum);
// printf("Product = %d\n",product);


//Printing product and sum row-wise


// int sum = 0;
// int product = 1;
// for(int i = 0;i < 3; i++){
//     sum += array[i][0];
//     product *= array[i][0];
// }
// printf("%d\n",sum);
// printf("%d",product);


//Printing sum for each row seperately
int sum = 0;
int product = 1;

for(int i = 0; i < 3; i++){
    for(int k = 0; k < 3; k++ ){
        sum += array[i][j];
        product += array[i][j];
         }
}
   return 0;
}
