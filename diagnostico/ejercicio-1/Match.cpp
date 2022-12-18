#include "Match.h"

Match::Match(){
  match_number = 1;
  round_number = 1;
}

void Match::increment_number(int round_number) { round_number++; }
int Match::get_round_number() { return this->round_number; }
int Match::get_match_number() { return this->match_number; }
