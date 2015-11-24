#ifndef BREAK_H
#define BREAK_H

typedef enum Contact {
  NONE = 0,
  HORIZONTAL = 1,
  VERTICAL = 2,
  CORNER = 3
} contact_type;

typedef struct Rectangle {
  int x;
  int y;
  int width;
  int height;
} rectangle_type;

contact_type checkCollision(rectangle_type projectile, rectangle_type target);

#endif /* BREAK_H */
