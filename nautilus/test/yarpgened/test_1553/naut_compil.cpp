/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1553
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1553
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
void test(val<unsigned char> var_6, val<signed char> var_15, val<int> zero, val<unsigned char*> var_16, val<short*> var_17, val<short*> var_18, val<unsigned short*> var_19) {
    *var_16 = ((/* implicit */val<unsigned char>) ((val<unsigned int>) (~(1726298086))));
    *var_17 = ((/* implicit */val<short>) min((*var_17), (((/* implicit */val<short>) var_15))));
    *var_18 = ((/* implicit */val<short>) max((*var_18), (((/* implicit */val<short>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)98))) | (17013868766257371701ULL))))));
    *var_19 = ((/* implicit */val<unsigned short>) (~(((val<unsigned int>) var_6))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)220;
signed char var_15 = (signed char)80;
int zero = 0;
unsigned char var_16 = (unsigned char)161;
short var_17 = (short)-26914;
short var_18 = (short)-27985;
unsigned short var_19 = (unsigned short)28121;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned char)25;
    value_mismatch |= var_17 != (short)-26914;
    value_mismatch |= var_18 != (short)23159;
    value_mismatch |= var_19 != (unsigned short)65315;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_15, zero, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
