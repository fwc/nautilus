/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5733
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5733
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
void test(val<signed char> var_3, val<int> var_5, val<int> zero, val<unsigned int*> var_12, val<unsigned char*> var_13) {
    *var_12 = ((/* implicit */val<unsigned int>) max((*var_12), (((/* implicit */val<unsigned int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned short>)2))) & (((((/* implicit */val<bool>) var_5)) ? (((val<long long int>) var_3)) : (((/* implicit */val<long long int>) (~(((/* implicit */val<int>) (val<signed char>)63))))))))))));
    *var_13 = (val<unsigned char>)36;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-40;
int var_5 = -2030214312;
int zero = 0;
unsigned int var_12 = 3670955206U;
unsigned char var_13 = (unsigned char)198;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 3670955206U;
    value_mismatch |= var_13 != (unsigned char)36;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_5, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
