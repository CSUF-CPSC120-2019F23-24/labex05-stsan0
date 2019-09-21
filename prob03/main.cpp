// Random Rectangle
#include <ctime>
#include <iostream>
#include <cstdlib>
#include <string>

int main()
{
  // Attain random seed value from time(0)
  unsigned seed = time(0);
  srand(seed);
  // establish base; make width modulus'd by length

  const int length = 40+1;
  int width = rand() % length;

  // Assign the result of width to the number of #'s presented
  std::string hashtag;
  hashtag.assign(width,'#');

  // Print #'s
  std::cout << hashtag << '\n';
  std::cout << hashtag << '\n';
  std::cout << hashtag << '\n';


  return 0;
}
