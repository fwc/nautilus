/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1527
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1527
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
void test(val<bool> var_0, val<long long int> var_2, val<unsigned int> var_7, val<unsigned short> var_12, val<signed char> var_14, val<int> zero, val<unsigned short*> var_15, val<int*> var_16, val<unsigned short*> var_17, val<unsigned short*> var_18, val<unsigned char*> var_19) {
    *var_15 ^= ((/* implicit */val<unsigned short>) var_7);
    *var_16 ^= ((/* implicit */val<int>) max((((/* implicit */val<unsigned short>) var_14)), (var_12)));
    *var_17 = ((/* implicit */val<unsigned short>) max((*var_17), (((/* implicit */val<unsigned short>) var_7))));
    *var_18 = ((/* implicit */val<unsigned short>) max((var_2), (((/* implicit */val<long long int>) var_0))));
    *var_19 *= ((/* implicit */val<unsigned char>) (val<short>)32767);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
long long int var_2 = 2520762679645331413LL;
unsigned int var_7 = 1871550347U;
unsigned short var_12 = (unsigned short)16146;
signed char var_14 = (signed char)-21;
int zero = 0;
unsigned short var_15 = (unsigned short)29763;
int var_16 = -1676307780;
unsigned short var_17 = (unsigned short)5270;
unsigned short var_18 = (unsigned short)61216;
unsigned char var_19 = (unsigned char)53;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned short)58312;
    value_mismatch |= var_16 != -1676317353;
    value_mismatch |= var_17 != (unsigned short)38795;
    value_mismatch |= var_18 != (unsigned short)24533;
    value_mismatch |= var_19 != (unsigned char)203;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_7, var_12, var_14, zero, &var_15, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
