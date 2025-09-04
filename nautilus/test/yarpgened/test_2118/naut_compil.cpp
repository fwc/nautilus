/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2118
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2118
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
void test(val<unsigned short> var_1, val<unsigned short> var_4, val<bool> var_5, val<unsigned short> var_9, val<bool> var_11, val<int> zero, val<signed char*> var_12, val<signed char*> var_13, val<signed char*> var_14) {
    *var_12 = ((/* implicit */val<signed char>) (!(((/* implicit */val<bool>) var_4))));
    *var_13 = ((/* implicit */val<signed char>) min((*var_13), (((/* implicit */val<signed char>) max(((~(((/* implicit */val<int>) var_11)))), (max((((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<int>) var_5)) : (((/* implicit */val<int>) var_4)))), (((/* implicit */val<int>) var_9)))))))));
    *var_14 *= ((/* implicit */val<signed char>) (-((+(((/* implicit */val<int>) (val<bool>)1))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)8475;
unsigned short var_4 = (unsigned short)12165;
bool var_5 = (bool)1;
unsigned short var_9 = (unsigned short)7985;
bool var_11 = (bool)0;
int zero = 0;
signed char var_12 = (signed char)24;
signed char var_13 = (signed char)108;
signed char var_14 = (signed char)-127;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (signed char)0;
    value_mismatch |= var_13 != (signed char)49;
    value_mismatch |= var_14 != (signed char)127;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_5, var_9, var_11, zero, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
