/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4853
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4853
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
void test(val<bool> var_2, val<unsigned int> var_5, val<int> var_8, val<unsigned char> var_14, val<unsigned long long int> var_16, val<int> zero, val<long long int*> var_19, val<long long int*> var_20, val<unsigned int*> var_21, val<long long int*> var_22) {
    *var_19 = ((/* implicit */val<long long int>) var_14);
    *var_20 = ((/* implicit */val<long long int>) max((((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) (-(((/* implicit */val<int>) (val<unsigned char>)182))))) == (((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<short>)(-32767 - 1)))) : (18104614897367924406ULL)))))), (var_8)));
    *var_21 = ((/* implicit */val<unsigned int>) var_16);
    *var_22 = ((/* implicit */val<long long int>) (~(((/* implicit */val<int>) var_2))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_2 = (bool)1;
unsigned int var_5 = 4094896562U;
int var_8 = 860085974;
unsigned char var_14 = (unsigned char)156;
unsigned long long int var_16 = 9085199397769953579ULL;
int zero = 0;
long long int var_19 = 9170608274306476662LL;
long long int var_20 = -6747821776198115971LL;
unsigned int var_21 = 1261718226U;
long long int var_22 = 8988622998289616150LL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 156LL;
    value_mismatch |= var_20 != 860085974LL;
    value_mismatch |= var_21 != 2175516971U;
    value_mismatch |= var_22 != -2LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_8, var_14, var_16, zero, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
