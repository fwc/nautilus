/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4830
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4830
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
void test(val<short> var_0, val<signed char> var_5, val<long long int> var_12, val<unsigned int> var_16, val<int> var_17, val<unsigned long long int> var_18, val<int> zero, val<unsigned int*> var_20, val<short*> var_21, val<short*> var_22, val<unsigned long long int*> var_23) {
    *var_20 = min((min((((/* implicit */val<unsigned int>) min((((/* implicit */val<short>) var_5)), ((val<short>)9064)))), (min((((/* implicit */val<unsigned int>) (val<short>)-9066)), (var_16))))), (((/* implicit */val<unsigned int>) var_0)));
    *var_21 = ((val<short>) ((val<int>) var_18));
    *var_22 = ((/* implicit */val<short>) (-((((-(((/* implicit */val<int>) (val<short>)9066)))) & (var_17)))));
    *var_23 = ((/* implicit */val<unsigned long long int>) ((var_12) < (((/* implicit */val<long long int>) ((/* implicit */val<int>) min(((val<short>)9082), ((val<short>)-32740)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11808;
signed char var_5 = (signed char)81;
long long int var_12 = 1670903020133910692LL;
unsigned int var_16 = 3866124671U;
int var_17 = 392565173;
unsigned long long int var_18 = 17038551867708044190ULL;
int zero = 0;
unsigned int var_20 = 3167638153U;
short var_21 = (short)2245;
short var_22 = (short)317;
unsigned long long int var_23 = 4930446917668586437ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 81U;
    value_mismatch |= var_21 != (short)29598;
    value_mismatch |= var_22 != (short)-4244;
    value_mismatch |= var_23 != 0ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_5, var_12, var_16, var_17, var_18, zero, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
