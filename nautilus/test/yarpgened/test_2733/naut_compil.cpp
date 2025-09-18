/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2733
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2733
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
void test(val<short> var_6, val<int> var_13, val<int> zero, val<unsigned char*> var_20, val<long long int*> var_21) {
    *var_20 |= ((/* implicit */val<unsigned char>) var_6);
    *var_21 = ((/* implicit */val<long long int>) (~(var_13)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-20532;
int var_13 = 2126126527;
int zero = 0;
unsigned char var_20 = (unsigned char)2;
long long int var_21 = 6221397941909766758LL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (unsigned char)206;
    value_mismatch |= var_21 != -2126126528LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_13, zero, &var_20, &var_21);
  checksum();
}
