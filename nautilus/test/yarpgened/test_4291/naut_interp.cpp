/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4291
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4291
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
void test(val<signed char> var_3, val<signed char> var_5, val<short> var_7, val<unsigned short> var_9, val<int> zero, val<bool*> var_10, val<unsigned long long int*> var_11, val<short*> var_12) {
    *var_10 = ((/* implicit */val<bool>) max((*var_10), (((/* implicit */val<bool>) (-(((((/* implicit */val<bool>) (~(((/* implicit */val<int>) (val<signed char>)-29))))) ? (((/* implicit */val<int>) max((((/* implicit */val<unsigned short>) var_5)), (var_9)))) : (((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<int>) var_3)) : (((/* implicit */val<int>) (val<signed char>)84)))))))))));
    *var_11 *= ((/* implicit */val<unsigned long long int>) min(((val<signed char>)-93), (((/* implicit */val<signed char>) (val<bool>)1))));
    *var_12 &= ((/* implicit */val<short>) (~(((((/* implicit */val<bool>) 3313870292U)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)24))) : (0ULL)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)116;
signed char var_5 = (signed char)69;
short var_7 = (short)-979;
unsigned short var_9 = (unsigned short)63835;
int zero = 0;
bool var_10 = (bool)1;
unsigned long long int var_11 = 14826163650185642749ULL;
short var_12 = (short)-17593;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (bool)1;
    value_mismatch |= var_11 != 4672586060951595543ULL;
    value_mismatch |= var_12 != (short)-17593;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_5, var_7, var_9, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
