#include <cstdlib>
#include <iostream>
using namespace std;

using u64 = uint_fast64_t;
constexpr char WS = ' ';
constexpr char NL = '\n';

void wierd_algorithm(u64 &n) {
  cout << n << WS; 
  while (n > 1) {
    if (n % 2 == 0) {
      n = n / 2;
    } else {
      n = 3 * n + 1;
    }
    cout << n << WS;
  }
  cout << NL;
}

int main() {
  cin.tie(0);
  cin.sync_with_stdio(false);
  u64 n{};
  cin >> n;
  wierd_algorithm(n);
  return EXIT_SUCCESS;
}