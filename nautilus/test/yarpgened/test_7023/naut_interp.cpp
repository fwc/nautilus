/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7023
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7023
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
void test(val<long long int> var_4, val<unsigned char> var_6, val<unsigned short> var_10, val<bool> var_12, val<unsigned short> var_14, val<int> zero, val<unsigned int*> var_20, val<unsigned short*> var_21) {
    *var_20 ^= ((/* implicit */val<unsigned int>) (val<signed char>)-117);
    *var_21 &= ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) ((var_12) ? (((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<int>) (val<unsigned short>)57458)) : (((/* implicit */val<int>) var_14)))) : (((/* implicit */val<int>) var_6))))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_10))) : ((+(((((/* implicit */val<bool>) (val<unsigned short>)15126)) ? (4294967284U) : (11U)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -5472101484918559876LL;
unsigned char var_6 = (unsigned char)171;
unsigned short var_10 = (unsigned short)55238;
bool var_12 = (bool)1;
unsigned short var_14 = (unsigned short)50920;
int zero = 0;
unsigned int var_20 = 3695876958U;
unsigned short var_21 = (unsigned short)37267;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 599090389U;
    value_mismatch |= var_21 != (unsigned short)37250;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_6, var_10, var_12, var_14, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
