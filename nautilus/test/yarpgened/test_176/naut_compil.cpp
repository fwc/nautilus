/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 176
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=176
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
void test(val<long long int> var_1, val<signed char> var_4, val<int> var_6, val<unsigned short> var_7, val<unsigned long long int> var_10, val<signed char> var_11, val<unsigned long long int> var_12, val<unsigned long long int> var_13, val<unsigned short> var_14, val<int> zero, val<unsigned long long int*> var_16, val<unsigned long long int*> var_17, val<unsigned long long int*> var_18, val<signed char*> var_19) {
    *var_16 = ((/* implicit */val<unsigned long long int>) -1191971733508257862LL);
    *var_17 = max((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) ((((/* implicit */val<bool>) var_4)) || (((/* implicit */val<bool>) 11ULL))))) <= (((((/* implicit */val<int>) var_4)) / (((/* implicit */val<int>) var_14))))))), (15857134591211687058ULL));
    *var_18 = ((/* implicit */val<unsigned long long int>) min((*var_18), (((/* implicit */val<unsigned long long int>) ((((((/* implicit */val<bool>) var_7)) ? (((var_13) | (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_11))))) : (((/* implicit */val<unsigned long long int>) var_1)))) <= (8395135088488183956ULL))))));
    *var_19 = ((/* implicit */val<signed char>) (-(((((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)1))) : (10051608985221367660ULL))) ^ (((((/* implicit */val<bool>) var_6)) ? (var_12) : (10051608985221367675ULL)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2794909144376689208LL;
signed char var_4 = (signed char)30;
int var_6 = -1581215004;
unsigned short var_7 = (unsigned short)4225;
unsigned long long int var_10 = 14533003556121029047ULL;
signed char var_11 = (signed char)48;
unsigned long long int var_12 = 3713165669455751746ULL;
unsigned long long int var_13 = 8398983975312509662ULL;
unsigned short var_14 = (unsigned short)64556;
int zero = 0;
unsigned long long int var_16 = 7742493832056817399ULL;
unsigned long long int var_17 = 6636747755184423865ULL;
unsigned long long int var_18 = 12727609904843002577ULL;
signed char var_19 = (signed char)65;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 17254772340201293754ULL;
    value_mismatch |= var_17 != 15857134591211687058ULL;
    value_mismatch |= var_18 != 0ULL;
    value_mismatch |= var_19 != (signed char)-67;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_6, var_7, var_10, var_11, var_12, var_13, var_14, zero, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
