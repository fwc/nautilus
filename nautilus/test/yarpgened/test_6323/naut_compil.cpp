/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6323
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6323
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
void test(val<unsigned char> var_4, val<long long int> var_5, val<unsigned char> var_6, val<unsigned int> var_7, val<int> var_10, val<long long int> var_12, val<signed char> var_13, val<unsigned int> var_14, val<int> zero, val<unsigned int*> var_15, val<signed char*> var_16, val<unsigned char*> var_17, val<signed char*> var_18, val<int*> var_19) {
    *var_15 = ((/* implicit */val<unsigned int>) var_6);
    *var_16 = ((/* implicit */val<signed char>) (-(max((((((/* implicit */val<bool>) var_10)) ? (var_12) : (((/* implicit */val<long long int>) 1073741823)))), (((/* implicit */val<long long int>) (!(((/* implicit */val<bool>) var_5)))))))));
    *var_17 = ((/* implicit */val<unsigned char>) (val<bool>)0);
    *var_18 = ((/* implicit */val<signed char>) var_5);
    *var_19 = ((/* implicit */val<int>) max((((/* implicit */val<long long int>) ((val<unsigned char>) max((var_14), (((/* implicit */val<unsigned int>) var_13)))))), (((min((var_12), (((/* implicit */val<long long int>) var_14)))) / (((/* implicit */val<long long int>) ((var_7) / (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_4))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)212;
long long int var_5 = -7844009477994819373LL;
unsigned char var_6 = (unsigned char)221;
unsigned int var_7 = 3908773095U;
int var_10 = -1781965551;
long long int var_12 = -6596075284350168637LL;
signed char var_13 = (signed char)-26;
unsigned int var_14 = 3419729654U;
int zero = 0;
unsigned int var_15 = 870251354U;
signed char var_16 = (signed char)102;
unsigned char var_17 = (unsigned char)29;
signed char var_18 = (signed char)85;
int var_19 = 1550146369;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 221U;
    value_mismatch |= var_16 != (signed char)0;
    value_mismatch |= var_17 != (unsigned char)0;
    value_mismatch |= var_18 != (signed char)-45;
    value_mismatch |= var_19 != 230;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_5, var_6, var_7, var_10, var_12, var_13, var_14, zero, &var_15, &var_16, &var_17, &var_18, &var_19);
  checksum();
}
