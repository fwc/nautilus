/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2566
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2566
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
void test(val<unsigned long long int> var_3, val<int> var_4, val<int> var_5, val<int> var_6, val<int> var_7, val<short> var_9, val<int> zero, val<unsigned int*> var_10, val<long long int*> var_11, val<unsigned int*> var_12, val<unsigned long long int*> var_13) {
    *var_10 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) (~((-(((/* implicit */val<int>) var_9))))))) ? (var_4) : (var_7)));
    *var_11 &= ((/* implicit */val<long long int>) ((((/* implicit */val<int>) ((((/* implicit */val<int>) (val<unsigned short>)8170)) > (((/* implicit */val<int>) (val<unsigned short>)8163))))) * (((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<unsigned short>)8170))))) : (((var_4) | (var_6)))))));
    *var_12 = ((/* implicit */val<unsigned int>) var_6);
    *var_13 = ((/* implicit */val<unsigned long long int>) ((((var_5) + (2147483647))) << (((((var_5) + (1940939841))) - (12)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 3190055117691030460ULL;
int var_4 = 1527632976;
int var_5 = -1940939825;
int var_6 = 1512333656;
int var_7 = 2040499681;
short var_9 = (short)-9788;
int zero = 0;
unsigned int var_10 = 3287250923U;
long long int var_11 = 7415945077264409802LL;
unsigned int var_12 = 2792434456U;
unsigned long long int var_13 = 4349680960865661878ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 1527632976U;
    value_mismatch |= var_11 != 0LL;
    value_mismatch |= var_12 != 1512333656U;
    value_mismatch |= var_13 != 18446744072719285472ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_5, var_6, var_7, var_9, zero, &var_10, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
