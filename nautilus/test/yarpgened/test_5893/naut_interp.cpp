/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5893
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5893
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
void test(val<int> var_0, val<short> var_1, val<short> var_2, val<int> var_4, val<unsigned char> var_5, val<long long int> var_6, val<short> var_7, val<short> var_8, val<bool> var_9, val<long long int> var_10, val<unsigned char> var_11, val<unsigned char> var_14, val<int> zero, val<bool*> var_20, val<long long int*> var_21) {
    *var_20 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((((/* implicit */val<int>) var_7)) + (2147483647))) >> (((((/* implicit */val<int>) var_2)) + (11600)))))) ? (((((/* implicit */val<bool>) var_0)) ? (-134217728LL) : (((/* implicit */val<long long int>) var_4)))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((val<short>) var_7))))))) ? (((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_14)) ? (((/* implicit */val<int>) var_11)) : (((/* implicit */val<int>) var_11))))) : ((-(var_10))))) : (((/* implicit */val<long long int>) ((((/* implicit */val<int>) ((val<short>) 6069277200703670598LL))) ^ (((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<int>) var_5)) : (((/* implicit */val<int>) var_9)))))))));
    *var_21 = (((!(((/* implicit */val<bool>) var_8)))) ? (((/* implicit */val<long long int>) ((((/* implicit */val<int>) ((val<bool>) var_1))) >> (((((((/* implicit */val<bool>) var_6)) ? (-4) : (-9))) + (6)))))) : (var_6));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1623866636;
short var_1 = (short)-8118;
short var_2 = (short)-11590;
int var_4 = 251149778;
unsigned char var_5 = (unsigned char)227;
long long int var_6 = 2983846843654807239LL;
short var_7 = (short)-9298;
short var_8 = (short)16040;
bool var_9 = (bool)1;
long long int var_10 = -3857146341067098933LL;
unsigned char var_11 = (unsigned char)213;
unsigned char var_14 = (unsigned char)183;
int zero = 0;
bool var_20 = (bool)0;
long long int var_21 = -4718265663796761138LL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (bool)1;
    value_mismatch |= var_21 != 2983846843654807239LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_14, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
