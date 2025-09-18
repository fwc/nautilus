/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9181
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9181
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
void test(val<unsigned int> var_4, val<short> var_5, val<unsigned int> var_8, val<int> zero, val<short*> var_10, val<unsigned char*> var_11) {
    *var_10 = ((/* implicit */val<short>) min((((/* implicit */val<unsigned int>) var_5)), (((((/* implicit */val<bool>) ((var_8) - (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<bool>)0)))))) ? (min((var_8), (((/* implicit */val<unsigned int>) (val<unsigned short>)65535)))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((val<bool>) (val<unsigned short>)65535))))))));
    *var_11 = ((/* implicit */val<unsigned char>) max((*var_11), (((/* implicit */val<unsigned char>) var_4))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3490714573U;
short var_5 = (short)10202;
unsigned int var_8 = 1419199145U;
int zero = 0;
short var_10 = (short)-4468;
unsigned char var_11 = (unsigned char)51;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (short)10202;
    value_mismatch |= var_11 != (unsigned char)205;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_5, var_8, zero, &var_10, &var_11);
  checksum();
}
