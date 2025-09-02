/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5162
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5162
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
void test(val<unsigned char> var_0, val<int> zero, val<int*> var_13, val<unsigned short*> var_14) {
    *var_13 = (~(((/* implicit */val<int>) var_0)));
    *var_14 -= ((/* implicit */val<unsigned short>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) max((((/* implicit */val<unsigned short>) (val<unsigned char>)71)), ((val<unsigned short>)65535))))) <= (((((/* implicit */val<long long int>) ((/* implicit */val<int>) ((val<unsigned short>) 1853844769)))) + (min((-3364028338747232894LL), (((/* implicit */val<long long int>) (val<unsigned short>)65529))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)177;
int zero = 0;
int var_13 = -2137059005;
unsigned short var_14 = (unsigned short)46020;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != -178;
    value_mismatch |= var_14 != (unsigned short)46020;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
