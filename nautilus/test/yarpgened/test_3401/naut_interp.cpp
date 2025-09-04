/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3401
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3401
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
void test(val<unsigned int> var_1, val<unsigned int> var_2, val<unsigned long long int> var_4, val<unsigned char> var_6, val<bool> var_8, val<long long int> var_9, val<signed char> var_10, val<unsigned char> var_13, val<short> var_14, val<int> zero, val<bool*> var_15, val<int*> var_16, val<int*> var_17) {
    *var_15 = ((/* implicit */val<bool>) (+(((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_13)) ? (((/* implicit */val<int>) var_8)) : (((/* implicit */val<int>) var_6))))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_6))) : (((((/* implicit */val<bool>) var_9)) ? (var_1) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_10)))))))));
    *var_16 = ((/* implicit */val<int>) var_2);
    *var_17 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) max((var_10), (((/* implicit */val<signed char>) (val<bool>)1))))) ? (max(((+(var_4))), (((/* implicit */val<unsigned long long int>) var_14)))) : (((/* implicit */val<unsigned long long int>) max((((/* implicit */val<unsigned int>) var_8)), ((-(var_2))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 20352559U;
unsigned int var_2 = 3924697821U;
unsigned long long int var_4 = 10824291228323706442ULL;
unsigned char var_6 = (unsigned char)211;
bool var_8 = (bool)1;
long long int var_9 = 2375970160734511735LL;
signed char var_10 = (signed char)84;
unsigned char var_13 = (unsigned char)104;
short var_14 = (short)-7357;
int zero = 0;
bool var_15 = (bool)0;
int var_16 = 572108482;
int var_17 = -1090116427;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (bool)1;
    value_mismatch |= var_16 != -370269475;
    value_mismatch |= var_17 != -7357;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_4, var_6, var_8, var_9, var_10, var_13, var_14, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
