/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8205
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8205
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
void test(val<unsigned short> var_4, val<short> var_6, val<unsigned char> var_8, val<int> var_10, val<int> zero, val<short*> var_15, val<unsigned long long int*> var_16) {
    *var_15 = ((/* implicit */val<short>) ((((/* implicit */val<int>) var_6)) ^ (max((((/* implicit */val<int>) (val<short>)-25458)), (((((/* implicit */val<bool>) (val<short>)25444)) ? (((/* implicit */val<int>) var_8)) : (((/* implicit */val<int>) var_4))))))));
    *var_16 ^= ((/* implicit */val<unsigned long long int>) (~(min((((((/* implicit */val<bool>) 9223372036854775807LL)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_8))) : (1639109426U))), (((/* implicit */val<unsigned int>) var_10))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)52117;
short var_6 = (short)-29035;
unsigned char var_8 = (unsigned char)217;
int var_10 = -943246078;
int zero = 0;
short var_15 = (short)-12594;
unsigned long long int var_16 = 17196471702633474935ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (short)-29108;
    value_mismatch |= var_16 != 17196471706071962705ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_6, var_8, var_10, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
