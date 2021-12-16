#include "Matrica.hpp"

int** kreirajMatricu(const int& rows, const int& colums) {
  int** matrix = 0;
  matrix = new int*[rows];
  srand((unsigned)time(NULL));
  for (auto i = 0; i < rows; ++i) {
    matrix[i] = new int[colums];
    for (auto j = 0; j < colums; ++j) {
      matrix[i][j] = rand() % 100;
    }
  }
  return matrix;
}

void ispisiMatricu(int** myMatrix, const int& foo, const int& bar) {
  for (auto r = 0; r < foo; r++) {
    for (auto c = 0; c < bar; c++) {
      std::cout << myMatrix[r][c] << '\t';
    }
    std::cout << '\n';
  }
}

void pronadjiGlavnuDijagonalu(int** myMatrix, const int& foo, const int& bar) {
  for (auto i = 0; i < foo; i++) {
    for (auto j = 0; j < bar; j++) {
      if (i == j) std::cout << myMatrix[i][j] << " ";
    }
  }
  std::cout << '\n';
}

void pronadjiSporednuDijagonlu(int** myMatrix, const int& foo, const int& bar) {
  for (auto i = 0; i < foo; i++) {
    for (auto j = 0; j < bar; j++) {
      if ((i + j) == (bar - 1)) std::cout << myMatrix[i][j] << " ";
    }
  }
  std::cout << '\n';
}

void saberiMatrice(int** myMatrix1, int** myMatrix2, const int& foo1,
                   const int& bar1, const int& foo2, const int& bar2) {
  int sum[foo1][bar1];
  if (foo1 == foo2 && bar1 == bar2) {
    for (auto i = 0; i < foo1; ++i)
      for (auto j = 0; j < bar1; ++j)
        sum[i][j] = myMatrix1[i][j] + myMatrix2[i][j];

    for (auto i = 0; i < foo1; i++) {
      for (auto j = 0; j < bar1; j++) {
        std::cout << sum[i][j] << '\t';
      }
      std::cout << '\n';
    }
  } else
    throw std::logic_error("Error");
}

void pomnoziMatricu(int** myMatrix1, int** myMatrix2, const int& foo1,
                    const int& bar1, const int& foo2, const int& bar2) {
  int multiply[foo1][bar1];
  if (foo1 == foo2 && bar1 == bar2) {
    for (auto i = 0; i < foo1; ++i)
      for (auto j = 0; j < bar1; ++j)
        multiply[i][j] = myMatrix1[i][j] + myMatrix2[i][j];

    for (auto i = 0; i < foo1; i++) {
      for (auto j = 0; j < bar1; j++) {
        std::cout << multiply[i][j] << '\t';
      }
      std::cout << '\n';
    }
  } else
    throw std::logic_error("Error");
}

size_t terminal_colums() {
  winsize sz;
  ioctl(0, TIOCGWINSZ, &sz);
  return sz.ws_col;
}

void spacer() {
  int foo = 0;
  std::string separator = " -";
  int terminalSize = terminal_colums() / 2 - 1;
  while (foo <= terminalSize) {
    std::cout << separator;
    ++foo;
  }
}

