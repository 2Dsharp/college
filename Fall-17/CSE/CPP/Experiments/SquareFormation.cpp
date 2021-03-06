#include <iostream>

/**
 * Square formation
 * Takes side = 6 asterisks (*)
 * Creates a square
 *
 * Author- Dedipyaman Das
 * Aliases- 2D, 2DSharp, 2D-CB
 * Email- 2dcodeblocks@gmail.com
 */
int main() {

  int horizontal= 1;
  int vertical =1;

  int side =6;

  while (vertical<=side) {

    while (horizontal<=side) {
      std::cout << "*";
      horizontal++;
    }
    horizontal = 1;
    ++vertical;
    std::cout << "\n";
  }
  return 0;
}
