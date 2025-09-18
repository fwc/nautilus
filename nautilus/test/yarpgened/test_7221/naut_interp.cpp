/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7221
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7221
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
void test(val<unsigned short> var_0, val<unsigned short> var_1, val<signed char> var_3, val<signed char> var_6, val<unsigned short> var_8, val<int> zero, val<signed char*> var_10, val<signed char*> var_11, val<short*> var_12) {
    *var_10 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) var_0)) ? (((((((/* implicit */val<bool>) (val<unsigned char>)255)) || (((/* implicit */val<bool>) var_6)))) ? (((/* implicit */val<int>) max(((val<unsigned short>)3746), (((/* implicit */val<unsigned short>) (val<unsigned char>)81))))) : (((/* implicit */val<int>) max((((/* implicit */val<unsigned short>) (val<signed char>)-44)), (var_8)))))) : ((~(((/* implicit */val<int>) var_1))))));
    *var_11 = ((/* implicit */val<signed char>) min((((((/* implicit */val<bool>) ((val<unsigned short>) (val<unsigned char>)180))) ? (((((/* implicit */val<bool>) (val<unsigned short>)3540)) ? (((/* implicit */val<int>) (val<short>)7044)) : (((/* implicit */val<int>) (val<unsigned short>)61996)))) : (((/* implicit */val<int>) var_6)))), (((/* implicit */val<int>) var_3))));
    *var_12 = ((/* implicit */val<short>) ((((/* implicit */val<int>) (val<signed char>)24)) <= (((/* implicit */val<int>) var_1))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35385;
unsigned short var_1 = (unsigned short)58839;
signed char var_3 = (signed char)-20;
signed char var_6 = (signed char)52;
unsigned short var_8 = (unsigned short)1429;
int zero = 0;
signed char var_10 = (signed char)117;
signed char var_11 = (signed char)-17;
short var_12 = (short)-1919;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (signed char)-94;
    value_mismatch |= var_11 != (signed char)-20;
    value_mismatch |= var_12 != (short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_6, var_8, zero, &var_10, &var_11, &var_12);
  checksum();
}
