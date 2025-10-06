#include <cstdint>
#include <format>
#include <iostream>

using points_t = uint32_t;
using rank_t = uint64_t;

struct score
{
  points_t p{};
  rank_t r{};
};

auto main() -> int     {
  const int default_point = 1000;
  const int default_rank = 1;
  
  score score_test{.p=default_point, .r=default_rank};

  std::cout << std::format("Score: {} points, {} rank\n", score_test.p, score_test.r);
  std::cout << "score is" << score_test.p;
}