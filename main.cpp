#include "Matrica.hpp"
int main() {
  char o;
  int r1, c1, r2, c2;
  std::cout << "Enter the dimension for Matrix A" << std::endl;
  std::cout << "Number of rows: ";
  std::cin >> r1;
  std::cout << "Number of colums: ";
  std::cin >> c1;
  int **mojMatricaA = kreirajMatricu(r1, c1);
  std::cout << "Matrix A" << std::endl;
  spacer();
  ispisiMatricu(mojMatricaA, r1, c1);
  spacer();

  std::cout << "Enter the dimension for Matrix B" << std::endl;
  std::cout << "Number of rows: ";
  std::cin >> r2;
  std::cout << "Number of colums: ";
  std::cin >> c2;
  int **mojMatricaB = kreirajMatricu(r2, c2);
  std::cout << "Matrix B" << std::endl;
  spacer();
  ispisiMatricu(mojMatricaB, r2, c2);
  spacer();
  std::cout << "Enter operation: ";
  std::cin >> o;
  spacer();

  switch (o) {
    case '+':
      std::cout << "A + B" << std::endl;
      spacer();
      saberiMatrice(mojMatricaA, mojMatricaB, r1, c1, r2, c2);
      std::cout << "Main diagonal (A)" << std::endl;
      pronadjiGlavnuDijagonalu(mojMatricaA, r1, c1);
      std::cout << "Main diagonal (B)" << std::endl;
      pronadjiGlavnuDijagonalu(mojMatricaB, r2, c2);
      std::cout << "Secondary diagonal (A)" << std::endl;
      pronadjiSporednuDijagonlu(mojMatricaA, r1, c1);
      std::cout << "Secondary diagonal (B)" << std::endl;
      pronadjiSporednuDijagonlu(mojMatricaB, r2, c2);
      break;
    case '*':
      std::cout << "A * B" << std::endl;
      spacer();
      pomnoziMatricu(mojMatricaA, mojMatricaB, r1, c1, r2, c2);
      break;
    default:
      std::cout << "Only multiplication and sum is supported" << std::endl;
  }
  std::cout<<"Hev a najs dej!"<<std::endl;
  return 0;
}
