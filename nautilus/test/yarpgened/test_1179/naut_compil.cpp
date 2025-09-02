/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1179
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1179
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
void test(val<long long int> var_1, val<bool> var_2, val<bool> var_5, val<unsigned short> var_7, val<int> zero, val<bool*> var_12, val<short*> var_13) {
    *var_12 += ((/* implicit */val<bool>) var_7);
    *var_13 = ((/* implicit */val<short>) max((((/* implicit */val<long long int>) ((((/* implicit */val<int>) min((var_7), (((/* implicit */val<unsigned short>) var_5))))) < (((/* implicit */val<int>) var_2))))), ((~(var_1)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6701679586828204152LL;
bool var_2 = (bool)1;
bool var_5 = (bool)1;
unsigned short var_7 = (unsigned short)8644;
int zero = 0;
bool var_12 = (bool)1;
short var_13 = (short)-8474;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (bool)1;
    value_mismatch |= var_13 != (short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_5, var_7, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
