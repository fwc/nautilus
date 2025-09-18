/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4752
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4752
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
void test(val<int> var_1, val<long long int> var_3, val<unsigned long long int> var_4, val<unsigned long long int> var_5, val<short> var_9, val<unsigned long long int> var_10, val<unsigned long long int> var_13, val<int> zero, val<unsigned int*> var_15, val<unsigned long long int*> var_16, val<short*> var_17, val<long long int*> var_18) {
    *var_15 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) (((+(var_1))) % (((/* implicit */val<int>) ((val<short>) var_3)))))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_9))) : ((~((~(16276461868207428644ULL)))))));
    *var_16 = ((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) var_10))));
    *var_17 = ((/* implicit */val<short>) var_13);
    *var_18 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) max((((((/* implicit */val<bool>) var_10)) ? (var_13) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<short>)-28649))))), (var_10)))) ? ((-(min((((/* implicit */val<unsigned long long int>) var_9)), (var_4))))) : (var_5)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 553668925;
long long int var_3 = 3739685107524246321LL;
unsigned long long int var_4 = 14312482458692496397ULL;
unsigned long long int var_5 = 14649960531040653616ULL;
short var_9 = (short)-5362;
unsigned long long int var_10 = 6653696533528458700ULL;
unsigned long long int var_13 = 18110627565801679622ULL;
int zero = 0;
unsigned int var_15 = 2630634806U;
unsigned long long int var_16 = 3136454132722932770ULL;
short var_17 = (short)19510;
long long int var_18 = -6536985891523302005LL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 4294961934U;
    value_mismatch |= var_16 != 0ULL;
    value_mismatch |= var_17 != (short)-21754;
    value_mismatch |= var_18 != 4134261615017055219LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_4, var_5, var_9, var_10, var_13, zero, &var_15, &var_16, &var_17, &var_18);
  checksum();
}
