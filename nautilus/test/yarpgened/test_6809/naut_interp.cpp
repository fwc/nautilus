/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6809
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6809
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
void test(val<unsigned short> var_0, val<long long int> var_3, val<bool> var_6, val<short> var_13, val<int> zero, val<unsigned short*> var_20, val<unsigned int*> var_21, val<short*> var_22) {
    *var_20 = ((/* implicit */val<unsigned short>) var_6);
    *var_21 = ((/* implicit */val<unsigned int>) ((var_3) | (2305843009213693951LL)));
    *var_22 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) ((((/* implicit */val<long long int>) ((((/* implicit */val<bool>) (val<unsigned short>)3045)) ? (((/* implicit */val<int>) var_0)) : (((/* implicit */val<int>) (val<unsigned short>)8191))))) ^ (2305843009213693979LL)))) ? (((/* implicit */val<int>) (val<unsigned short>)58914)) : (((/* implicit */val<int>) var_13))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8096;
long long int var_3 = -6944396223906509256LL;
bool var_6 = (bool)0;
short var_13 = (short)-25069;
int zero = 0;
unsigned short var_20 = (unsigned short)55514;
unsigned int var_21 = 1184129323U;
short var_22 = (short)8483;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (unsigned short)0;
    value_mismatch |= var_21 != 4294967295U;
    value_mismatch |= var_22 != (short)-6622;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_6, var_13, zero, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
