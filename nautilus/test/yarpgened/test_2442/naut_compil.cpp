/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2442
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2442
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
void test(val<bool> var_0, val<unsigned char> var_3, val<unsigned short> var_8, val<int> zero, val<short*> var_14, val<bool*> var_15, val<unsigned long long int*> var_16) {
    *var_14 = ((/* implicit */val<short>) var_0);
    *var_15 |= ((/* implicit */val<bool>) var_3);
    *var_16 = ((/* implicit */val<unsigned long long int>) var_8);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
unsigned char var_3 = (unsigned char)110;
unsigned short var_8 = (unsigned short)42345;
int zero = 0;
short var_14 = (short)-6033;
bool var_15 = (bool)0;
unsigned long long int var_16 = 10553913810770399140ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (short)0;
    value_mismatch |= var_15 != (bool)1;
    value_mismatch |= var_16 != 42345ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_8, zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
