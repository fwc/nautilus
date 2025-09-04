/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6096
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6096
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
void test(val<unsigned short> var_0, val<unsigned char> var_3, val<bool> var_4, val<unsigned long long int> var_7, val<unsigned long long int> var_8, val<signed char> var_9, val<int> zero, val<bool*> var_11, val<signed char*> var_12, val<unsigned long long int*> var_13, val<unsigned int*> var_14) {
    *var_11 = ((/* implicit */val<bool>) (-(min((((((/* implicit */val<bool>) (val<unsigned short>)63)) ? (((/* implicit */val<int>) var_3)) : (((/* implicit */val<int>) (val<unsigned short>)41941)))), (((/* implicit */val<int>) var_0))))));
    *var_12 = ((/* implicit */val<signed char>) ((((/* implicit */val<int>) var_3)) < (((/* implicit */val<int>) var_9))));
    *var_13 = ((/* implicit */val<unsigned long long int>) (!(var_4)));
    *var_14 = ((/* implicit */val<unsigned int>) ((var_4) ? (((((/* implicit */val<bool>) min((((/* implicit */val<unsigned short>) var_3)), (var_0)))) ? (((var_7) & (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_3))))) : (var_8))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_0)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)28636;
unsigned char var_3 = (unsigned char)21;
bool var_4 = (bool)0;
unsigned long long int var_7 = 11972376071443681156ULL;
unsigned long long int var_8 = 8059424255458947700ULL;
signed char var_9 = (signed char)50;
int zero = 0;
bool var_11 = (bool)1;
signed char var_12 = (signed char)43;
unsigned long long int var_13 = 3006232091789509758ULL;
unsigned int var_14 = 1947593999U;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (bool)1;
    value_mismatch |= var_12 != (signed char)1;
    value_mismatch |= var_13 != 1ULL;
    value_mismatch |= var_14 != 28636U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_4, var_7, var_8, var_9, zero, &var_11, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
