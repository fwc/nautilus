/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2475
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2475
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
void test(val<unsigned long long int> var_2, val<unsigned short> var_5, val<unsigned short> var_6, val<bool> var_7, val<int> var_8, val<int> zero, val<unsigned int*> var_10, val<long long int*> var_11, val<long long int*> var_12, val<bool*> var_13, val<short*> var_14) {
    *var_10 ^= ((/* implicit */val<unsigned int>) (-(min((((var_2) - (((/* implicit */val<unsigned long long int>) var_8)))), (((/* implicit */val<unsigned long long int>) var_5))))));
    *var_11 = ((/* implicit */val<long long int>) min((*var_11), (((/* implicit */val<long long int>) var_8))));
    *var_12 = ((/* implicit */val<long long int>) var_6);
    *var_13 = ((/* implicit */val<bool>) ((val<unsigned short>) min((((/* implicit */val<int>) ((val<unsigned char>) var_7))), ((+(((/* implicit */val<int>) var_5)))))));
    *var_14 = ((/* implicit */val<short>) ((((/* implicit */val<int>) ((var_8) >= ((((val<bool>)1) ? (var_8) : (((/* implicit */val<int>) var_7))))))) & (((/* implicit */val<int>) ((val<signed char>) ((((/* implicit */val<int>) var_7)) ^ (((/* implicit */val<int>) (val<unsigned short>)49614))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17451761864048074796ULL;
unsigned short var_5 = (unsigned short)27099;
unsigned short var_6 = (unsigned short)40165;
bool var_7 = (bool)1;
int var_8 = -1362538300;
int zero = 0;
unsigned int var_10 = 4284960885U;
long long int var_11 = 3567803910538483768LL;
long long int var_12 = 4030160742382601868LL;
bool var_13 = (bool)0;
short var_14 = (short)25771;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 10012240U;
    value_mismatch |= var_11 != -1362538300LL;
    value_mismatch |= var_12 != 40165LL;
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != (short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_6, var_7, var_8, zero, &var_10, &var_11, &var_12, &var_13, &var_14);
  checksum();
}
