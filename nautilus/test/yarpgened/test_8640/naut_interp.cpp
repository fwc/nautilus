/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8640
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8640
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
void test(val<long long int> var_4, val<long long int> var_8, val<short> var_9, val<unsigned int> var_11, val<int> zero, val<int*> var_14, val<long long int*> var_15, val<unsigned long long int*> var_16) {
    *var_14 -= ((/* implicit */val<int>) var_4);
    *var_15 = ((((/* implicit */val<bool>) (~(((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)140))) == (10290784606513168946ULL))))))) ? (((/* implicit */val<long long int>) var_11)) : (((((/* implicit */val<bool>) (~(((/* implicit */val<int>) var_9))))) ? (var_8) : (((((/* implicit */val<bool>) 20U)) ? (((/* implicit */val<long long int>) 15U)) : (var_8))))));
    *var_16 = ((/* implicit */val<unsigned long long int>) (val<short>)32767);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -1792685381149944354LL;
long long int var_8 = -2498494441361975236LL;
short var_9 = (short)-26594;
unsigned int var_11 = 936919077U;
int zero = 0;
int var_14 = -293486771;
long long int var_15 = -1563413963633656220LL;
unsigned long long int var_16 = 355143369127858972ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 402401647;
    value_mismatch |= var_15 != 936919077LL;
    value_mismatch |= var_16 != 32767ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_8, var_9, var_11, zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
