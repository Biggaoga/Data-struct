#pragma once

#include <string>
#include <vector>

class SparseMatrix {
private:
  int _row;
  int _col;

  /* TODO: Add any necessary data structure here. */
  struct  num{
      int Row;
      int Col;
      long value;
  };
public:
  SparseMatrix() = default;

  SparseMatrix(const std::string input_file);

  void to_file(const std::string output_file);

  SparseMatrix operator*(const SparseMatrix &right);
};