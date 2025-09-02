/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1679
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1679
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
void test(val<long long int> var_0, val<unsigned char> var_9, val<unsigned int> var_11, val<unsigned char> var_12, val<int> zero, val<signed char*> var_15, val<unsigned short*> var_16) {
    *var_15 = ((/* implicit */val<signed char>) var_12);
    *var_16 ^= ((/* implicit */val<unsigned short>) (~(((((/* implicit */val<bool>) (+(var_11)))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (!((val<bool>)0))))) : (((((/* implicit */val<bool>) var_9)) ? (var_0) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_9)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1721926242922478939LL;
unsigned char var_9 = (unsigned char)65;
unsigned int var_11 = 1226950974U;
unsigned char var_12 = (unsigned char)161;
int zero = 0;
signed char var_15 = (signed char)41;
unsigned short var_16 = (unsigned short)40848;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (signed char)-95;
    value_mismatch |= var_16 != (unsigned short)24686;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_9, var_11, var_12, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
