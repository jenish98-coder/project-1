//This is a c program to find the electricty bill in the decreasing order
//In this program the input is given by the user itself

#include<stdio.h>
int main(){
    int unit;

    printf("Enter the units:\n");
    scanf("%d",&unit);

    if(unit!=0){
        if (unit>100){
            printf("Your electricity bill is more than Rs.1000\n");
        }
        else if(unit<100){
            printf("Your electricity bill is less than Rs.1000\n");
        }
        else{
            printf("There is no consumption of electicity\n");
        }

    }

    else{
        printf("Thankyou for visting\n");
    }

    return 0;
}