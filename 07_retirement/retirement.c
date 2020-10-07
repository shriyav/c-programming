#include <stdlib.h>
#include <stdio.h>

struct _retire_info {
  int months;
  double contribution;
  double rate_of_return;
};

typedef struct _retire_info retire_info;

double total (double balance, retire_info x){
  double interest=balance*x.rate_of_return;
  balance += x.contribution + interest;
  return balance;
}

void printing(int months, double balance) {
  printf("Age %3d month %2d you have $%.2lf\n", months/12, months%12, balance);
}

void retirement (int startAge, double initial, retire_info working, retire_info retired) {
  double balance = initial;
  int months_tot = startAge-1;

  
  for (int i=0; i<working.months; i++) {
    months_tot++;
    printing(months_tot, balance);
    balance = total(balance, working);
  }

  for (int j=0; j<retired.months; j++) {
    months_tot++;
    printing(months_tot, balance);
    balance = total(balance, retired);
  }
}

int main (){
  retire_info working;
  retire_info retired;

  working.months = 489;
  working.contribution = 1000;
  working.rate_of_return = (0.045/12);

  retired.months = 384;
  retired.contribution = -4000;
  retired.rate_of_return = (0.01/12);

  double initial = 21345;

  int startAge = 327;
  retirement(startAge, initial, working, retired);
  return 0;
}
