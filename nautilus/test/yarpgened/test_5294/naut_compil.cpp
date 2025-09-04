/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5294
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5294
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
void test(val<unsigned long long int> var_1, val<int> var_2, val<signed char> var_9, val<unsigned short> var_10, val<int> zero, val<long long int*> var_19, val<long long int*> var_20, val<bool*> var_21) {
    *var_19 = ((/* implicit */val<long long int>) ((val<unsigned int>) ((((/* implicit */val<bool>) var_2)) && (((/* implicit */val<bool>) (val<unsigned short>)36330)))));
    *var_20 = ((/* implicit */val<long long int>) (-(((/* implicit */val<int>) ((val<bool>) max((((/* implicit */val<unsigned long long int>) var_10)), (var_1)))))));
    *var_21 = ((/* implicit */val<bool>) (-(max(((-(((/* implicit */val<int>) var_9)))), (((/* implicit */val<int>) var_9))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5993447419203843061ULL;
int var_2 = 1634265814;
signed char var_9 = (signed char)-33;
unsigned short var_10 = (unsigned short)38630;
int zero = 0;
long long int var_19 = 4731086236951312944LL;
long long int var_20 = 1705011319596194364LL;
bool var_21 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 1LL;
    value_mismatch |= var_20 != -1LL;
    value_mismatch |= var_21 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_9, var_10, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
