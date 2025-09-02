/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6412
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6412
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
void test(val<signed char> var_13, val<int> zero, val<signed char*> var_19, val<short*> var_20, val<unsigned long long int*> var_21, val<bool*> var_22) {
    *var_19 = ((/* implicit */val<signed char>) (val<unsigned char>)71);
    *var_20 *= ((/* implicit */val<short>) 0U);
    *var_21 ^= ((/* implicit */val<unsigned long long int>) (-(((/* implicit */val<int>) var_13))));
    *var_22 |= ((/* implicit */val<bool>) min(((val<signed char>)102), ((val<signed char>)99)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_13 = (signed char)-79;
int zero = 0;
signed char var_19 = (signed char)-30;
short var_20 = (short)-7194;
unsigned long long int var_21 = 7066468379526212641ULL;
bool var_22 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (signed char)71;
    value_mismatch |= var_20 != (short)0;
    value_mismatch |= var_21 != 7066468379526212718ULL;
    value_mismatch |= var_22 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_13, zero, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
