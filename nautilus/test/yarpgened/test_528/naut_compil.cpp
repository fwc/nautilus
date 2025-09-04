/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 528
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=528
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
void test(val<unsigned char> var_0, val<long long int> var_3, val<int> zero, val<unsigned int*> var_10, val<short*> var_11, val<unsigned short*> var_12) {
    *var_10 = ((/* implicit */val<unsigned int>) var_0);
    *var_11 = ((/* implicit */val<short>) var_3);
    *var_12 *= ((/* implicit */val<unsigned short>) var_0);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)136;
long long int var_3 = -8734751437468750688LL;
int zero = 0;
unsigned int var_10 = 2086585752U;
short var_11 = (short)7438;
unsigned short var_12 = (unsigned short)54355;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 136U;
    value_mismatch |= var_11 != (short)-21344;
    value_mismatch |= var_12 != (unsigned short)52248;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
