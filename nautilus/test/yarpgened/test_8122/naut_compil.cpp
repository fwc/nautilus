/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8122
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8122
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
void test(val<unsigned short> var_0, val<unsigned short> var_1, val<unsigned short> var_2, val<short> var_3, val<signed char> var_4, val<unsigned short> var_5, val<unsigned short> var_7, val<int> var_10, val<signed char> var_14, val<bool> var_17, val<int> zero, val<bool*> var_19, val<bool*> var_20, val<bool*> var_21, val<bool*> var_22) {
    *var_19 = ((/* implicit */val<bool>) max((((/* implicit */val<unsigned short>) var_3)), (max((var_1), (min((var_5), (var_7)))))));
    *var_20 = ((/* implicit */val<bool>) max((((/* implicit */val<unsigned long long int>) max((max((var_0), (var_2))), (((/* implicit */val<unsigned short>) ((var_10) <= (((/* implicit */val<int>) (val<unsigned short>)10240)))))))), (5469398358107831564ULL)));
    *var_21 = ((/* implicit */val<bool>) (+(min((((/* implicit */val<unsigned long long int>) max((((/* implicit */val<unsigned short>) var_4)), (var_2)))), (((((/* implicit */val<bool>) var_14)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_7))) : (16646994753143118473ULL)))))));
    *var_22 = ((((/* implicit */val<int>) var_1)) <= (((/* implicit */val<int>) var_17)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27154;
unsigned short var_1 = (unsigned short)43726;
unsigned short var_2 = (unsigned short)57560;
short var_3 = (short)-29837;
signed char var_4 = (signed char)119;
unsigned short var_5 = (unsigned short)21402;
unsigned short var_7 = (unsigned short)24558;
int var_10 = 990510407;
signed char var_14 = (signed char)77;
bool var_17 = (bool)1;
int zero = 0;
bool var_19 = (bool)0;
bool var_20 = (bool)0;
bool var_21 = (bool)1;
bool var_22 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (bool)1;
    value_mismatch |= var_20 != (bool)1;
    value_mismatch |= var_21 != (bool)1;
    value_mismatch |= var_22 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_7, var_10, var_14, var_17, zero, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
