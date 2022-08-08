#include<stdio.h>
int main(){

    int i, beg, last, sum=0, countNum=0;
    float average;

    printf("Enter the first number of range : ");
    scanf("%d",&beg);

    printf("Enter the last number of range : ");
    scanf("%d",&last);

 
    //Traverse from start to end in a range
 
    for(i=beg;i<=last;i++){
  
        //Calculate the sum between the range
  
        sum+=i;
  
        //Count the number between range
  
        countNum++;
    }
 
    //Find the average
 
    average = (float)sum/countNum;

    printf("The average is : %.3f",average);

    return 0;
}
