/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4441
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4441
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
void test(val<short> var_3, val<bool> var_4, val<unsigned char> var_5, val<unsigned int> var_6, val<unsigned char> var_7, val<unsigned char> var_9, val<unsigned short> var_10, val<unsigned long long int> var_11, val<int> var_13, val<int> zero, val<signed char*> var_14, val<bool*> var_15, val<unsigned long long int*> var_16, val<bool*> var_17) {
    *var_14 += ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) 1949108089)) ? (-1949108099) : (((/* implicit */val<int>) (val<unsigned short>)7492))));
    *var_15 = ((((/* implicit */val<bool>) var_13)) && (((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_5)) ? (481539416) : (((/* implicit */val<int>) var_9))))) ? (var_6) : (var_6)))));
    *var_16 = ((((/* implicit */val<bool>) max((var_11), (((/* implicit */val<unsigned long long int>) 1949108093))))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<int>) var_3)) < (-1949108089))))) : (((((/* implicit */val<bool>) var_7)) ? (((((/* implicit */val<bool>) (val<signed char>)-1)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)-3))) : (0ULL))) : (((/* implicit */val<unsigned long long int>) max((481539416), (((/* implicit */val<int>) var_4))))))));
    *var_17 = ((/* implicit */val<bool>) var_10);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-822;
bool var_4 = (bool)0;
unsigned char var_5 = (unsigned char)254;
unsigned int var_6 = 1285170316U;
unsigned char var_7 = (unsigned char)4;
unsigned char var_9 = (unsigned char)245;
unsigned short var_10 = (unsigned short)11523;
unsigned long long int var_11 = 12331655016574813507ULL;
int var_13 = 1702034193;
int zero = 0;
signed char var_14 = (signed char)50;
bool var_15 = (bool)1;
unsigned long long int var_16 = 18109103723809141581ULL;
bool var_17 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (signed char)-81;
    value_mismatch |= var_15 != (bool)1;
    value_mismatch |= var_16 != 0ULL;
    value_mismatch |= var_17 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_5, var_6, var_7, var_9, var_10, var_11, var_13, zero, &var_14, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
