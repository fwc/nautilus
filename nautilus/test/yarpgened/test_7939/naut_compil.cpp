/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7939
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7939
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
void test(val<unsigned short> var_2, val<unsigned char> var_4, val<short> var_6, val<signed char> var_12, val<int> zero, val<bool*> var_13, val<unsigned char*> var_14) {
    *var_13 -= ((/* implicit */val<bool>) var_2);
    *var_14 = ((/* implicit */val<unsigned char>) (~(((((/* implicit */val<int>) var_12)) * (((/* implicit */val<int>) max((((/* implicit */val<short>) var_4)), (var_6))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)63253;
unsigned char var_4 = (unsigned char)211;
short var_6 = (short)18584;
signed char var_12 = (signed char)-44;
int zero = 0;
bool var_13 = (bool)0;
unsigned char var_14 = (unsigned char)106;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != (unsigned char)31;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_6, var_12, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
