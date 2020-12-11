#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "deck.h"
#include <time.h>

const int n_DECK = 52;

void print_hand(deck_t * hand){
  size_t num = hand->n_cards;
  for (int i=0; i<num; i++) {
    card_t p = **(hand->cards + i);
    print_card(p);
    printf(" ");
  }
}

int deck_contains(deck_t * d, card_t c) {
  size_t num = d->n_cards;
  for (int i=0; i<num; i++) {
    card_t p = **(d->cards + i);
    if ((p.value==c.value) && (p.suit==c.suit)) {
	return 1;
    }
  }
  return 0;
}

void swap (card_t *a, card_t *b) {
  card_t temp = *a;
  *a = *b;
  *b = temp;
}

void shuffle(deck_t * d){
  size_t n = d->n_cards;
  card_t ** cds = d->cards;
  //srand(time(NULL));
  for (int i = 0; i<n; i++){
    int j = rand() % n;
    swap(cds[i], cds[j]);
  }
}

void assert_full_deck(deck_t * d) {
  assert(d->n_cards == n_DECK);
  for (int i=0; i<n_DECK; i++) {
    assert(deck_contains(d, card_from_num(i)));
  }
}
