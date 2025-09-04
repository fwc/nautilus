/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6394
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6394
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
void test(val<long long int> var_0, val<int> var_2, val<short> var_5, val<short> var_6, val<short> var_10, val<unsigned char> var_14, val<int> zero, val<unsigned short*> var_17, val<unsigned int*> var_18, val<signed char*> var_19, val<short*> var_20, val<unsigned long long int*> var_21) {
    *var_17 = ((/* implicit */val<unsigned short>) min((*var_17), (((/* implicit */val<unsigned short>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_5))) & (min((((/* implicit */val<long long int>) (val<unsigned char>)240)), (var_0))))))));
    *var_18 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) ((((/* implicit */val<int>) ((((/* implicit */val<int>) (val<bool>)1)) > (((/* implicit */val<int>) (val<signed char>)63))))) >= ((-(((/* implicit */val<int>) var_10))))))) == (((/* implicit */val<int>) var_14))));
    *var_19 = ((/* implicit */val<signed char>) ((val<unsigned char>) var_6));
    *var_20 = ((/* implicit */val<short>) max((*var_20), (var_5)));
    *var_21 = ((/* implicit */val<unsigned long long int>) (-(var_2)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4026726359395761877LL;
int var_2 = 1158138372;
short var_5 = (short)31744;
short var_6 = (short)-18689;
short var_10 = (short)-28742;
unsigned char var_14 = (unsigned char)112;
int zero = 0;
unsigned short var_17 = (unsigned short)37360;
unsigned int var_18 = 1525327161U;
signed char var_19 = (signed char)85;
short var_20 = (short)4483;
unsigned long long int var_21 = 12862689443762017402ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (unsigned short)0;
    value_mismatch |= var_18 != 0U;
    value_mismatch |= var_19 != (signed char)-1;
    value_mismatch |= var_20 != (short)31744;
    value_mismatch |= var_21 != 18446744072551413244ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_5, var_6, var_10, var_14, zero, &var_17, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
