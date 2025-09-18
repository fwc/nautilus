/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4687
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4687
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
void test(val<signed char> var_0, val<unsigned short> var_1, val<int> var_2, val<unsigned int> var_4, val<signed char> var_5, val<unsigned int> var_7, val<int> var_9, val<unsigned int> var_10, val<int> var_11, val<long long int> var_12, val<signed char> var_14, val<int> var_15, val<int> zero, val<signed char*> var_16, val<signed char*> var_17, val<unsigned short*> var_18) {
    *var_16 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) max((var_11), (((/* implicit */val<int>) (val<signed char>)-41))))) ? (var_4) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_5)))))) ? (((((/* implicit */val<int>) var_0)) >> (((((((((/* implicit */val<int>) var_14)) + (2147483647))) >> (((/* implicit */val<int>) var_1)))) - (268435444))))) : (((/* implicit */val<int>) ((var_9) < (-1769211583))))));
    *var_17 = ((/* implicit */val<signed char>) min((((1769211583) != (var_15))), (((var_7) >= (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_11)) ? (var_2) : (((/* implicit */val<int>) var_5)))))))));
    *var_18 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_12)) ? (((/* implicit */val<long long int>) min((-1769211600), (1769211584)))) : (max((var_12), (((/* implicit */val<long long int>) -1769211584))))))) ? (((/* implicit */val<int>) var_1)) : (((/* implicit */val<int>) ((max((((/* implicit */val<unsigned int>) 1769211604)), (var_10))) != (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) 1769211572)) ? (-1769211585) : (((/* implicit */val<int>) (val<unsigned short>)0))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)59;
unsigned short var_1 = (unsigned short)3;
int var_2 = -361079591;
unsigned int var_4 = 324086664U;
signed char var_5 = (signed char)-26;
unsigned int var_7 = 1975389604U;
int var_9 = -2026501569;
unsigned int var_10 = 1801433666U;
int var_11 = 271925540;
long long int var_12 = 3883629664699244674LL;
signed char var_14 = (signed char)-16;
int var_15 = -324142917;
int zero = 0;
signed char var_16 = (signed char)-110;
signed char var_17 = (signed char)-115;
unsigned short var_18 = (unsigned short)43679;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (signed char)0;
    value_mismatch |= var_17 != (signed char)0;
    value_mismatch |= var_18 != (unsigned short)3;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_5, var_7, var_9, var_10, var_11, var_12, var_14, var_15, zero, &var_16, &var_17, &var_18);
  checksum();
}
