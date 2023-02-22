#include <fstream>
#include <stdexcept>

#include "SparseMatrix.h"

SparseMatrix::SparseMatrix(const std::string input_file) {
  /* TODO: Your code here. */
  std::ifstream infile;
  std::string
  infile.open(input_file,std::ios::in)
  ans.open(name, std::ios::in);
  if (!ans.is_open()) {
      throw std::runtime_error("Failed to open file: " + name);
  }

}

void SparseMatrix::to_file(const std::string output_file) {
  /* TODO: Your code here. */
}

SparseMatrix SparseMatrix::operator*(const SparseMatrix &right) {
  /* TODO: Your code here. */
  return SparseMatrix();
}