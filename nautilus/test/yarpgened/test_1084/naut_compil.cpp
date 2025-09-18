/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1084
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1084
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
void test(val<long long int> var_5, val<signed char> var_8, val<unsigned long long int> var_11, val<long long int> var_13, val<int> zero, val<unsigned int*> var_16, val<short*> var_17) {
    *var_16 = ((/* implicit */val<unsigned int>) min((((/* implicit */val<unsigned long long int>) var_5)), (var_11)));
    *var_17 |= ((/* implicit */val<short>) ((((/* implicit */val<bool>) ((((((/* implicit */val<bool>) 70368744177408ULL)) ? (((/* implicit */val<int>) (val<short>)-1693)) : (429836680))) + ((+(((/* implicit */val<int>) var_8))))))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_8))) : ((+(var_13)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -6661801415558173074LL;
signed char var_8 = (signed char)57;
unsigned long long int var_11 = 1329819061626194839ULL;
long long int var_13 = 8344279576681655225LL;
int zero = 0;
unsigned int var_16 = 2930512278U;
short var_17 = (short)8448;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 264620951U;
    value_mismatch |= var_17 != (short)8505;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_8, var_11, var_13, zero, &var_16, &var_17);
  checksum();
}
