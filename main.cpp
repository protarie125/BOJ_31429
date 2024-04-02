#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;
using vd = vector<double>;
using vii = vector<pii>;
using vll = vector<pll>;
using vs = vector<string>;

using vvb = vector<vb>;
using vvi = vector<vi>;
using vvl = vector<vl>;
using vvd = vector<vd>;

ll n;

map<ll, pll> B{{1, {12, 1600}}, {2, {11, 894}}, {3, {11, 1327}},
               {4, {10, 1311}}, {5, {9, 1004}}, {6, {9, 1178}},
               {7, {9, 1357}},  {8, {8, 837}},  {9, {7, 1055}},
               {10, {6, 556}},  {11, {6, 773}}};

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> n;

  const auto& [p, q] = B[n];
  cout << p << ' ' << q;

  return 0;
}
