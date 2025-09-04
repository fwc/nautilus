/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8605
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8605
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
void test(val<unsigned int> var_0, val<unsigned int> var_2, val<unsigned int> var_3, val<int> var_8, val<unsigned char> var_9, val<signed char> var_11, val<unsigned long long int> var_12, val<unsigned long long int> var_13, val<short> var_16, val<int> zero, val<unsigned char*> var_18, val<long long int*> var_19, val<signed char*> var_20) {
    *var_18 = ((/* implicit */val<unsigned char>) min((var_3), (((((/* implicit */val<bool>) var_12)) ? (var_0) : (((/* implicit */val<unsigned int>) var_8))))));
    *var_19 += ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_16)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_11))) : (min((((var_13) - (((/* implicit */val<unsigned long long int>) var_2)))), (((/* implicit */val<unsigned long long int>) var_9))))));
    *var_20 = ((/* implicit */val<signed char>) var_0);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1734875955U;
unsigned int var_2 = 888652787U;
unsigned int var_3 = 2599079503U;
int var_8 = 1175084831;
unsigned char var_9 = (unsigned char)223;
signed char var_11 = (signed char)38;
unsigned long long int var_12 = 6554751788098232310ULL;
unsigned long long int var_13 = 12104948445545716006ULL;
short var_16 = (short)-2787;
int zero = 0;
unsigned char var_18 = (unsigned char)93;
long long int var_19 = 1489915100617954611LL;
signed char var_20 = (signed char)-77;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned char)51;
    value_mismatch |= var_19 != 1489915100617954649LL;
    value_mismatch |= var_20 != (signed char)51;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_8, var_9, var_11, var_12, var_13, var_16, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
