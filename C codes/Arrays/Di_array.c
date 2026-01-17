#include <stdio.h>
int main(){


    // Array to input and print the numbers in a two_di array


//    int marks[4][4];
//    for (int i = 0; i < 4; i++){
//     for (int j = 0; j < 4; j++){
//         printf("Enter marks [%d] [%d]: ", i , j);
//         scanf("%d",&marks[i][j]);        
//     }
//    } 
//    for(int i = 0; i < 4; i++){
//     for(int j = 0; j < 4; j++){
//         printf("%d ", marks[i][j]);
//     }
//     printf("\n");
//    }


//Array to print maximum number in the array


//    int array[4][4];
//    int i;
//    int j;
//    for(i = 0; i < 4; i++){
//     for (j = 0; j < 4; j++){
//         printf("Enter the elements of the array [%d][%d]: ",i,j);
//         scanf("%d", &array[i][j]);
//     }
//     }
//     int max = array[0][0];

//    for(i = 0; i < 4; i++){ 
//      for (j = 0; j < 4; j++){
//       if(array[i][j] > max){
//         max = array[i][j];
//     }
//    }  
//   }
//     printf("Largest element in the array = %d",max);


 
//OPERATION WITH TWO DIMENSIONAL ARRAY


//Sum and product of all elements in 2D array



int array[4][4];
int sum = 0;
int product = 1;
int i;
int j;
for(i = 0; i < 4; i++){
    for(j = 0; j < 4; j++){
        printf("Enter the element of array [%d][%d]: ",i,j);
        scanf("%d",&array[i][j]);  
    }
}
for(i = 0; i < 4; i++){
    for(j = 0; j < 4; j++){
  sum += array[i][j];
  product *= array[i][j];
    }
}
printf("Sum = %d\n",sum);
printf("Product = %d",product);
   return 0;
}
