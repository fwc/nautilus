/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 891
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=891
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
void test(val<unsigned char> var_7, val<short> var_12, val<bool> var_13, val<signed char> var_14, val<int> var_15, val<short> var_16, val<int> zero, val<int*> var_17, val<bool*> var_18, val<short*> var_19, val<unsigned long long int*> var_20) {
    *var_17 = ((/* implicit */val<int>) max((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) max((var_12), (((/* implicit */val<short>) var_14))))) ^ (((/* implicit */val<int>) (!(((/* implicit */val<bool>) 18446744073709551615ULL)))))))), (max((14383369346419862982ULL), (((/* implicit */val<unsigned long long int>) var_13))))));
    *var_18 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_15)) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) var_7))));
    *var_19 = ((/* implicit */val<short>) max((*var_19), (var_16)));
    *var_20 = ((((/* implicit */val<bool>) 25ULL)) ? (4063374727289688646ULL) : (((/* implicit */val<unsigned long long int>) 794663460)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)189;
short var_12 = (short)12144;
bool var_13 = (bool)0;
signed char var_14 = (signed char)5;
int var_15 = 674811263;
short var_16 = (short)-13470;
int zero = 0;
int var_17 = 815270135;
bool var_18 = (bool)0;
short var_19 = (short)574;
unsigned long long int var_20 = 1243214216935281075ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != -694604346;
    value_mismatch |= var_18 != (bool)1;
    value_mismatch |= var_19 != (short)574;
    value_mismatch |= var_20 != 4063374727289688646ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, var_12, var_13, var_14, var_15, var_16, zero, &var_17, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
