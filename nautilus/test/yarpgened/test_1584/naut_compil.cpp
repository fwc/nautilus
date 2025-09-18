/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1584
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1584
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
void test(val<signed char> var_0, val<unsigned char> var_3, val<unsigned int> var_4, val<int> var_6, val<int> zero, val<unsigned char*> var_11, val<unsigned int*> var_12) {
    *var_11 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) ((val<unsigned long long int>) ((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<int>) (val<unsigned char>)13)) : (var_6))))) ? ((-((+(var_4))))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (!((!(((/* implicit */val<bool>) var_0))))))))));
    *var_12 = ((/* implicit */val<unsigned int>) var_3);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)12;
unsigned char var_3 = (unsigned char)119;
unsigned int var_4 = 1882511320U;
int var_6 = -154908129;
int zero = 0;
unsigned char var_11 = (unsigned char)174;
unsigned int var_12 = 2440923192U;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (unsigned char)40;
    value_mismatch |= var_12 != 119U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_4, var_6, zero, &var_11, &var_12);
  checksum();
}
