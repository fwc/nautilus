/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1165
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1165
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
void test(val<int> var_1, val<unsigned char> var_3, val<unsigned int> var_7, val<unsigned char> var_9, val<signed char> var_10, val<unsigned int> var_14, val<int> zero, val<unsigned int*> var_15, val<int*> var_16, val<unsigned int*> var_17, val<signed char*> var_18, val<bool*> var_19) {
    *var_15 = ((/* implicit */val<unsigned int>) (val<unsigned short>)48205);
    *var_16 += ((/* implicit */val<int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) (val<signed char>)32)) & (((/* implicit */val<int>) (val<signed char>)-41))))) ? (((/* implicit */val<int>) var_3)) : (((var_1) << (((((/* implicit */val<int>) (val<signed char>)12)) - (11)))))))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((val<signed char>) var_7)))) : (var_14)));
    *var_17 = ((/* implicit */val<unsigned int>) min((*var_17), (var_14)));
    *var_18 = ((/* implicit */val<signed char>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_10))) - (((((/* implicit */val<unsigned int>) -710468516)) - (((((/* implicit */val<bool>) (val<unsigned short>)34379)) ? (6291456U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)62308)))))))));
    *var_19 = ((/* implicit */val<bool>) (-(((/* implicit */val<int>) var_9))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1343417424;
unsigned char var_3 = (unsigned char)7;
unsigned int var_7 = 3293855148U;
unsigned char var_9 = (unsigned char)221;
signed char var_10 = (signed char)120;
unsigned int var_14 = 3996441281U;
int zero = 0;
unsigned int var_15 = 3831715665U;
int var_16 = 1114518721;
unsigned int var_17 = 4294348063U;
signed char var_18 = (signed char)-51;
bool var_19 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 48205U;
    value_mismatch |= var_16 != 1114518637;
    value_mismatch |= var_17 != 3996441281U;
    value_mismatch |= var_18 != (signed char)28;
    value_mismatch |= var_19 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_7, var_9, var_10, var_14, zero, &var_15, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
