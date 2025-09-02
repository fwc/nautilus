/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7099
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7099
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
void test(val<short> var_0, val<short> var_1, val<unsigned long long int> var_2, val<short> var_4, val<unsigned short> var_5, val<long long int> var_6, val<bool> var_8, val<int> zero, val<unsigned long long int*> var_11, val<int*> var_12, val<unsigned long long int*> var_13) {
    *var_11 -= ((/* implicit */val<unsigned long long int>) min(((-(((/* implicit */val<int>) var_0)))), (((/* implicit */val<int>) var_8))));
    *var_12 = ((/* implicit */val<int>) min((*var_12), (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_4))) : (max((max((((/* implicit */val<unsigned long long int>) (val<short>)19180)), (var_2))), (((/* implicit */val<unsigned long long int>) var_6)))))))));
    *var_13 = ((/* implicit */val<unsigned long long int>) (-(((/* implicit */val<int>) var_1))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14945;
short var_1 = (short)827;
unsigned long long int var_2 = 4950952447373601649ULL;
short var_4 = (short)9457;
unsigned short var_5 = (unsigned short)1812;
long long int var_6 = -1798815777828443811LL;
bool var_8 = (bool)1;
int zero = 0;
unsigned long long int var_11 = 17224206212843731879ULL;
int var_12 = 281569232;
unsigned long long int var_13 = 16319393006545413714ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 17224206212843731878ULL;
    value_mismatch |= var_12 != 9457;
    value_mismatch |= var_13 != 18446744073709550789ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_5, var_6, var_8, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
