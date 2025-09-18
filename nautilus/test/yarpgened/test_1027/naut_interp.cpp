/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1027
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1027
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
void test(val<unsigned char> var_3, val<unsigned int> var_4, val<bool> var_5, val<unsigned short> var_6, val<short> var_8, val<int> zero, val<unsigned char*> var_10, val<unsigned short*> var_11, val<int*> var_12) {
    *var_10 = ((/* implicit */val<unsigned char>) max((*var_10), (((/* implicit */val<unsigned char>) (-(((((/* implicit */val<bool>) (-(((/* implicit */val<int>) var_8))))) ? ((-(((/* implicit */val<int>) var_3)))) : (((/* implicit */val<int>) var_5)))))))));
    *var_11 ^= ((/* implicit */val<unsigned short>) (!(((/* implicit */val<bool>) var_6))));
    *var_12 ^= ((/* implicit */val<int>) (!((!(((/* implicit */val<bool>) (~(var_4))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)48;
unsigned int var_4 = 2911793291U;
bool var_5 = (bool)0;
unsigned short var_6 = (unsigned short)51609;
short var_8 = (short)-14748;
int zero = 0;
unsigned char var_10 = (unsigned char)35;
unsigned short var_11 = (unsigned short)19456;
int var_12 = -1704159883;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned char)48;
    value_mismatch |= var_11 != (unsigned short)19456;
    value_mismatch |= var_12 != -1704159884;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_5, var_6, var_8, zero, &var_10, &var_11, &var_12);
  checksum();
}
