/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3147
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3147
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
void test(val<unsigned short> var_1, val<int> var_3, val<bool> var_11, val<unsigned int> var_14, val<int> zero, val<bool*> var_15, val<unsigned char*> var_16, val<bool*> var_17) {
    *var_15 = ((/* implicit */val<bool>) var_1);
    *var_16 = ((/* implicit */val<unsigned char>) var_14);
    *var_17 &= max((var_11), (((((/* implicit */val<bool>) max((0ULL), (((/* implicit */val<unsigned long long int>) var_3))))) || (((/* implicit */val<bool>) ((val<unsigned int>) var_3))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)8721;
int var_3 = -989745812;
bool var_11 = (bool)0;
unsigned int var_14 = 3434122616U;
int zero = 0;
bool var_15 = (bool)1;
unsigned char var_16 = (unsigned char)143;
bool var_17 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (bool)1;
    value_mismatch |= var_16 != (unsigned char)120;
    value_mismatch |= var_17 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_11, var_14, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
