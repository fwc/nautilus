/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8994
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8994
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
void test(val<unsigned int> var_4, val<bool> var_11, val<signed char> var_12, val<int> zero, val<signed char*> var_19, val<short*> var_20) {
    *var_19 -= ((/* implicit */val<signed char>) (((!(((val<bool>) var_12)))) ? (var_4) : (max((var_4), (((/* implicit */val<unsigned int>) (~(((/* implicit */val<int>) var_11)))))))));
    *var_20 = ((/* implicit */val<short>) (val<unsigned short>)0);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2256020456U;
bool var_11 = (bool)0;
signed char var_12 = (signed char)-22;
int zero = 0;
signed char var_19 = (signed char)-122;
short var_20 = (short)5189;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (signed char)-121;
    value_mismatch |= var_20 != (short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_11, var_12, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
