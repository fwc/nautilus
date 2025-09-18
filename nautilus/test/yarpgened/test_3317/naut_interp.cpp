/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3317
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3317
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
void test(val<signed char> var_2, val<short> var_3, val<long long int> var_4, val<short> var_5, val<bool> var_11, val<unsigned int> var_15, val<int> zero, val<int*> var_17, val<signed char*> var_18) {
    *var_17 = ((/* implicit */val<int>) ((((val<bool>) ((((/* implicit */val<bool>) var_15)) ? (((/* implicit */val<int>) var_5)) : (((/* implicit */val<int>) (val<bool>)1))))) ? (((/* implicit */val<long long int>) ((((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<int>) var_11)) : (((/* implicit */val<int>) var_2)))) + (((/* implicit */val<int>) var_2))))) : (var_4)));
    *var_18 = ((/* implicit */val<signed char>) (+(((/* implicit */val<int>) ((val<unsigned char>) 281200098803712LL)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)110;
short var_3 = (short)274;
long long int var_4 = 4303410734521283409LL;
short var_5 = (short)30330;
bool var_11 = (bool)1;
unsigned int var_15 = 2331001874U;
int zero = 0;
int var_17 = -1913643120;
signed char var_18 = (signed char)-116;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 111;
    value_mismatch |= var_18 != (signed char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_4, var_5, var_11, var_15, zero, &var_17, &var_18);
  checksum();
}
