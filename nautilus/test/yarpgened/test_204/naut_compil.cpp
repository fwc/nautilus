/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 204
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=204
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
void test(val<long long int> var_0, val<long long int> var_1, val<unsigned int> var_3, val<unsigned int> var_4, val<bool> var_5, val<long long int> var_8, val<bool> var_9, val<unsigned short> var_10, val<bool> var_11, val<long long int> var_12, val<bool> var_13, val<unsigned char> var_15, val<int> zero, val<unsigned char*> var_16, val<signed char*> var_17, val<int*> var_18, val<int*> var_19, val<bool*> var_20) {
    *var_16 = ((/* implicit */val<unsigned char>) -5258945258689594471LL);
    *var_17 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) ((var_11) ? (var_0) : (((((/* implicit */val<bool>) (val<unsigned short>)35319)) ? (var_12) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_15)))))))) ? (((var_4) / (((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) (val<unsigned char>)242)) << (((((/* implicit */val<int>) (val<signed char>)-107)) + (114)))))))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (!(var_13)))))));
    *var_18 = ((/* implicit */val<int>) max((((/* implicit */val<long long int>) (val<bool>)1)), (((((/* implicit */val<long long int>) max((var_3), (((/* implicit */val<unsigned int>) var_10))))) % (((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_11))) : (-5258945258689594471LL)))))));
    *var_19 = ((/* implicit */val<int>) max((*var_19), (((/* implicit */val<int>) ((max((var_9), ((!(((/* implicit */val<bool>) var_4)))))) ? (var_0) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_10))))))));
    *var_20 = ((/* implicit */val<bool>) max((((val<long long int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_5))) * (var_4)))), (((((/* implicit */val<bool>) (val<unsigned char>)12)) ? (((/* implicit */val<long long int>) 691084268)) : (((var_1) * (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_9)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3403329748983500382LL;
long long int var_1 = -2169708473926156559LL;
unsigned int var_3 = 4178348621U;
unsigned int var_4 = 2452250177U;
bool var_5 = (bool)1;
long long int var_8 = 8932469188410509787LL;
bool var_9 = (bool)1;
unsigned short var_10 = (unsigned short)8542;
bool var_11 = (bool)1;
long long int var_12 = -3944385681272658713LL;
bool var_13 = (bool)0;
unsigned char var_15 = (unsigned char)56;
int zero = 0;
unsigned char var_16 = (unsigned char)81;
signed char var_17 = (signed char)-39;
int var_18 = -1695614944;
int var_19 = -1764594103;
bool var_20 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned char)153;
    value_mismatch |= var_17 != (signed char)62;
    value_mismatch |= var_18 != 1;
    value_mismatch |= var_19 != 95309406;
    value_mismatch |= var_20 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_4, var_5, var_8, var_9, var_10, var_11, var_12, var_13, var_15, zero, &var_16, &var_17, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
