/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2306
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2306
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
void test(val<int> var_1, val<unsigned long long int> var_4, val<int> var_7, val<unsigned long long int> var_8, val<int> zero, val<unsigned short*> var_16, val<signed char*> var_17) {
    *var_16 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_1)) ? (((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<int>) (val<signed char>)-109)) : (var_7))) : (((/* implicit */val<int>) ((val<signed char>) -1320624342)))))) & (((var_4) & (18446744073709551603ULL)))));
    *var_17 = ((/* implicit */val<signed char>) var_8);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1934722393;
unsigned long long int var_4 = 4138678900313159261ULL;
int var_7 = -200345457;
unsigned long long int var_8 = 16536725239226371335ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)5412;
signed char var_17 = (signed char)-77;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned short)62993;
    value_mismatch |= var_17 != (signed char)7;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_7, var_8, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
