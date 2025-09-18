/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 623
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=623
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
void test(val<short> var_1, val<unsigned short> var_2, val<int> var_5, val<unsigned short> var_8, val<bool> var_9, val<int> zero, val<unsigned long long int*> var_13, val<unsigned short*> var_14) {
    *var_13 = ((((((/* implicit */val<bool>) ((val<signed char>) var_9))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_1))) : (max((((/* implicit */val<unsigned long long int>) var_5)), (16ULL))))) * (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) max((var_8), (var_8))))));
    *var_14 |= var_2;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-32104;
unsigned short var_2 = (unsigned short)21518;
int var_5 = -595048040;
unsigned short var_8 = (unsigned short)65080;
bool var_9 = (bool)1;
int zero = 0;
unsigned long long int var_13 = 3254777893584792818ULL;
unsigned short var_14 = (unsigned short)36951;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 18446744071620223296ULL;
    value_mismatch |= var_14 != (unsigned short)54367;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_5, var_8, var_9, zero, &var_13, &var_14);
  checksum();
}
