/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5502
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5502
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
void test(val<long long int> var_0, val<unsigned short> var_1, val<unsigned char> var_3, val<signed char> var_8, val<unsigned char> var_11, val<int> zero, val<unsigned short*> var_16, val<unsigned int*> var_17, val<unsigned short*> var_18, val<short*> var_19) {
    *var_16 = ((/* implicit */val<unsigned short>) ((val<short>) (~((+(-1299693246042461243LL))))));
    *var_17 = ((/* implicit */val<unsigned int>) min((*var_17), (((/* implicit */val<unsigned int>) var_0))));
    *var_18 &= ((/* implicit */val<unsigned short>) (~(((/* implicit */val<int>) (val<unsigned char>)1))));
    *var_19 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<int>) (val<short>)0)) : (((/* implicit */val<int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 0U)) ? (((/* implicit */val<int>) var_11)) : (((/* implicit */val<int>) var_8))))) && (((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<signed char>)-68)) ? (((/* implicit */val<int>) var_1)) : (((/* implicit */val<int>) var_3))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7766340353026259294LL;
unsigned short var_1 = (unsigned short)36136;
unsigned char var_3 = (unsigned char)226;
signed char var_8 = (signed char)-28;
unsigned char var_11 = (unsigned char)210;
int zero = 0;
unsigned short var_16 = (unsigned short)46716;
unsigned int var_17 = 3929519360U;
unsigned short var_18 = (unsigned short)17472;
short var_19 = (short)-20086;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned short)54330;
    value_mismatch |= var_17 != 3306587810U;
    value_mismatch |= var_18 != (unsigned short)17472;
    value_mismatch |= var_19 != (short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_8, var_11, zero, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
