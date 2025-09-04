/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1795
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1795
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
void test(val<int> var_6, val<long long int> var_8, val<bool> var_9, val<bool> var_11, val<signed char> var_13, val<short> var_15, val<int> zero, val<long long int*> var_16, val<short*> var_17, val<signed char*> var_18, val<short*> var_19) {
    *var_16 += ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) (+(((/* implicit */val<int>) ((((/* implicit */val<int>) var_11)) < (-2147483632))))))) || (((/* implicit */val<bool>) min((((5U) >> (((/* implicit */val<int>) (val<bool>)1)))), (((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) var_15)) * (((/* implicit */val<int>) var_9))))))))));
    *var_17 = ((/* implicit */val<short>) min((*var_17), (((/* implicit */val<short>) (!(((/* implicit */val<bool>) min((min((((/* implicit */val<int>) var_15)), (935075652))), (((/* implicit */val<int>) ((val<short>) -1LL)))))))))));
    *var_18 = ((/* implicit */val<signed char>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) 1LL)) ? (((/* implicit */val<long long int>) (+(((/* implicit */val<int>) (val<signed char>)15))))) : (((((/* implicit */val<long long int>) 536870400)) * (13LL))))))));
    *var_19 = ((/* implicit */val<short>) max((*var_19), (((/* implicit */val<short>) ((((((/* implicit */val<bool>) ((472732805098942539ULL) << (((((/* implicit */val<int>) (val<unsigned short>)20715)) - (20710)))))) ? (((/* implicit */val<long long int>) ((((var_6) + (2147483647))) >> (((472732805098942523ULL) - (472732805098942515ULL)))))) : (((((var_8) + (9223372036854775807LL))) >> (((((/* implicit */val<int>) var_13)) + (67))))))) <= ((-(((var_8) + (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_15))))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -1770871641;
long long int var_8 = -6514996470633588022LL;
bool var_9 = (bool)1;
bool var_11 = (bool)0;
signed char var_13 = (signed char)-61;
short var_15 = (short)-19444;
int zero = 0;
long long int var_16 = -249182787022293893LL;
short var_17 = (short)-438;
signed char var_18 = (signed char)-79;
short var_19 = (short)-8192;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != -249182787022293892LL;
    value_mismatch |= var_17 != (short)-438;
    value_mismatch |= var_18 != (signed char)0;
    value_mismatch |= var_19 != (short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_8, var_9, var_11, var_13, var_15, zero, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
