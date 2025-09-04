/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1904
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1904
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
void test(val<unsigned short> var_2, val<unsigned int> var_3, val<unsigned int> var_4, val<int> var_8, val<unsigned int> var_11, val<unsigned short> var_12, val<unsigned short> var_14, val<short> var_18, val<unsigned char> var_19, val<int> zero, val<unsigned short*> var_20, val<long long int*> var_21, val<unsigned short*> var_22) {
    *var_20 = ((/* implicit */val<unsigned short>) max((*var_20), (((/* implicit */val<unsigned short>) (-(((var_3) * (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((var_8) > (((/* implicit */val<int>) var_12)))))))))))));
    *var_21 = ((/* implicit */val<long long int>) max((((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_2))))) : (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_11)) || (((/* implicit */val<bool>) var_19))))))), (((/* implicit */val<int>) ((((/* implicit */val<int>) var_14)) > (max((-856949931), (((/* implicit */val<int>) (val<bool>)1)))))))));
    *var_22 = ((/* implicit */val<unsigned short>) max(((+(((((/* implicit */val<unsigned int>) -773410226)) + (var_4))))), (((/* implicit */val<unsigned int>) var_18))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)4093;
unsigned int var_3 = 2469563352U;
unsigned int var_4 = 2288929201U;
int var_8 = -1396316411;
unsigned int var_11 = 2535222026U;
unsigned short var_12 = (unsigned short)17185;
unsigned short var_14 = (unsigned short)7630;
short var_18 = (short)28902;
unsigned char var_19 = (unsigned char)29;
int zero = 0;
unsigned short var_20 = (unsigned short)52271;
long long int var_21 = 2397819860087382348LL;
unsigned short var_22 = (unsigned short)10365;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (unsigned short)52271;
    value_mismatch |= var_21 != 1LL;
    value_mismatch |= var_22 != (unsigned short)64511;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_4, var_8, var_11, var_12, var_14, var_18, var_19, zero, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
