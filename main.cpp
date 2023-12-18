#include <iostream>

void TowerOfHanoi(int number_of_disk, int source, int auxilliary, int destination) {
  if (number_of_disk > 0) {
    TowerOfHanoi(number_of_disk - 1, source, destination, auxilliary);
    std::cout << "Move disk " << number_of_disk << " from peg " << source << " to peg " << destination << std::endl;
    TowerOfHanoi(number_of_disk - 1, auxilliary, source, destination);
  }
}

int NumberOfDisks() {
  int number_of_disk = 0;
  do {
    std::cout << "Enter the number of disk to solve (Enter a number greater than equal to 1): ";
    std::cin >> number_of_disk;
  } while (number_of_disk < 1);

  return number_of_disk;
}

int main(void) {
  int number_of_disk = NumberOfDisks();
  int source = 1, auxilliary = 2, destination = 3;
  TowerOfHanoi(number_of_disk, source, auxilliary, destination);

  return 0;
}
