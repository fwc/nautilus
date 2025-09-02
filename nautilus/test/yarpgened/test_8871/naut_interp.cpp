/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8871
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8871
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
void test(val<short> var_0, val<short> var_1, val<bool> var_2, val<long long int> var_5, val<signed char> var_7, val<unsigned int> var_8, val<unsigned char> var_9, val<int> zero, val<unsigned long long int*> var_11, val<unsigned short*> var_12) {
    *var_11 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) ((val<unsigned short>) (!(((/* implicit */val<bool>) (val<unsigned char>)200)))))) <= (((((/* implicit */val<int>) ((val<unsigned short>) 13071980056804243151ULL))) * (((/* implicit */val<int>) (!(((/* implicit */val<bool>) 5374764016905308465ULL)))))))));
    *var_12 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) var_5)) ? (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) var_9))))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((val<unsigned short>) -96274496)))) : (var_5))) : (((/* implicit */val<long long int>) min((((((/* implicit */val<bool>) (-9223372036854775807LL - 1LL))) ? (((/* implicit */val<int>) var_0)) : (((/* implicit */val<int>) var_1)))), (((/* implicit */val<int>) var_2)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13515;
short var_1 = (short)-341;
bool var_2 = (bool)1;
long long int var_5 = 6246369490979086486LL;
signed char var_7 = (signed char)54;
unsigned int var_8 = 1729466280U;
unsigned char var_9 = (unsigned char)107;
int zero = 0;
unsigned long long int var_11 = 17663861670396022652ULL;
unsigned short var_12 = (unsigned short)54044;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 1ULL;
    value_mismatch |= var_12 != (unsigned short)63424;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_5, var_7, var_8, var_9, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
