/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2184
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2184
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
void test(val<signed char> var_0, val<signed char> var_7, val<signed char> var_10, val<signed char> var_13, val<signed char> var_18, val<int> zero, val<signed char*> var_19, val<signed char*> var_20) {
    *var_19 = ((/* implicit */val<signed char>) ((((/* implicit */val<int>) var_10)) ^ (((((/* implicit */val<bool>) (val<signed char>)66)) ? (((/* implicit */val<int>) var_13)) : (((/* implicit */val<int>) ((((/* implicit */val<int>) var_7)) != (((/* implicit */val<int>) var_0)))))))));
    *var_20 |= var_18;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-72;
signed char var_7 = (signed char)-101;
signed char var_10 = (signed char)91;
signed char var_13 = (signed char)-7;
signed char var_18 = (signed char)122;
int zero = 0;
signed char var_19 = (signed char)39;
signed char var_20 = (signed char)-79;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (signed char)-94;
    value_mismatch |= var_20 != (signed char)-5;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_7, var_10, var_13, var_18, zero, &var_19, &var_20);
  checksum();
}
