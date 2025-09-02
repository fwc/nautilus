/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3134
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3134
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
void test(val<unsigned char> var_2, val<int> var_6, val<bool> var_9, val<int> var_10, val<long long int> var_11, val<unsigned long long int> var_12, val<unsigned int> var_16, val<int> var_18, val<int> zero, val<long long int*> var_20, val<unsigned char*> var_21, val<unsigned long long int*> var_22) {
    *var_20 = ((((/* implicit */val<bool>) ((((var_12) << (((var_18) + (2059661203))))) + (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) var_6)) || (((/* implicit */val<bool>) var_10))))))))) ? (((val<long long int>) ((((/* implicit */val<long long int>) var_6)) ^ (var_11)))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((val<unsigned short>) ((var_12) ^ (var_12)))))));
    *var_21 = ((/* implicit */val<unsigned char>) ((((var_16) | (((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) var_9)) | (var_6)))))) - (((/* implicit */val<unsigned int>) var_18))));
    *var_22 = ((/* implicit */val<unsigned long long int>) var_2);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)38;
int var_6 = 539201589;
bool var_9 = (bool)1;
int var_10 = 1452435653;
long long int var_11 = 2809474066022456771LL;
unsigned long long int var_12 = 10695546505177167526ULL;
unsigned int var_16 = 2716462152U;
int var_18 = -2059661195;
int zero = 0;
long long int var_20 = -3102941310641212111LL;
unsigned char var_21 = (unsigned char)175;
unsigned long long int var_22 = 2952583956074764397ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 2809474066557390326LL;
    value_mismatch |= var_21 != (unsigned char)8;
    value_mismatch |= var_22 != 38ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_6, var_9, var_10, var_11, var_12, var_16, var_18, zero, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
