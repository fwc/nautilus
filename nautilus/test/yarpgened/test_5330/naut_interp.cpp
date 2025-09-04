/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5330
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5330
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
void test(val<int> var_2, val<bool> var_4, val<unsigned int> var_7, val<unsigned short> var_8, val<unsigned long long int> var_9, val<int> zero, val<long long int*> var_10, val<unsigned int*> var_11, val<bool*> var_12, val<unsigned int*> var_13) {
    *var_10 = ((/* implicit */val<long long int>) var_2);
    *var_11 = var_7;
    *var_12 = ((/* implicit */val<bool>) max((var_8), (((/* implicit */val<unsigned short>) var_4))));
    *var_13 |= ((/* implicit */val<unsigned int>) (+(var_9)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1365253282;
bool var_4 = (bool)1;
unsigned int var_7 = 2464495902U;
unsigned short var_8 = (unsigned short)8571;
unsigned long long int var_9 = 11797158276767185839ULL;
int zero = 0;
long long int var_10 = 4264786651831218815LL;
unsigned int var_11 = 3575355529U;
bool var_12 = (bool)1;
unsigned int var_13 = 1160290369U;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != -1365253282LL;
    value_mismatch |= var_11 != 2464495902U;
    value_mismatch |= var_12 != (bool)1;
    value_mismatch |= var_13 != 3723295727U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_7, var_8, var_9, zero, &var_10, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
