/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7561
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7561
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
void test(val<unsigned char> var_1, val<signed char> var_2, val<int> var_5, val<unsigned short> var_6, val<unsigned int> var_7, val<long long int> var_8, val<unsigned short> var_10, val<signed char> var_12, val<unsigned short> var_15, val<unsigned short> var_16, val<int> zero, val<int*> var_17, val<unsigned short*> var_18, val<int*> var_19) {
    *var_17 = ((/* implicit */val<int>) ((val<signed char>) max((((/* implicit */val<long long int>) (val<signed char>)71)), ((~(var_8))))));
    *var_18 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_5)) ? (6177873010073431075ULL) : (((/* implicit */val<unsigned long long int>) var_5))))) ? (((/* implicit */val<int>) var_2)) : (((/* implicit */val<int>) var_15))))) ? ((-(((/* implicit */val<int>) ((var_7) == (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_16)))))))) : ((-(((/* implicit */val<int>) var_6))))));
    *var_19 = min((((((/* implicit */val<int>) ((val<unsigned short>) var_1))) * (((/* implicit */val<int>) min((((/* implicit */val<unsigned char>) var_12)), (var_1)))))), (((/* implicit */val<int>) var_10)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)252;
signed char var_2 = (signed char)-30;
int var_5 = -1509111337;
unsigned short var_6 = (unsigned short)49417;
unsigned int var_7 = 975717584U;
long long int var_8 = -6561485013787002178LL;
unsigned short var_10 = (unsigned short)30742;
signed char var_12 = (signed char)-31;
unsigned short var_15 = (unsigned short)56031;
unsigned short var_16 = (unsigned short)2357;
int zero = 0;
int var_17 = 1198670346;
unsigned short var_18 = (unsigned short)37335;
int var_19 = 1761352024;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 65;
    value_mismatch |= var_18 != (unsigned short)0;
    value_mismatch |= var_19 != 30742;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_5, var_6, var_7, var_8, var_10, var_12, var_15, var_16, zero, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
