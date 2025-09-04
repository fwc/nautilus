/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2910
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2910
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
void test(val<long long int> var_3, val<long long int> var_8, val<unsigned short> var_12, val<int> zero, val<long long int*> var_13, val<int*> var_14) {
    *var_13 ^= ((var_3) ^ (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_12))));
    *var_14 = ((/* implicit */val<int>) var_8);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 2966666734013546134LL;
long long int var_8 = 495870108780356133LL;
unsigned short var_12 = (unsigned short)45831;
int zero = 0;
long long int var_13 = 5416637642022093621LL;
int var_14 = -1269686313;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 7061772384224956068LL;
    value_mismatch |= var_14 != -1734974939;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_8, var_12, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
