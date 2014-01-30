#!/usr/bin/env perl

use strict;
use warnings;
use feature qw( :5.10 );

my $count = 0;
my $num = 0;

for ($count = 1; $count < 1000; $count++) {
  if ($count % 3 == 0) {
    $num += $count;
    say($count);
  } elsif ($count % 5 == 0) {
    $num += $count;
    say($count);
  }
}
say('answer -> ' . $num);
