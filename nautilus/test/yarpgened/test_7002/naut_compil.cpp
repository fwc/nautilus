/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7002
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7002
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
void test(val<unsigned char> var_1, val<unsigned int> var_5, val<unsigned short> var_8, val<int> zero, val<short*> var_12, val<long long int*> var_13, val<unsigned int*> var_14) {
    *var_12 = ((/* implicit */val<short>) var_8);
    *var_13 = ((/* implicit */val<long long int>) (+(((/* implicit */val<int>) var_1))));
    *var_14 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) -1251094501)) || (((/* implicit */val<bool>) max((min((var_5), (((/* implicit */val<unsigned int>) -791740541)))), (((/* implicit */val<unsigned int>) ((val<int>) 9223372036854775807LL))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)73;
unsigned int var_5 = 344024415U;
unsigned short var_8 = (unsigned short)22007;
int zero = 0;
short var_12 = (short)7501;
long long int var_13 = -8317744229843075652LL;
unsigned int var_14 = 1991919384U;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (short)22007;
    value_mismatch |= var_13 != 73LL;
    value_mismatch |= var_14 != 1U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_5, var_8, zero, &var_12, &var_13, &var_14);
  checksum();
}
