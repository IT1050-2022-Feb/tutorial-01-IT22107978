/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main(void) {
  int dist,amount;
  printf("Distance -> ");
  scanf("%d",&dist);
  if(dist<=30){
    amount=dist*50;
    printf("Amount = %d x 50 = %d",dist,amount);
  }
  else{
    amount=30*50 + (dist-30.0)*40;
    printf("Amount = 30 x 50 + (%d-30) x 40 = %d",dist,amount);
  }
  
  return 0;
}
