/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2443
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2443
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
void test(val<long long int> var_1, val<bool> var_2, val<unsigned short> var_3, val<short> var_9, val<int> var_10, val<unsigned long long int> var_11, val<int> var_13, val<unsigned long long int> var_14, val<int> zero, val<int*> var_15, val<long long int*> var_16, val<short*> var_17) {
    *var_15 = ((/* implicit */val<int>) var_1);
    if (((/* implicit */val<bool>) ((((val<int>) min((((/* implicit */val<long long int>) var_2)), (var_1)))) << (((/* implicit */val<int>) var_2)))))
    {
        *var_16 = ((/* implicit */val<long long int>) max((*var_16), (((/* implicit */val<long long int>) (((!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_14)) ? (-1124522423) : (127)))))) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) max((var_3), (var_3))))) | (((val<long long int>) var_11))))) : (18446744073709551615ULL))))));
        *var_17 = ((/* implicit */val<short>) (+(min((var_10), (max((((/* implicit */val<int>) var_9)), (var_13)))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1054880941138518544LL;
bool var_2 = (bool)1;
unsigned short var_3 = (unsigned short)34878;
short var_9 = (short)-14680;
int var_10 = -131063177;
unsigned long long int var_11 = 11390065578688052047ULL;
int var_13 = 1225273192;
unsigned long long int var_14 = 6944362924357663415ULL;
int zero = 0;
int var_15 = -1889001681;
long long int var_16 = -1641350633240073269LL;
short var_17 = (short)-22519;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != -2132532720;
    value_mismatch |= var_16 != -1LL;
    value_mismatch |= var_17 != (short)8823;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_9, var_10, var_11, var_13, var_14, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
