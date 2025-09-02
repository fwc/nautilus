/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8956
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8956
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
void test(val<long long int> var_2, val<int> zero, val<unsigned long long int*> var_15, val<bool*> var_16) {
    *var_15 = ((/* implicit */val<unsigned long long int>) max((*var_15), (((/* implicit */val<unsigned long long int>) -470374323))));
    *var_16 = ((/* implicit */val<bool>) ((((/* implicit */val<int>) (((-(0LL))) != (((val<long long int>) 700742299U))))) << (((var_2) + (2620798831219126845LL)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2620798831219126814LL;
int zero = 0;
unsigned long long int var_15 = 17281326752988670465ULL;
bool var_16 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 18446744073239177293ULL;
    value_mismatch |= var_16 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
