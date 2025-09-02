/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2772
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2772
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
void test(val<unsigned long long int> var_5, val<unsigned short> var_8, val<int> var_11, val<unsigned int> var_12, val<int> zero, val<int*> var_17, val<unsigned int*> var_18, val<int*> var_19, val<short*> var_20) {
    *var_17 = min((var_11), ((-(((/* implicit */val<int>) var_8)))));
    *var_18 = var_12;
    *var_19 ^= -20;
    *var_20 = ((/* implicit */val<short>) ((val<unsigned long long int>) (~(var_5))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 288074191028475147ULL;
unsigned short var_8 = (unsigned short)45087;
int var_11 = -748320203;
unsigned int var_12 = 195696423U;
int zero = 0;
int var_17 = -702613467;
unsigned int var_18 = 3290272777U;
int var_19 = 517025909;
short var_20 = (short)26801;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != -748320203;
    value_mismatch |= var_18 != 195696423U;
    value_mismatch |= var_19 != -517025895;
    value_mismatch |= var_20 != (short)10996;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_8, var_11, var_12, zero, &var_17, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
