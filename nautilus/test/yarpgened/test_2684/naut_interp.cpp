/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2684
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2684
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
void test(val<int> var_8, val<unsigned short> var_9, val<int> var_10, val<int> var_13, val<int> zero, val<unsigned char*> var_15, val<signed char*> var_16, val<unsigned short*> var_17) {
    *var_15 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) var_9)) ? (var_8) : (((/* implicit */val<int>) (val<short>)(-32767 - 1)))));
    *var_16 = ((/* implicit */val<signed char>) var_10);
    *var_17 = ((/* implicit */val<unsigned short>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((val<int>) (val<unsigned short>)0))) ? (var_13) : (((((/* implicit */val<bool>) (val<unsigned short>)52603)) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) (val<bool>)1)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = -385715196;
unsigned short var_9 = (unsigned short)32880;
int var_10 = -274946186;
int var_13 = 1723346189;
int zero = 0;
unsigned char var_15 = (unsigned char)118;
signed char var_16 = (signed char)124;
unsigned short var_17 = (unsigned short)60545;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned char)4;
    value_mismatch |= var_16 != (signed char)118;
    value_mismatch |= var_17 != (unsigned short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, var_9, var_10, var_13, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
