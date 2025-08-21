/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 754
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=754
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
void test(val<unsigned char> var_5, val<unsigned int> var_9, val<int> zero, val<short*> var_11, val<unsigned char*> var_12) {
    *var_11 = ((/* implicit */val<short>) 4276478000U);
    *var_12 = ((/* implicit */val<unsigned char>) max((((((/* implicit */val<bool>) (val<unsigned short>)13406)) ? (var_9) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_5))))), (((/* implicit */val<unsigned int>) 260096))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)195;
unsigned int var_9 = 3231097938U;
int zero = 0;
short var_11 = (short)-2768;
unsigned char var_12 = (unsigned char)102;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (short)-8144;
    value_mismatch |= var_12 != (unsigned char)82;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_9, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
