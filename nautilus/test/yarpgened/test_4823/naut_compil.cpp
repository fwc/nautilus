/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4823
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4823
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
void test(val<unsigned long long int> var_1, val<unsigned long long int> var_3, val<unsigned long long int> var_8, val<int> zero, val<short*> var_19, val<unsigned long long int*> var_20) {
    *var_19 = ((/* implicit */val<short>) (!(((/* implicit */val<bool>) min((var_8), (var_3))))));
    *var_20 = ((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) ((((var_8) >> (((973330663U) - (973330655U))))) % (var_1))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4457155486715639264ULL;
unsigned long long int var_3 = 1812722410566407873ULL;
unsigned long long int var_8 = 12488433761337328828ULL;
int zero = 0;
short var_19 = (short)11423;
unsigned long long int var_20 = 14159385663858865850ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (short)0;
    value_mismatch |= var_20 != 0ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_8, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
