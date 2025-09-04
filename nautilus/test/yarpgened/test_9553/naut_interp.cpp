/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9553
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9553
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
void test(val<int> var_0, val<long long int> var_1, val<int> var_2, val<long long int> var_5, val<long long int> var_8, val<unsigned long long int> var_9, val<long long int> var_10, val<short> var_11, val<bool> var_12, val<long long int> var_13, val<long long int> var_14, val<signed char> var_17, val<unsigned int> var_18, val<int> zero, val<short*> var_19, val<long long int*> var_20, val<int*> var_21, val<long long int*> var_22) {
    *var_19 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_11)) ? (var_13) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_11)))))) ? (min((((/* implicit */val<long long int>) var_11)), (var_14))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((val<unsigned short>) var_9))))))) ? (((((/* implicit */val<unsigned long long int>) var_2)) | (var_9))) : (((/* implicit */val<unsigned long long int>) var_8))));
    *var_20 = var_1;
    *var_21 = ((/* implicit */val<int>) ((val<short>) var_12));
    *var_22 = ((((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<signed char>)-116)) ? (var_10) : (((/* implicit */val<long long int>) var_18))))) ? ((-(var_5))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_17))))) * (((/* implicit */val<long long int>) max((var_0), (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_0)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -730726932;
long long int var_1 = 685373322429546924LL;
int var_2 = -1195014779;
long long int var_5 = -17212664082752939LL;
long long int var_8 = -7512936074790553720LL;
unsigned long long int var_9 = 3983571004838926498ULL;
long long int var_10 = 1765472598410543243LL;
short var_11 = (short)-12239;
bool var_12 = (bool)1;
long long int var_13 = 8546409639752657479LL;
long long int var_14 = 1043147412911000182LL;
signed char var_17 = (signed char)0;
unsigned int var_18 = 4112269888U;
int zero = 0;
short var_19 = (short)30214;
long long int var_20 = -6287208701122352972LL;
int var_21 = -101018203;
long long int var_22 = -7182467734076053778LL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (short)-8793;
    value_mismatch |= var_20 != 685373322429546924LL;
    value_mismatch |= var_21 != 1;
    value_mismatch |= var_22 != 0LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_5, var_8, var_9, var_10, var_11, var_12, var_13, var_14, var_17, var_18, zero, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
