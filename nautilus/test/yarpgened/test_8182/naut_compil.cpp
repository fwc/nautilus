/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8182
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8182
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
void test(val<int> var_1, val<short> var_3, val<short> var_10, val<int> zero, val<unsigned short*> var_13, val<long long int*> var_14) {
    *var_13 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<unsigned int>) var_1)) | (1054192355U)));
    *var_14 = ((/* implicit */val<long long int>) max((var_3), (var_10)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1546674697;
short var_3 = (short)12326;
short var_10 = (short)-27277;
int zero = 0;
unsigned short var_13 = (unsigned short)51068;
long long int var_14 = -5148121589819476686LL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned short)49143;
    value_mismatch |= var_14 != 12326LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_10, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
