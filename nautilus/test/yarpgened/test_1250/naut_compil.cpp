/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1250
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1250
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
void test(val<int> var_0, val<unsigned char> var_9, val<short> var_11, val<int> zero, val<unsigned char*> var_12, val<int*> var_13) {
    *var_12 = ((/* implicit */val<unsigned char>) (-(((((((/* implicit */val<int>) (val<unsigned char>)29)) >= (var_0))) ? (((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<int>) var_9)) : (((/* implicit */val<int>) (val<signed char>)-111)))) : (((/* implicit */val<int>) ((1442072108U) != (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)-24))))))))));
    *var_13 = ((/* implicit */val<int>) (val<unsigned short>)42005);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1065569163;
unsigned char var_9 = (unsigned char)58;
short var_11 = (short)-112;
int zero = 0;
unsigned char var_12 = (unsigned char)14;
int var_13 = 1604443102;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned char)255;
    value_mismatch |= var_13 != 42005;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_9, var_11, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
