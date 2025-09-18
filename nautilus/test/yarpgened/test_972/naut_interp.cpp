/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 972
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=972
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
void test(val<unsigned long long int> var_10, val<short> var_17, val<int> zero, val<short*> var_18, val<signed char*> var_19, val<int*> var_20) {
    *var_18 = ((/* implicit */val<short>) min((*var_18), (var_17)));
    *var_19 = max(((val<signed char>)-90), (((/* implicit */val<signed char>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) 5257284542816153609ULL)) ? (var_10) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)89))))))))));
    *var_20 -= ((/* implicit */val<int>) (val<signed char>)-90);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_10 = 16430807519031867393ULL;
short var_17 = (short)-20904;
int zero = 0;
short var_18 = (short)24899;
signed char var_19 = (signed char)-117;
int var_20 = -1128478968;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (short)-20904;
    value_mismatch |= var_19 != (signed char)0;
    value_mismatch |= var_20 != -1128478878;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_10, var_17, zero, &var_18, &var_19, &var_20);
  checksum();
}
