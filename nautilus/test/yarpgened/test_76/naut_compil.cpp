/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 76
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=76
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
void test(val<bool> var_1, val<unsigned char> var_2, val<unsigned char> var_3, val<long long int> var_4, val<signed char> var_9, val<unsigned char> var_13, val<short> var_16, val<int> zero, val<signed char*> var_19, val<unsigned char*> var_20, val<unsigned char*> var_21) {
    *var_19 = ((/* implicit */val<signed char>) (((val<bool>)1) ? (((((/* implicit */val<bool>) ((((/* implicit */val<int>) (val<bool>)1)) ^ (((/* implicit */val<int>) var_9))))) ? (((/* implicit */val<int>) var_3)) : ((-(((/* implicit */val<int>) var_1)))))) : (max((((/* implicit */val<int>) min((((/* implicit */val<unsigned short>) (val<signed char>)-22)), ((val<unsigned short>)51018)))), (((((/* implicit */val<int>) (val<bool>)1)) + (((/* implicit */val<int>) (val<signed char>)21))))))));
    *var_20 = ((/* implicit */val<unsigned char>) ((val<unsigned int>) max((((/* implicit */val<long long int>) max((((/* implicit */val<unsigned char>) (val<bool>)1)), (var_13)))), (((((/* implicit */val<bool>) (val<unsigned char>)82)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_9))) : ((-9223372036854775807LL - 1LL)))))));
    *var_21 = ((/* implicit */val<unsigned char>) min((*var_21), (((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) min((((((/* implicit */val<bool>) var_16)) ? (((/* implicit */val<int>) var_3)) : (((/* implicit */val<int>) (val<short>)(-32767 - 1))))), (((/* implicit */val<int>) ((val<unsigned char>) (val<bool>)1)))))) ? (((val<long long int>) var_2)) : (((((/* implicit */val<long long int>) ((/* implicit */val<int>) ((val<short>) (val<short>)32766)))) + (((var_4) / (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_13))))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)1;
unsigned char var_2 = (unsigned char)149;
unsigned char var_3 = (unsigned char)225;
long long int var_4 = -5800370239073990843LL;
signed char var_9 = (signed char)-99;
unsigned char var_13 = (unsigned char)99;
short var_16 = (short)12503;
int zero = 0;
signed char var_19 = (signed char)-40;
unsigned char var_20 = (unsigned char)251;
unsigned char var_21 = (unsigned char)127;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (signed char)-31;
    value_mismatch |= var_20 != (unsigned char)99;
    value_mismatch |= var_21 != (unsigned char)127;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_4, var_9, var_13, var_16, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
