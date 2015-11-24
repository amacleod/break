#include <check.h>
#include "break.h"

START_TEST(test_non_hit) {
  Rectangle ball = {75, 81, 10, 10};
  Rectangle brick = {80, 100, 40, 20};
  Contact point = checkCollision(ball, brick);
  ck_assert_int_eq((int)point, (int)NONE);
}
END_TEST

int main(void) {
  return 0;
}
