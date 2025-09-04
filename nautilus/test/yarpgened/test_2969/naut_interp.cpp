/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2969
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2969
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
void test(val<signed char> var_5, val<short> var_7, val<unsigned char> var_8, val<unsigned short> var_11, val<int> zero, val<unsigned char*> var_13, val<long long int*> var_14) {
    *var_13 = ((/* implicit */val<unsigned char>) var_11);
    *var_14 = ((/* implicit */val<long long int>) (-(((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<int>) var_8)) : (((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) var_11))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)33;
short var_7 = (short)-28549;
unsigned char var_8 = (unsigned char)14;
unsigned short var_11 = (unsigned short)14668;
int zero = 0;
unsigned char var_13 = (unsigned char)68;
long long int var_14 = -4528255533459994987LL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned char)76;
    value_mismatch |= var_14 != -14LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_7, var_8, var_11, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
