/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6047
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6047
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
void test(val<unsigned int> var_0, val<unsigned char> var_2, val<unsigned int> var_3, val<bool> var_6, val<bool> var_7, val<unsigned int> var_11, val<int> zero, val<bool*> var_13, val<int*> var_14) {
    *var_13 = ((/* implicit */val<bool>) min((*var_13), (((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_3)) ? ((+(((/* implicit */val<int>) (val<signed char>)-107)))) : (((/* implicit */val<int>) min(((!(((/* implicit */val<bool>) 1511164949)))), (((var_7) || (((/* implicit */val<bool>) var_3))))))))))));
    *var_14 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) (+(((val<long long int>) (val<signed char>)109))))) ? (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<int>) (val<short>)-26)) : (((/* implicit */val<int>) (val<bool>)0))))) ? (((/* implicit */val<int>) max(((val<unsigned char>)0), (var_2)))) : (((((/* implicit */val<int>) (val<signed char>)107)) >> (((/* implicit */val<int>) var_6))))))) : (var_11)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4212671734U;
unsigned char var_2 = (unsigned char)78;
unsigned int var_3 = 1766506556U;
bool var_6 = (bool)1;
bool var_7 = (bool)0;
unsigned int var_11 = 1656731054U;
int zero = 0;
bool var_13 = (bool)1;
int var_14 = -872330248;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != 78;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_6, var_7, var_11, zero, &var_13, &var_14);
  checksum();
}
