/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6215
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6215
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
void test(val<unsigned char> var_7, val<unsigned short> var_11, val<unsigned short> var_12, val<int> zero, val<unsigned short*> var_13, val<unsigned int*> var_14, val<signed char*> var_15) {
    *var_13 = var_11;
    *var_14 &= ((/* implicit */val<unsigned int>) ((max((((((/* implicit */val<bool>) (val<unsigned short>)65535)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)127))) : (16U))), (((/* implicit */val<unsigned int>) max((var_12), (((/* implicit */val<unsigned short>) var_7))))))) == (((/* implicit */val<unsigned int>) (~(((/* implicit */val<int>) max((var_12), ((val<unsigned short>)19)))))))));
    *var_15 = ((/* implicit */val<signed char>) max((((/* implicit */val<unsigned long long int>) var_12)), (((val<unsigned long long int>) ((val<unsigned char>) var_12)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)21;
unsigned short var_11 = (unsigned short)53207;
unsigned short var_12 = (unsigned short)40775;
int zero = 0;
unsigned short var_13 = (unsigned short)59864;
unsigned int var_14 = 2349736489U;
signed char var_15 = (signed char)-94;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned short)53207;
    value_mismatch |= var_14 != 0U;
    value_mismatch |= var_15 != (signed char)71;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, var_11, var_12, zero, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
