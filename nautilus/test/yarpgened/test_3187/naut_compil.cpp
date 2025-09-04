/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3187
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3187
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
void test(val<bool> var_1, val<unsigned short> var_3, val<unsigned char> var_5, val<bool> var_11, val<unsigned char> var_12, val<unsigned long long int> var_17, val<int> zero, val<unsigned long long int*> var_19, val<unsigned short*> var_20, val<unsigned char*> var_21, val<bool*> var_22) {
    *var_19 += ((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) var_12))));
    *var_20 = ((/* implicit */val<unsigned short>) var_1);
    *var_21 |= ((/* implicit */val<unsigned char>) (-(((((/* implicit */val<int>) var_3)) & (((((/* implicit */val<bool>) var_17)) ? (((/* implicit */val<int>) var_5)) : (((/* implicit */val<int>) (val<unsigned short>)9594))))))));
    *var_22 = var_11;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)0;
unsigned short var_3 = (unsigned short)47350;
unsigned char var_5 = (unsigned char)4;
bool var_11 = (bool)1;
unsigned char var_12 = (unsigned char)123;
unsigned long long int var_17 = 11149296088084543012ULL;
int zero = 0;
unsigned long long int var_19 = 6818540067467852788ULL;
unsigned short var_20 = (unsigned short)28271;
unsigned char var_21 = (unsigned char)184;
bool var_22 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 6818540067467852664ULL;
    value_mismatch |= var_20 != (unsigned short)0;
    value_mismatch |= var_21 != (unsigned char)252;
    value_mismatch |= var_22 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_5, var_11, var_12, var_17, zero, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
