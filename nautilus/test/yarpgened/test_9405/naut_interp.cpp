/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9405
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9405
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
void test(val<short> var_1, val<unsigned char> var_4, val<long long int> var_5, val<long long int> var_6, val<unsigned char> var_8, val<long long int> var_10, val<int> zero, val<short*> var_12, val<unsigned short*> var_13, val<short*> var_14) {
    *var_12 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) ((4) << (((((/* implicit */val<int>) var_1)) - (29257)))))) ? (min((((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<int>) var_1)) : (((/* implicit */val<int>) var_1))))), (((((/* implicit */val<bool>) var_5)) ? (var_5) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_4))))))) : (var_6)));
    *var_13 = ((/* implicit */val<unsigned short>) max((*var_13), (((/* implicit */val<unsigned short>) var_8))));
    *var_14 = ((/* implicit */val<short>) var_4);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)29272;
unsigned char var_4 = (unsigned char)125;
long long int var_5 = 848665565032302365LL;
long long int var_6 = -7465019753428601739LL;
unsigned char var_8 = (unsigned char)45;
long long int var_10 = 5563469271517256018LL;
int zero = 0;
short var_12 = (short)12330;
unsigned short var_13 = (unsigned short)48730;
short var_14 = (short)17515;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (short)29272;
    value_mismatch |= var_13 != (unsigned short)48730;
    value_mismatch |= var_14 != (short)125;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_5, var_6, var_8, var_10, zero, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
