#include <stdio.h>
#include <math.h>


//This script will output certain periods required for a certain frequency (from 1kHz)

int main(void){
    double getPeriod;
    double timerCounter;
    int periodInt;
    int r;
    printf("Enter the highest frequency (kHz) for 8bit, 1us count microcontroller: ");
    scanf("%d", &r);

    printf("Period to produce a varied square wave (varied frequency) \n");
    //loop
    for (int n=0; n < r+1; n++){
        if (n == 0){
            getPeriod = 0;
            printf("Frequency: %dkHz Period: %dus \n", n, getPeriod);
        }
        else{
            getPeriod = (1.0/(n * 1000));
            timerCounter = ((getPeriod/2))* 1 * pow(10, 6);
            timerCounter = floor(timerCounter);
            periodInt = (int)timerCounter; // type cast...
            printf("Frequency: %dkHz Period: %dus  with float:%.7f \n", n, periodInt, timerCounter);
        }
        Sleep(1);
    }
}
