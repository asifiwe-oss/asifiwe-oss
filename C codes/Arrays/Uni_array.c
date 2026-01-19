#include <stdio.h>

int main(){

// One-dimensional arrays

// 1.Reversing array input by the user

// int numbers[5];
// int i;
// for(i = 0; i <= 4; i++){
// printf("Enter numbers %d: ", i + 1);
// scanf("%d",&numbers[i]);
// }
// printf("Numbers in reverse order:\n");
// for(i = 4; i >= 0; i--){
//     printf("%d\n",numbers[i]);
// }

//Sum of elements in array

// int elements[5];
// int x;
// int sum = 0;
// for(x = 0; x <= 4; x++){
//     printf("Enter element of array %d:",x + 1);
//     scanf("%d",&elements[x]);
//     sum += elements[x];
// }
//         printf(" Sum of elements = %d\n",sum);

// Find largest number of the array

int large[5];
int i;
int max;
for( i = 0; i <= 4; i++){
printf("Enter five numbers %d:",i + 1);
scanf("%d",&large[i]); 
}
max = large[0];
for(i = 1; i <= 4;i++){
    if(large[i] > max){
    max = large[i];
 }
}
printf("%d",max);


return 0;
}



