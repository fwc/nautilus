/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3586
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3586
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
void test(val<bool> var_0, val<unsigned char> var_1, val<unsigned int> var_2, val<unsigned int> var_8, val<short> var_14, val<unsigned short> var_15, val<int> zero, val<long long int*> var_20, val<bool*> var_21, val<unsigned short*> var_22) {
    *var_20 |= ((/* implicit */val<long long int>) (val<unsigned char>)220);
    *var_21 = ((((/* implicit */val<bool>) 1697214996398872529LL)) && (((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_14)) ? (var_2) : (var_8)))) ? (((/* implicit */val<int>) var_1)) : (((((/* implicit */val<bool>) (val<short>)14869)) ? (((/* implicit */val<int>) var_0)) : (((/* implicit */val<int>) var_15))))))));
    *var_22 -= ((/* implicit */val<unsigned short>) var_8);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
unsigned char var_1 = (unsigned char)130;
unsigned int var_2 = 2652745221U;
unsigned int var_8 = 493785972U;
short var_14 = (short)-15357;
unsigned short var_15 = (unsigned short)8985;
int zero = 0;
long long int var_20 = -225260374605948038LL;
bool var_21 = (bool)1;
unsigned short var_22 = (unsigned short)28798;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != -225260374605947906LL;
    value_mismatch |= var_21 != (bool)1;
    value_mismatch |= var_22 != (unsigned short)56586;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_8, var_14, var_15, zero, &var_20, &var_21, &var_22);
  checksum();
}
