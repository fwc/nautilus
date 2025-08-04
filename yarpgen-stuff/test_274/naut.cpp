/*
yarpgen version 2.0 (build df0ddec on 1980:01:01)
Seed: 274
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=274
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>

using namespace nautilus;

#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test(val<short> var_2, val<unsigned long long int> var_4, val<unsigned char> var_5, val<short> var_6, val<int> var_7, val<long long int> var_8, val<int> zero, val<unsigned long long int*> var_10, val<unsigned long long int*> var_11, val<long long int*> var_12) {
    *var_10 = ((/* implicit */val<unsigned long long int>) var_7);
    if (((/* implicit */val<bool>) (~(((/* implicit */val<int>) var_2)))))
    {
        *var_11 = (-(((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<unsigned long long int>) (-(((/* implicit */val<int>) var_5))))) : (((((/* implicit */val<bool>) var_6)) ? (var_4) : (((/* implicit */val<unsigned long long int>) var_8)))))));
        *var_12 = (+(((((/* implicit */val<long long int>) ((((/* implicit */val<int>) (val<bool>)1)) << (((((/* implicit */val<int>) (val<short>)14615)) - (14605)))))) ^ (max((((/* implicit */val<long long int>) (val<signed char>)-93)), ((-9223372036854775807LL - 1LL)))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-24950;
unsigned long long int var_4 = 4522321875227125068ULL;
unsigned char var_5 = (unsigned char)100;
short var_6 = (short)-15936;
int var_7 = -606194213;
long long int var_8 = 2820911302028486422LL;
int zero = 0;
unsigned long long int var_10 = 17740072589889682637ULL;
unsigned long long int var_11 = 14312879202069818094ULL;
long long int var_12 = -9009093801844357257LL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 18446744073103357403ULL;
    value_mismatch |= var_11 != 100ULL;
    value_mismatch |= var_12 != -1117LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_5, var_6, var_7, var_8, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
