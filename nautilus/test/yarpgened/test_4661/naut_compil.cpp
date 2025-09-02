/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4661
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4661
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
void test(val<short> var_0, val<signed char> var_4, val<bool> var_5, val<unsigned long long int> var_6, val<signed char> var_10, val<long long int> var_12, val<unsigned short> var_14, val<unsigned long long int> var_15, val<int> zero, val<signed char*> var_19, val<unsigned int*> var_20, val<int*> var_21) {
    *var_19 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) ((val<short>) (val<signed char>)-1))) ^ (((/* implicit */val<int>) var_5))))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_0))) : (max((((/* implicit */val<unsigned long long int>) var_14)), (((((/* implicit */val<unsigned long long int>) -1620335229)) | (var_15)))))));
    if (((/* implicit */val<bool>) min((((/* implicit */val<unsigned long long int>) var_12)), (var_6))))
    {
        *var_20 = max((((val<unsigned int>) 1620335235)), (((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) var_10)) ^ (((/* implicit */val<int>) var_10))))));
        *var_21 = ((/* implicit */val<int>) var_4);
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-26601;
signed char var_4 = (signed char)-1;
bool var_5 = (bool)0;
unsigned long long int var_6 = 15520745961803294945ULL;
signed char var_10 = (signed char)47;
long long int var_12 = -1191128945421767765LL;
unsigned short var_14 = (unsigned short)52639;
unsigned long long int var_15 = 3296613082159302384ULL;
int zero = 0;
signed char var_19 = (signed char)-91;
unsigned int var_20 = 973753659U;
int var_21 = -447726106;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (signed char)23;
    value_mismatch |= var_20 != 1620335235U;
    value_mismatch |= var_21 != -1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_5, var_6, var_10, var_12, var_14, var_15, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
