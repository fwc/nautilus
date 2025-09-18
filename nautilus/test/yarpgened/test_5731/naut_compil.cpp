/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5731
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5731
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
void test(val<unsigned short> var_3, val<int> var_6, val<unsigned char> var_14, val<unsigned char> var_19, val<int> zero, val<int*> var_20, val<signed char*> var_21, val<short*> var_22, val<short*> var_23) {
    *var_20 = var_6;
    *var_21 += ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) ((((((/* implicit */val<int>) (val<short>)-927)) ^ (((/* implicit */val<int>) (val<unsigned char>)164)))) ^ (((/* implicit */val<int>) (val<unsigned char>)164))))) ? (((((/* implicit */val<bool>) var_19)) ? (((val<unsigned int>) var_3)) : (((/* implicit */val<unsigned int>) var_6)))) : (((/* implicit */val<unsigned int>) min(((~(((/* implicit */val<int>) (val<unsigned short>)65515)))), (1091604920))))));
    *var_22 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) var_19)) ? (((/* implicit */val<int>) ((val<bool>) var_6))) : (((/* implicit */val<int>) ((val<signed char>) (~((-2147483647 - 1))))))));
    *var_23 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) (val<unsigned char>)181)) ? ((-((+(((/* implicit */val<int>) (val<unsigned short>)29)))))) : (((/* implicit */val<int>) var_14))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)44747;
int var_6 = -581700140;
unsigned char var_14 = (unsigned char)100;
unsigned char var_19 = (unsigned char)249;
int zero = 0;
int var_20 = 1463615109;
signed char var_21 = (signed char)105;
short var_22 = (short)-32172;
short var_23 = (short)21761;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != -581700140;
    value_mismatch |= var_21 != (signed char)52;
    value_mismatch |= var_22 != (short)1;
    value_mismatch |= var_23 != (short)-29;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_6, var_14, var_19, zero, &var_20, &var_21, &var_22, &var_23);
  checksum();
}
