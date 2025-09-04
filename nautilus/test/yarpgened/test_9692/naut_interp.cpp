/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9692
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9692
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
void test(val<unsigned short> var_0, val<short> var_1, val<signed char> var_3, val<unsigned short> var_6, val<signed char> var_8, val<int> zero, val<unsigned short*> var_12, val<short*> var_13, val<signed char*> var_14, val<unsigned short*> var_15, val<long long int*> var_16) {
    *var_12 ^= ((/* implicit */val<unsigned short>) var_3);
    *var_13 += ((/* implicit */val<short>) var_0);
    *var_14 = ((/* implicit */val<signed char>) var_1);
    *var_15 = min((((/* implicit */val<unsigned short>) var_8)), (var_0));
    *var_16 = ((/* implicit */val<long long int>) var_6);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11137;
short var_1 = (short)16359;
signed char var_3 = (signed char)-47;
unsigned short var_6 = (unsigned short)53324;
signed char var_8 = (signed char)-44;
int zero = 0;
unsigned short var_12 = (unsigned short)31975;
short var_13 = (short)-948;
signed char var_14 = (signed char)47;
unsigned short var_15 = (unsigned short)47856;
long long int var_16 = 5366430780998651168LL;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned short)33590;
    value_mismatch |= var_13 != (short)10189;
    value_mismatch |= var_14 != (signed char)-25;
    value_mismatch |= var_15 != (unsigned short)11137;
    value_mismatch |= var_16 != 53324LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_6, var_8, zero, &var_12, &var_13, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
