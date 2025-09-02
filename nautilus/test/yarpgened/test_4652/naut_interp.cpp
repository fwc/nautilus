/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4652
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4652
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
void test(val<unsigned int> var_0, val<int> var_3, val<bool> var_10, val<unsigned char> var_13, val<unsigned short> var_16, val<int> zero, val<int*> var_18, val<int*> var_19, val<short*> var_20, val<signed char*> var_21) {
    *var_18 = var_3;
    *var_19 = ((/* implicit */val<int>) ((((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((val<unsigned short>) 401179271)))) * (((((/* implicit */val<bool>) var_16)) ? (var_0) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_10))))))) != (((/* implicit */val<unsigned int>) 401179255))));
    *var_20 = ((/* implicit */val<short>) var_13);
    *var_21 ^= ((/* implicit */val<signed char>) -7777876307341474585LL);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3608727272U;
int var_3 = -281320607;
bool var_10 = (bool)0;
unsigned char var_13 = (unsigned char)215;
unsigned short var_16 = (unsigned short)24616;
int zero = 0;
int var_18 = -831283598;
int var_19 = 2093785618;
short var_20 = (short)-5531;
signed char var_21 = (signed char)-47;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != -281320607;
    value_mismatch |= var_19 != 1;
    value_mismatch |= var_20 != (short)215;
    value_mismatch |= var_21 != (signed char)54;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_10, var_13, var_16, zero, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
