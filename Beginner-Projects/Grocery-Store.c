#include <stdio.h>

int main() {
  int appleQuantity;
  float applePrice = 1.49;
  float appleReview;
  int appleReviewDisplay;
  const char appleLocation = 'F';

  appleQuantity = 23;
  appleReview = 82.5;
  appleReviewDisplay = (int)appleReview;

printf("An apple costs: $%.2f, there are %d in inventory found in section: %c and your customers gave it an average review of %d%%!\n", applePrice, appleQuantity, appleLocation, appleReviewDisplay);

}
