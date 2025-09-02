/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8259
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8259
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
void test(val<unsigned int> var_0, val<short> var_1, val<bool> var_4, val<unsigned short> var_5, val<long long int> var_9, val<int> zero, val<signed char*> var_13, val<short*> var_14, val<long long int*> var_15) {
    *var_13 = ((/* implicit */val<signed char>) -473298141587311844LL);
    *var_14 = ((/* implicit */val<short>) max((*var_14), (((/* implicit */val<short>) ((((((/* implicit */val<bool>) (-(((/* implicit */val<int>) var_1))))) ? (var_9) : (((/* implicit */val<long long int>) ((-1) + (((/* implicit */val<int>) (val<bool>)1))))))) + (((/* implicit */val<long long int>) ((((/* implicit */val<int>) var_5)) + (((/* implicit */val<int>) var_4))))))))));
    *var_15 = max((((((/* implicit */val<bool>) (~(4101515331960590124LL)))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_1))) : (-473298141587311842LL))), (((/* implicit */val<long long int>) var_0)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1744306027U;
short var_1 = (short)-27189;
bool var_4 = (bool)0;
unsigned short var_5 = (unsigned short)2757;
long long int var_9 = -3527738512455253553LL;
int zero = 0;
signed char var_13 = (signed char)-29;
short var_14 = (short)21785;
long long int var_15 = 8140816482022373957LL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (signed char)28;
    value_mismatch |= var_14 != (short)21785;
    value_mismatch |= var_15 != 1744306027LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_4, var_5, var_9, zero, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
