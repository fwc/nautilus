/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3685
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3685
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
void test(val<short> var_0, val<unsigned char> var_2, val<unsigned char> var_3, val<bool> var_5, val<unsigned int> var_7, val<bool> var_13, val<bool> var_14, val<unsigned long long int> var_16, val<int> zero, val<unsigned short*> var_18, val<long long int*> var_19, val<unsigned int*> var_20) {
    *var_18 -= ((/* implicit */val<unsigned short>) min((((/* implicit */val<int>) (val<signed char>)107)), (((((/* implicit */val<bool>) var_16)) ? (((/* implicit */val<int>) ((var_14) || (((/* implicit */val<bool>) -5565870767559541915LL))))) : (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_7)) || (((/* implicit */val<bool>) var_3)))))))));
    *var_19 = ((/* implicit */val<long long int>) min((*var_19), (((/* implicit */val<long long int>) var_13))));
    *var_20 = ((/* implicit */val<unsigned int>) max((*var_20), (((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) var_0)) == (((/* implicit */val<int>) min((var_2), (((/* implicit */val<unsigned char>) var_5))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)27685;
unsigned char var_2 = (unsigned char)84;
unsigned char var_3 = (unsigned char)237;
bool var_5 = (bool)0;
unsigned int var_7 = 571188756U;
bool var_13 = (bool)0;
bool var_14 = (bool)1;
unsigned long long int var_16 = 14184709486892486922ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)48613;
long long int var_19 = -9112254830167115682LL;
unsigned int var_20 = 4089563294U;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned short)48612;
    value_mismatch |= var_19 != -9112254830167115682LL;
    value_mismatch |= var_20 != 4089563294U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_5, var_7, var_13, var_14, var_16, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
