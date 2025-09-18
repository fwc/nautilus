/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1650
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1650
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
void test(val<unsigned int> var_2, val<unsigned long long int> var_4, val<signed char> var_17, val<int> zero, val<unsigned short*> var_18, val<unsigned long long int*> var_19) {
    *var_18 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_17))) / (((val<long long int>) ((((/* implicit */val<bool>) var_4)) ? (18014398509481984ULL) : (((/* implicit */val<unsigned long long int>) -2766001335792934866LL)))))));
    *var_19 = ((/* implicit */val<unsigned long long int>) ((((((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_2))))) + (((/* implicit */val<int>) var_17)))) / (((/* implicit */val<int>) ((18446744073709551607ULL) > (14ULL))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 945074946U;
unsigned long long int var_4 = 12875846683801403168ULL;
signed char var_17 = (signed char)73;
int zero = 0;
unsigned short var_18 = (unsigned short)43953;
unsigned long long int var_19 = 15595180604268433202ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned short)0;
    value_mismatch |= var_19 != 73ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_17, zero, &var_18, &var_19);
  checksum();
}
