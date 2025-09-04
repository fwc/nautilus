/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3431
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3431
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
void test(val<signed char> var_2, val<unsigned char> var_3, val<unsigned int> var_8, val<short> var_14, val<unsigned short> var_17, val<signed char> var_18, val<bool> var_19, val<int> zero, val<signed char*> var_20, val<unsigned long long int*> var_21, val<short*> var_22) {
    *var_20 = ((/* implicit */val<signed char>) min((((/* implicit */val<unsigned short>) var_18)), (min((((/* implicit */val<unsigned short>) var_19)), (var_17)))));
    *var_21 = ((/* implicit */val<unsigned long long int>) max((*var_21), (((/* implicit */val<unsigned long long int>) (-(min(((-(((/* implicit */val<int>) (val<unsigned short>)55194)))), (((/* implicit */val<int>) var_3)))))))));
    *var_22 = ((/* implicit */val<short>) ((((((/* implicit */val<bool>) ((val<unsigned short>) var_14))) ? ((+(var_8))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_2))))) & (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_3)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-71;
unsigned char var_3 = (unsigned char)224;
unsigned int var_8 = 4011962511U;
short var_14 = (short)5843;
unsigned short var_17 = (unsigned short)39803;
signed char var_18 = (signed char)-104;
bool var_19 = (bool)0;
int zero = 0;
signed char var_20 = (signed char)-88;
unsigned long long int var_21 = 11595447429405980009ULL;
short var_22 = (short)-10544;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (signed char)0;
    value_mismatch |= var_21 != 11595447429405980009ULL;
    value_mismatch |= var_22 != (short)128;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_8, var_14, var_17, var_18, var_19, zero, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
