/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7397
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7397
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
void test(val<bool> var_0, val<unsigned char> var_5, val<int> var_11, val<short> var_12, val<bool> var_13, val<signed char> var_14, val<int> zero, val<long long int*> var_15, val<signed char*> var_16, val<int*> var_17) {
    *var_15 = ((/* implicit */val<long long int>) min((*var_15), (((/* implicit */val<long long int>) var_13))));
    *var_16 = ((/* implicit */val<signed char>) (+(((((/* implicit */val<bool>) max((var_14), (((/* implicit */val<signed char>) (val<bool>)1))))) ? (((/* implicit */val<int>) max((var_13), (var_0)))) : ((((val<bool>)1) ? (((/* implicit */val<int>) (val<signed char>)106)) : (((/* implicit */val<int>) var_12))))))));
    *var_17 = ((((/* implicit */val<int>) var_14)) - (min((((/* implicit */val<int>) var_5)), (var_11))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
unsigned char var_5 = (unsigned char)188;
int var_11 = -290706598;
short var_12 = (short)-28539;
bool var_13 = (bool)0;
signed char var_14 = (signed char)-66;
int zero = 0;
long long int var_15 = -6537558689472714126LL;
signed char var_16 = (signed char)48;
int var_17 = 1494342311;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != -6537558689472714126LL;
    value_mismatch |= var_16 != (signed char)0;
    value_mismatch |= var_17 != 290706532;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_5, var_11, var_12, var_13, var_14, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
