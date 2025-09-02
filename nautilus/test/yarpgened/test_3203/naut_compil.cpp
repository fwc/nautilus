/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3203
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3203
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
void test(val<long long int> var_4, val<unsigned short> var_5, val<long long int> var_6, val<unsigned long long int> var_13, val<unsigned short> var_18, val<int> zero, val<signed char*> var_20, val<unsigned int*> var_21) {
    *var_20 = ((/* implicit */val<signed char>) (!(((/* implicit */val<bool>) 131071LL))));
    *var_21 = ((/* implicit */val<unsigned int>) max((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_18)) ? ((+(var_4))) : (min((var_6), (((/* implicit */val<long long int>) (val<short>)-1482))))))), (min((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) 434284315U)) && (((/* implicit */val<bool>) var_5))))), (max((var_13), (((/* implicit */val<unsigned long long int>) (val<short>)-1507))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -1992394119704568353LL;
unsigned short var_5 = (unsigned short)53788;
long long int var_6 = -9196138382209100942LL;
unsigned long long int var_13 = 3518303784039027271ULL;
unsigned short var_18 = (unsigned short)38543;
int zero = 0;
signed char var_20 = (signed char)-26;
unsigned int var_21 = 3745135342U;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (signed char)0;
    value_mismatch |= var_21 != 2993593823U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_5, var_6, var_13, var_18, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
