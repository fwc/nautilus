/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5411
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5411
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
void test(val<unsigned short> var_3, val<long long int> var_4, val<short> var_5, val<short> var_7, val<short> var_11, val<unsigned long long int> var_14, val<int> zero, val<short*> var_19, val<unsigned int*> var_20, val<int*> var_21) {
    *var_19 -= ((/* implicit */val<short>) (-(((/* implicit */val<int>) var_5))));
    *var_20 = ((/* implicit */val<unsigned int>) max((*var_20), (((/* implicit */val<unsigned int>) ((((((/* implicit */val<bool>) max((var_4), (((/* implicit */val<long long int>) var_11))))) && (((/* implicit */val<bool>) var_7)))) ? ((+((-(var_14))))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) 1457374161)) && (((/* implicit */val<bool>) 6626998253808029989ULL)))))))))));
    *var_21 = (-((+(((/* implicit */val<int>) var_3)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)41544;
long long int var_4 = 1746825468634646359LL;
short var_5 = (short)-22275;
short var_7 = (short)-24721;
short var_11 = (short)7005;
unsigned long long int var_14 = 16529597817748552863ULL;
int zero = 0;
short var_19 = (short)6526;
unsigned int var_20 = 2375404107U;
int var_21 = 406639124;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (short)-15749;
    value_mismatch |= var_20 != 3238429537U;
    value_mismatch |= var_21 != -41544;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_5, var_7, var_11, var_14, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
