/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 298
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=298
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
void test(val<unsigned short> var_3, val<int> var_5, val<unsigned char> var_13, val<unsigned char> var_16, val<int> zero, val<unsigned char*> var_17, val<short*> var_18, val<bool*> var_19, val<unsigned short*> var_20, val<bool*> var_21) {
    *var_17 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)24567))) - (3948003050U)));
    *var_18 = ((/* implicit */val<short>) max(((((+(-245816821))) | (((/* implicit */val<int>) var_13)))), (((/* implicit */val<int>) (val<unsigned short>)39410))));
    *var_19 = ((/* implicit */val<bool>) min(((+((+(2528624297U))))), (((/* implicit */val<unsigned int>) var_3))));
    *var_20 = ((/* implicit */val<unsigned short>) var_16);
    *var_21 = ((/* implicit */val<bool>) (+(var_5)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)36482;
int var_5 = -334741619;
unsigned char var_13 = (unsigned char)214;
unsigned char var_16 = (unsigned char)237;
int zero = 0;
unsigned char var_17 = (unsigned char)165;
short var_18 = (short)12336;
bool var_19 = (bool)0;
unsigned short var_20 = (unsigned short)53168;
bool var_21 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (unsigned char)13;
    value_mismatch |= var_18 != (short)-26126;
    value_mismatch |= var_19 != (bool)1;
    value_mismatch |= var_20 != (unsigned short)237;
    value_mismatch |= var_21 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_5, var_13, var_16, zero, &var_17, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
