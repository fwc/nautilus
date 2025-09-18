/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5125
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5125
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
void test(val<signed char> var_0, val<bool> var_1, val<signed char> var_2, val<int> var_3, val<int> var_4, val<long long int> var_5, val<unsigned int> var_6, val<bool> var_10, val<long long int> var_12, val<signed char> var_13, val<int> var_14, val<unsigned int> var_15, val<int> zero, val<signed char*> var_16, val<unsigned char*> var_17) {
    *var_16 &= ((/* implicit */val<signed char>) (((!(((/* implicit */val<bool>) min((((/* implicit */val<unsigned int>) var_3)), (var_15)))))) ? (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) min((var_5), (var_12)))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) min((var_0), (var_2))))) : (((var_1) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_10))) : (var_6)))))) : (min((max((((/* implicit */val<long long int>) var_3)), (var_5))), (var_12)))));
    *var_17 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) var_14)) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<int>) var_13)) % (((/* implicit */val<int>) var_10)))))))) : (((((((/* implicit */val<bool>) var_14)) ? (var_4) : (var_4))) % (((((/* implicit */val<int>) var_1)) ^ (((/* implicit */val<int>) var_0))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-4;
bool var_1 = (bool)0;
signed char var_2 = (signed char)81;
int var_3 = -283865537;
int var_4 = 298277782;
long long int var_5 = -7710834023646736919LL;
unsigned int var_6 = 3367158091U;
bool var_10 = (bool)1;
long long int var_12 = -1185815075732411116LL;
signed char var_13 = (signed char)-11;
int var_14 = -1384935995;
unsigned int var_15 = 1380558740U;
int zero = 0;
signed char var_16 = (signed char)21;
unsigned char var_17 = (unsigned char)28;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (signed char)20;
    value_mismatch |= var_17 != (unsigned char)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_10, var_12, var_13, var_14, var_15, zero, &var_16, &var_17);
  checksum();
}
