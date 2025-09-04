/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5897
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5897
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>
#ifndef USE_COMPILATION
#define USE_COMPILATION false
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
void test(val<bool> var_6, val<unsigned char> var_15, val<int> zero, val<unsigned long long int*> var_17, val<unsigned int*> var_18) {
    *var_17 = ((/* implicit */val<unsigned long long int>) (((-(((/* implicit */val<int>) var_6)))) % ((-(((/* implicit */val<int>) ((val<short>) (val<unsigned short>)65535)))))));
    *var_18 &= ((/* implicit */val<unsigned int>) (!(((/* implicit */val<bool>) ((val<unsigned short>) ((((/* implicit */val<int>) (val<bool>)0)) != (((/* implicit */val<int>) var_15))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_6 = (bool)0;
unsigned char var_15 = (unsigned char)108;
int zero = 0;
unsigned long long int var_17 = 9240242572191831207ULL;
unsigned int var_18 = 1854215068U;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 0ULL;
    value_mismatch |= var_18 != 0U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_15, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
