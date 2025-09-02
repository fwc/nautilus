/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2027
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2027
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
void test(val<int> var_0, val<unsigned int> var_1, val<unsigned int> var_3, val<unsigned short> var_4, val<unsigned short> var_6, val<bool> var_7, val<short> var_9, val<unsigned short> var_11, val<unsigned char> var_12, val<unsigned short> var_13, val<bool> var_15, val<unsigned short> var_17, val<int> zero, val<unsigned long long int*> var_19, val<short*> var_20, val<unsigned short*> var_21) {
    *var_19 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_6)) ? (min((var_3), (((/* implicit */val<unsigned int>) var_17)))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) min((((/* implicit */val<signed char>) var_7)), ((val<signed char>)98)))))))) ? (((/* implicit */val<int>) ((((/* implicit */val<bool>) (val<unsigned short>)31932)) && (((/* implicit */val<bool>) (val<unsigned short>)0))))) : (((/* implicit */val<int>) var_4))));
    *var_20 = ((/* implicit */val<short>) (-(((/* implicit */val<int>) var_15))));
    *var_21 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<short>)1023)) ? (((/* implicit */val<int>) var_13)) : (((/* implicit */val<int>) var_12))))) ? (max((var_1), (((/* implicit */val<unsigned int>) (val<short>)-1024)))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) max((var_9), ((val<short>)1023)))))))) ? (((/* implicit */val<int>) var_11)) : (var_0)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 893983453;
unsigned int var_1 = 1311750079U;
unsigned int var_3 = 2534498037U;
unsigned short var_4 = (unsigned short)11824;
unsigned short var_6 = (unsigned short)42470;
bool var_7 = (bool)1;
short var_9 = (short)-25279;
unsigned short var_11 = (unsigned short)36540;
unsigned char var_12 = (unsigned char)48;
unsigned short var_13 = (unsigned short)45766;
bool var_15 = (bool)1;
unsigned short var_17 = (unsigned short)61942;
int zero = 0;
unsigned long long int var_19 = 17081391486973006021ULL;
short var_20 = (short)3578;
unsigned short var_21 = (unsigned short)2064;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 0ULL;
    value_mismatch |= var_20 != (short)-1;
    value_mismatch |= var_21 != (unsigned short)36540;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_4, var_6, var_7, var_9, var_11, var_12, var_13, var_15, var_17, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
