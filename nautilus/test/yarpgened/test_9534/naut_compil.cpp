/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9534
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9534
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
void test(val<unsigned int> var_1, val<int> var_2, val<long long int> var_3, val<short> var_5, val<short> var_6, val<unsigned char> var_8, val<signed char> var_10, val<int> zero, val<unsigned long long int*> var_17, val<unsigned char*> var_18) {
    *var_17 = ((/* implicit */val<unsigned long long int>) min((((((((/* implicit */val<bool>) var_5)) ? (var_3) : (((/* implicit */val<long long int>) var_1)))) >> (((((/* implicit */val<int>) min((((/* implicit */val<short>) var_8)), (var_6)))) - (53))))), (((/* implicit */val<long long int>) var_2))));
    *var_18 = ((/* implicit */val<unsigned char>) min((var_1), (((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) var_10)) >= (((/* implicit */val<int>) var_8)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2866457181U;
int var_2 = 320925667;
long long int var_3 = 3443175247550781579LL;
short var_5 = (short)-12578;
short var_6 = (short)9024;
unsigned char var_8 = (unsigned char)76;
signed char var_10 = (signed char)-91;
int zero = 0;
unsigned long long int var_17 = 4158925727729932788ULL;
unsigned char var_18 = (unsigned char)18;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 320925667ULL;
    value_mismatch |= var_18 != (unsigned char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_5, var_6, var_8, var_10, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
