/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7301
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7301
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
void test(val<int> var_12, val<int> var_13, val<int> var_14, val<bool> var_17, val<int> zero, val<unsigned char*> var_19, val<bool*> var_20, val<int*> var_21, val<int*> var_22) {
    *var_19 ^= ((/* implicit */val<unsigned char>) var_12);
    *var_20 = var_17;
    *var_21 = ((/* implicit */val<int>) max((*var_21), (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_14)) ? (((((/* implicit */val<bool>) (val<signed char>)116)) ? (4234836818U) : (((/* implicit */val<unsigned int>) -1637402075)))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)-79))))))));
    *var_22 = (~(((/* implicit */val<int>) ((val<bool>) ((val<unsigned short>) var_13)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_12 = -1517295962;
int var_13 = 1864589982;
int var_14 = -415025474;
bool var_17 = (bool)0;
int zero = 0;
unsigned char var_19 = (unsigned char)191;
bool var_20 = (bool)1;
int var_21 = -743295553;
int var_22 = -1191675423;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned char)25;
    value_mismatch |= var_20 != (bool)0;
    value_mismatch |= var_21 != -60130478;
    value_mismatch |= var_22 != -2;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_12, var_13, var_14, var_17, zero, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
