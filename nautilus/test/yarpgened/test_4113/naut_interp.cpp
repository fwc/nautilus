/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4113
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4113
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
void test(val<unsigned short> var_2, val<unsigned char> var_8, val<signed char> var_13, val<bool> var_14, val<int> zero, val<unsigned char*> var_19, val<unsigned char*> var_20, val<int*> var_21) {
    *var_19 = ((/* implicit */val<unsigned char>) (!(((/* implicit */val<bool>) max((((/* implicit */val<int>) var_8)), (((var_14) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) var_13)))))))));
    *var_20 = ((/* implicit */val<unsigned char>) var_2);
    *var_21 = ((/* implicit */val<int>) (val<unsigned short>)8483);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)44272;
unsigned char var_8 = (unsigned char)48;
signed char var_13 = (signed char)53;
bool var_14 = (bool)1;
int zero = 0;
unsigned char var_19 = (unsigned char)44;
unsigned char var_20 = (unsigned char)246;
int var_21 = -937433250;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned char)0;
    value_mismatch |= var_20 != (unsigned char)240;
    value_mismatch |= var_21 != 8483;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_8, var_13, var_14, zero, &var_19, &var_20, &var_21);
  checksum();
}
