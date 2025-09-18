/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6926
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6926
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>
#ifndef USE_COMPILATION
#define USE_COMPILATION true
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
void test(val<bool> var_0, val<long long int> var_1, val<unsigned long long int> var_4, val<int> zero, val<short*> var_11, val<unsigned long long int*> var_12) {
    *var_11 = ((/* implicit */val<short>) max((((/* implicit */val<long long int>) (+(((/* implicit */val<int>) max(((val<signed char>)64), (((/* implicit */val<signed char>) var_0)))))))), (var_1)));
    *var_12 = ((/* implicit */val<unsigned long long int>) ((val<unsigned char>) var_4));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
long long int var_1 = -4873481114718801156LL;
unsigned long long int var_4 = 16555554406481847221ULL;
int zero = 0;
short var_11 = (short)-24556;
unsigned long long int var_12 = 241828338548522872ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (short)64;
    value_mismatch |= var_12 != 181ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_4, zero, &var_11, &var_12);
  checksum();
}
