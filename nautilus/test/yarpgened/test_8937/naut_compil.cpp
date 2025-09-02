/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8937
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8937
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
void test(val<int> var_1, val<unsigned int> var_4, val<unsigned char> var_12, val<int> zero, val<unsigned char*> var_15, val<signed char*> var_16, val<int*> var_17) {
    *var_15 = ((/* implicit */val<unsigned char>) min((((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) min((((/* implicit */val<short>) (val<signed char>)60)), ((val<short>)-19329)))) ? (1714917103) : ((-(((/* implicit */val<int>) (val<unsigned char>)250))))))), (var_4)));
    *var_16 = ((/* implicit */val<signed char>) (val<unsigned short>)65522);
    *var_17 = ((/* implicit */val<int>) min((max((11180611963277384145ULL), (((/* implicit */val<unsigned long long int>) var_1)))), (((/* implicit */val<unsigned long long int>) max((((1590888687U) | (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<bool>)1))))), (((/* implicit */val<unsigned int>) (+(((/* implicit */val<int>) var_12))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -194117140;
unsigned int var_4 = 1667431207U;
unsigned char var_12 = (unsigned char)61;
int zero = 0;
unsigned char var_15 = (unsigned char)179;
signed char var_16 = (signed char)42;
int var_17 = 1908681036;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned char)39;
    value_mismatch |= var_16 != (signed char)-14;
    value_mismatch |= var_17 != 1590888687;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_12, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
