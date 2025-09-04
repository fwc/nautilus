/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7024
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7024
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
void test(val<int> var_2, val<int> var_3, val<unsigned short> var_4, val<signed char> var_5, val<unsigned short> var_6, val<int> zero, val<signed char*> var_17, val<unsigned short*> var_18, val<int*> var_19, val<int*> var_20, val<signed char*> var_21, val<int*> var_22) {
    *var_17 = ((/* implicit */val<signed char>) var_4);
    *var_18 = var_6;
    *var_19 = max((((var_3) - (((/* implicit */val<int>) (val<signed char>)38)))), (((/* implicit */val<int>) ((((/* implicit */val<int>) var_4)) == (((/* implicit */val<int>) (val<unsigned short>)46922))))));
    *var_20 = ((/* implicit */val<int>) (-(min((((/* implicit */val<unsigned long long int>) var_2)), (((val<unsigned long long int>) var_2))))));
    if (((/* implicit */val<bool>) var_5))
    {
        *var_21 = ((/* implicit */val<signed char>) 16870353478421457432ULL);
        *var_22 = ((((/* implicit */val<int>) (val<signed char>)39)) * (((/* implicit */val<int>) (val<short>)5416)));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -710048186;
int var_3 = -674181938;
unsigned short var_4 = (unsigned short)38920;
signed char var_5 = (signed char)86;
unsigned short var_6 = (unsigned short)27935;
int zero = 0;
signed char var_17 = (signed char)36;
unsigned short var_18 = (unsigned short)62232;
int var_19 = -282749565;
int var_20 = 1105752299;
signed char var_21 = (signed char)-110;
int var_22 = 722046302;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (signed char)8;
    value_mismatch |= var_18 != (unsigned short)27935;
    value_mismatch |= var_19 != 0;
    value_mismatch |= var_20 != 710048186;
    value_mismatch |= var_21 != (signed char)24;
    value_mismatch |= var_22 != 211224;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_4, var_5, var_6, zero, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
