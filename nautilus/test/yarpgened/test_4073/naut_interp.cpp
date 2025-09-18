/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4073
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4073
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
void test(val<long long int> var_1, val<signed char> var_3, val<signed char> var_5, val<unsigned long long int> var_6, val<short> var_14, val<signed char> var_15, val<int> zero, val<unsigned char*> var_18, val<unsigned char*> var_19, val<short*> var_20) {
    *var_18 |= ((/* implicit */val<unsigned char>) var_1);
    *var_19 = ((/* implicit */val<unsigned char>) ((((((((((/* implicit */val<int>) var_14)) + (2147483647))) << (((/* implicit */val<int>) (val<bool>)0)))) << (((((((/* implicit */val<bool>) -2037964048538015807LL)) ? (((/* implicit */val<int>) (val<unsigned char>)104)) : (((/* implicit */val<int>) (val<signed char>)-3)))) - (104))))) == (((/* implicit */val<int>) (val<unsigned char>)109))));
    *var_20 = ((/* implicit */val<short>) min((*var_20), (((/* implicit */val<short>) ((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<int>) var_5)) : (((((/* implicit */val<int>) var_3)) << (((((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<int>) var_3)) : (((/* implicit */val<int>) var_15)))) - (56))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3240324879225984327LL;
signed char var_3 = (signed char)67;
signed char var_5 = (signed char)34;
unsigned long long int var_6 = 1673976323731031210ULL;
short var_14 = (short)-18755;
signed char var_15 = (signed char)-102;
int zero = 0;
unsigned char var_18 = (unsigned char)165;
unsigned char var_19 = (unsigned char)121;
short var_20 = (short)-7093;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned char)189;
    value_mismatch |= var_19 != (unsigned char)0;
    value_mismatch |= var_20 != (short)-7093;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_5, var_6, var_14, var_15, zero, &var_18, &var_19, &var_20);
  checksum();
}
