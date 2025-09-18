/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3916
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3916
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
void test(val<signed char> var_6, val<unsigned int> var_9, val<int> zero, val<short*> var_17, val<long long int*> var_18) {
    *var_17 = ((/* implicit */val<short>) (-(((((var_9) * (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_6))))) * (((/* implicit */val<unsigned int>) -1))))));
    *var_18 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) 4463249674671209957LL)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)22))) : (2811786109U)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)6;
unsigned int var_9 = 50866777U;
int zero = 0;
short var_17 = (short)-18343;
long long int var_18 = 7525364747164441859LL;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (short)-490;
    value_mismatch |= var_18 != 22LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_9, zero, &var_17, &var_18);
  checksum();
}
