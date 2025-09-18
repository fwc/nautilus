/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4163
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4163
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
void test(val<bool> var_2, val<long long int> var_3, val<unsigned char> var_4, val<signed char> var_7, val<short> var_8, val<long long int> var_11, val<signed char> var_12, val<short> var_14, val<int> zero, val<unsigned short*> var_16, val<long long int*> var_17) {
    *var_16 = ((/* implicit */val<unsigned short>) min((((((/* implicit */val<int>) (val<bool>)1)) / (((/* implicit */val<int>) (val<unsigned char>)35)))), (((/* implicit */val<int>) (val<unsigned char>)233))));
    *var_17 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) min((((/* implicit */val<long long int>) min((((/* implicit */val<unsigned char>) var_2)), (var_4)))), (max((var_3), (((/* implicit */val<long long int>) var_7))))))) ? (((((/* implicit */val<bool>) var_14)) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_12))))) : (((/* implicit */val<int>) ((val<bool>) var_8))))) : (max((((/* implicit */val<int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned char>)35))) <= (var_11)))), ((-(((/* implicit */val<int>) (val<unsigned char>)169))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_2 = (bool)0;
long long int var_3 = 3793066351476893920LL;
unsigned char var_4 = (unsigned char)112;
signed char var_7 = (signed char)111;
short var_8 = (short)-15887;
long long int var_11 = 6031776155425975242LL;
signed char var_12 = (signed char)-89;
short var_14 = (short)2989;
int zero = 0;
unsigned short var_16 = (unsigned short)57029;
long long int var_17 = 7848419659578031144LL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned short)0;
    value_mismatch |= var_17 != 1LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_4, var_7, var_8, var_11, var_12, var_14, zero, &var_16, &var_17);
  checksum();
}
