/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3677
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3677
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
void test(val<unsigned int> var_1, val<long long int> var_2, val<bool> var_4, val<unsigned long long int> var_15, val<unsigned int> var_19, val<int> zero, val<short*> var_20, val<int*> var_21, val<signed char*> var_22) {
    *var_20 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) var_19)) || (((/* implicit */val<bool>) ((((/* implicit */val<int>) var_4)) & ((+(((/* implicit */val<int>) (val<signed char>)122)))))))));
    *var_21 = ((/* implicit */val<int>) ((val<unsigned long long int>) min((((/* implicit */val<unsigned int>) (+(((/* implicit */val<int>) (val<signed char>)109))))), (var_1))));
    *var_22 += ((/* implicit */val<signed char>) ((min((((((/* implicit */val<bool>) (val<signed char>)(-127 - 1))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)122))) : (var_15))), (((/* implicit */val<unsigned long long int>) ((val<unsigned short>) (val<signed char>)120))))) & (((/* implicit */val<unsigned long long int>) var_2))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1175486451U;
long long int var_2 = 8341563549852298159LL;
bool var_4 = (bool)0;
unsigned long long int var_15 = 74532931892188316ULL;
unsigned int var_19 = 1105771583U;
int zero = 0;
short var_20 = (short)-29349;
int var_21 = 1368140365;
signed char var_22 = (signed char)25;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (short)1;
    value_mismatch |= var_21 != 109;
    value_mismatch |= var_22 != (signed char)65;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_4, var_15, var_19, zero, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
