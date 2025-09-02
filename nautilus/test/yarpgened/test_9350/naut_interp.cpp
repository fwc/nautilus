/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9350
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9350
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
void test(val<unsigned short> var_3, val<unsigned char> var_7, val<int> var_10, val<unsigned long long int> var_12, val<long long int> var_15, val<short> var_16, val<unsigned int> var_17, val<int> zero, val<short*> var_19, val<signed char*> var_20, val<int*> var_21) {
    *var_19 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) var_17)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_16))) : (var_15)));
    *var_20 = ((/* implicit */val<signed char>) ((val<unsigned short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) (val<unsigned char>)233))))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_16))) : (var_12))));
    *var_21 = var_10;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)12281;
unsigned char var_7 = (unsigned char)120;
int var_10 = 2128103346;
unsigned long long int var_12 = 3784202630914871313ULL;
long long int var_15 = -652823752672974760LL;
short var_16 = (short)-10318;
unsigned int var_17 = 3206870541U;
int zero = 0;
short var_19 = (short)16586;
signed char var_20 = (signed char)90;
int var_21 = -210324074;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (short)-10318;
    value_mismatch |= var_20 != (signed char)-78;
    value_mismatch |= var_21 != 2128103346;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_7, var_10, var_12, var_15, var_16, var_17, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
