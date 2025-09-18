/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9694
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9694
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>
#ifndef USE_COMPILATION
#define USE_COMPILATION false
#endif

using namespace nautilus;

#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test(val<long long int> var_2, val<long long int> var_9, val<int> zero, val<unsigned int*> var_12, val<unsigned short*> var_13, val<unsigned long long int*> var_14) {
    *var_12 ^= ((/* implicit */val<unsigned int>) var_2);
    *var_13 = ((/* implicit */val<unsigned short>) var_2);
    *var_14 = ((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) ((val<long long int>) var_9)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 4041547703345092642LL;
long long int var_9 = -1156515908402622435LL;
int zero = 0;
unsigned int var_12 = 2836989147U;
unsigned short var_13 = (unsigned short)38828;
unsigned long long int var_14 = 6564748272947082930ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 2310479097U;
    value_mismatch |= var_13 != (unsigned short)6178;
    value_mismatch |= var_14 != 0ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_9, zero, &var_12, &var_13, &var_14);
  checksum();
}
