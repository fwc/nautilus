/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7124
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7124
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
void test(val<short> var_3, val<unsigned char> var_4, val<unsigned char> var_8, val<unsigned char> var_9, val<int> zero, val<short*> var_15, val<unsigned long long int*> var_16) {
    *var_15 = var_3;
    *var_16 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) ((val<short>) var_4))) >> (((((((/* implicit */val<int>) var_8)) + (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_9))))))) - (184)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-7702;
unsigned char var_4 = (unsigned char)133;
unsigned char var_8 = (unsigned char)188;
unsigned char var_9 = (unsigned char)154;
int zero = 0;
short var_15 = (short)27279;
unsigned long long int var_16 = 15298439891485658827ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (short)-7702;
    value_mismatch |= var_16 != 8ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_8, var_9, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
