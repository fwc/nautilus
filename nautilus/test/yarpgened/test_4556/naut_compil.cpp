/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4556
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4556
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
void test(val<long long int> var_0, val<unsigned int> var_1, val<short> var_2, val<unsigned short> var_7, val<unsigned long long int> var_11, val<int> zero, val<long long int*> var_13, val<unsigned short*> var_14) {
    *var_13 = ((/* implicit */val<long long int>) min((((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) var_0))))), (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<int>) (val<signed char>)122)) : (((/* implicit */val<int>) var_2))))) ? ((-(var_11))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<short>) -7103047995895886054LL))))))));
    *var_14 = ((/* implicit */val<unsigned short>) ((val<long long int>) (!(((/* implicit */val<bool>) var_1)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4344848639509743278LL;
unsigned int var_1 = 2799826070U;
short var_2 = (short)-11046;
unsigned short var_7 = (unsigned short)26868;
unsigned long long int var_11 = 16251316742475193617ULL;
int zero = 0;
long long int var_13 = -5947983133139700849LL;
unsigned short var_14 = (unsigned short)14544;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 0LL;
    value_mismatch |= var_14 != (unsigned short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_7, var_11, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
