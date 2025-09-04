/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1466
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1466
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
void test(val<unsigned long long int> var_0, val<long long int> var_1, val<unsigned long long int> var_2, val<short> var_3, val<int> var_4, val<int> var_5, val<int> zero, val<int*> var_11, val<long long int*> var_12, val<long long int*> var_13) {
    *var_11 = ((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) min((min((7804091660892251246LL), (9223372036854775807LL))), (((/* implicit */val<long long int>) (val<signed char>)0))))) | (((((/* implicit */val<bool>) max(((val<short>)8415), (((/* implicit */val<short>) (val<bool>)1))))) ? (((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<unsigned long long int>) var_1)) : (15985810228930495554ULL))) : (((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_3))) : (var_0)))))));
    *var_12 = ((/* implicit */val<long long int>) (~(var_2)));
    *var_13 = ((/* implicit */val<long long int>) var_0);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2956224391849315539ULL;
long long int var_1 = 5058496375663186995LL;
unsigned long long int var_2 = 17317627734265154287ULL;
short var_3 = (short)4259;
int var_4 = -248797873;
int var_5 = -904557345;
int zero = 0;
int var_11 = -1159694384;
long long int var_12 = -2461384157577840798LL;
long long int var_13 = 5666317157777268959LL;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 285299763;
    value_mismatch |= var_12 != 1129116339444397328LL;
    value_mismatch |= var_13 != 2956224391849315539LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
