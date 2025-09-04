/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3919
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3919
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
void test(val<unsigned int> var_0, val<short> var_1, val<int> var_4, val<unsigned int> var_5, val<short> var_8, val<int> zero, val<unsigned short*> var_10, val<short*> var_11, val<short*> var_12, val<long long int*> var_13) {
    *var_10 = ((/* implicit */val<unsigned short>) min((*var_10), (((/* implicit */val<unsigned short>) var_8))));
    *var_11 = ((/* implicit */val<short>) ((max((((/* implicit */val<unsigned int>) (+(((/* implicit */val<int>) var_1))))), ((-(var_0))))) & (((/* implicit */val<unsigned int>) var_4))));
    *var_12 ^= ((/* implicit */val<short>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<short>)-26920))) % (var_5)));
    *var_13 -= ((/* implicit */val<long long int>) min((((((/* implicit */val<bool>) (~(((/* implicit */val<int>) (val<unsigned short>)16194))))) ? (((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) (val<signed char>)53)) << (((var_5) - (2394322919U)))))) : (min((var_0), (var_0))))), (((/* implicit */val<unsigned int>) (val<unsigned short>)65535))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1225787926U;
short var_1 = (short)-32432;
int var_4 = 757228464;
unsigned int var_5 = 2394322932U;
short var_8 = (short)-23906;
int zero = 0;
unsigned short var_10 = (unsigned short)46379;
short var_11 = (short)-2651;
short var_12 = (short)-151;
long long int var_13 = 8412564304661467512LL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned short)41630;
    value_mismatch |= var_11 != (short)272;
    value_mismatch |= var_12 != (short)-7795;
    value_mismatch |= var_13 != 8412564304661401977LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_4, var_5, var_8, zero, &var_10, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
