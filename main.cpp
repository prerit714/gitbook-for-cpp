#include <cstdlib>
#include <iostream>
#include <vector>

/**
 * NOTE: Below is how you define a templatized version of a function
 * */

template <typename T> void out_vector(const std::vector<T> &v) {
  for (const T &x : v) {
    std::cout << x << ' ';
  }
  std::cout << std::endl;
}

int main() {

  std::vector<int> v{1, 2, 3, 4, 5};
  out_vector<int>(v);

  return EXIT_SUCCESS;
}