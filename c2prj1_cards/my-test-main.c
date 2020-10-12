#include "cards.h"
#include <stdio.h>
#include <stdlib.h>


int main(void) {
  card_t card1;
  card1.value = 10;
  card1.suit = DIAMONDS;
  
  hand_ranking_t rank1;
  rank1 = TWO_PAIR;
  
  //assert_card_valid(card1);
  ranking_to_string(rank1);
  if (value_letter(card1) == 'A') {
    printf("yes\n");
    } else {
    printf("no\n");
  }

  if (suit_letter(card1) == 'h') {
    printf("yes\n");
  } else {
    printf("no\n");
  }
  print_card(card1);

  card_from_letters('0', 'c');

  card_from_num(17);
  
}
