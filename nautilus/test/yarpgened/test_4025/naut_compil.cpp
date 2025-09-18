/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4025
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4025
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
void test(val<long long int> var_0, val<signed char> var_3, val<unsigned long long int> var_4, val<signed char> var_8, val<unsigned char> var_10, val<int> zero, val<unsigned long long int*> var_16, val<short*> var_17) {
    *var_16 = ((/* implicit */val<unsigned long long int>) min((var_10), (((/* implicit */val<unsigned char>) ((min((((/* implicit */val<unsigned long long int>) var_0)), (var_4))) >= (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) min((var_10), (((/* implicit */val<unsigned char>) var_8)))))))))));
    *var_17 = ((/* implicit */val<short>) var_3);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 139506930099165255LL;
signed char var_3 = (signed char)-15;
unsigned long long int var_4 = 12946947407713470863ULL;
signed char var_8 = (signed char)-118;
unsigned char var_10 = (unsigned char)11;
int zero = 0;
unsigned long long int var_16 = 13448643372692131317ULL;
short var_17 = (short)16668;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 1ULL;
    value_mismatch |= var_17 != (short)-15;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_4, var_8, var_10, zero, &var_16, &var_17);
  checksum();
}
