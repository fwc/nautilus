/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8804
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8804
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
void test(val<signed char> var_1, val<unsigned int> var_6, val<signed char> var_9, val<unsigned long long int> var_10, val<unsigned int> var_16, val<int> zero, val<unsigned int*> var_18, val<unsigned char*> var_19, val<unsigned int*> var_20) {
    *var_18 -= ((/* implicit */val<unsigned int>) var_10);
    *var_19 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) max((((/* implicit */val<signed char>) (!(((/* implicit */val<bool>) var_1))))), (var_9))))) - (var_6)));
    *var_20 = (-(((var_16) >> (((((((/* implicit */val<int>) (val<unsigned short>)51715)) ^ (((/* implicit */val<int>) var_9)))) + (51817))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-59;
unsigned int var_6 = 3989080664U;
signed char var_9 = (signed char)-103;
unsigned long long int var_10 = 8239842210247805344ULL;
unsigned int var_16 = 1882708557U;
int zero = 0;
unsigned int var_18 = 2759185239U;
unsigned char var_19 = (unsigned char)51;
unsigned int var_20 = 2345599952U;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 962513335U;
    value_mismatch |= var_19 != (unsigned char)168;
    value_mismatch |= var_20 != 4059628727U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_6, var_9, var_10, var_16, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
