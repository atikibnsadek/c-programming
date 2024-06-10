#include<stdio.h>

void main(){
    int b,n,m,sum,product,max,min;
    float avg;
    printf("Enter three numbers:");
    scanf("%d %d %d",&b,&n,&m);
    sum=b+n+m;
    product=b*n*m;
    avg=(float)(b+n+m)/3;
    max=b;
    ///Largest
    if(n>max){
        max=n;
    }
    if(m>max){
        max=m;
    }

    /*
    // Find the largest (maximum) number
    if (num1 >= num2 && num1 >= num3) {
        largest = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        largest = num2;
    } else {
        largest = num3;
    }*/
    ///smallest
    min=b;
    if(n<min){
        min=n;
    }
    if(m<min){
        min=m;
    }
    //int smallest = (num1 < num2 && num1 < num3) ? num1 : (num2 < num3 ? num2 : num3);
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", avg);
    printf("Product: %d\n", product);
    printf("Smallest: %d\n", min);
    printf("Largest: %d\n", max);
}

///using array and loop
/*#include <stdio.h>

int main() {
    int nums[3];
    int sum = 0, product = 1;
    float average;
    int smallest, largest;

    // Input three integers
    for (int i = 0; i < 3; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &nums[i]);
        sum += nums[i];
        product *= nums[i];
    }

    // Calculate average
    average = (float)sum / 3;

    // Find the smallest (minimum) number
    smallest = nums[0];
    for (int i = 1; i < 3; i++) {
        if (nums[i] < smallest) {
            smallest = nums[i];
        }
    }

    // Find the largest (maximum) number
    largest = nums[0];
    for (int i = 1; i < 3; i++) {
        if (nums[i] > largest) {
            largest = nums[i];
        }
    }

    // Print the results
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);
    printf("Product: %d\n", product);
    printf("Smallest: %d\n", smallest);
    printf("Largest: %d\n", largest);

    return 0;
}
*/

