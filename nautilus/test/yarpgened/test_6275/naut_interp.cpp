/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6275
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6275
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
void test(val<int> var_2, val<int> var_7, val<signed char> var_10, val<int> zero, val<int*> var_17, val<unsigned int*> var_18, val<signed char*> var_19, val<unsigned short*> var_20, val<bool*> var_21) {
    *var_17 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) (val<unsigned short>)25305)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<unsigned short>)56154)))))) : (max((4122388499184849612ULL), (((/* implicit */val<unsigned long long int>) var_7))))));
    *var_18 = (-(((((/* implicit */val<bool>) var_10)) ? (1217825980U) : (min((((/* implicit */val<unsigned int>) var_2)), (214224087U))))));
    *var_19 = ((/* implicit */val<signed char>) var_7);
    *var_20 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) 5657090818490385797LL)) ? (4080743210U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)0)))));
    *var_21 += ((/* implicit */val<bool>) ((((/* implicit */val<int>) (val<unsigned short>)21328)) >> (((/* implicit */val<int>) ((2147483648U) < (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<signed char>)-86)))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -2005548927;
int var_7 = 225512563;
signed char var_10 = (signed char)-124;
int zero = 0;
int var_17 = 433177259;
unsigned int var_18 = 1373387068U;
signed char var_19 = (signed char)-6;
unsigned short var_20 = (unsigned short)49803;
bool var_21 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 0;
    value_mismatch |= var_18 != 3077141316U;
    value_mismatch |= var_19 != (signed char)115;
    value_mismatch |= var_20 != (unsigned short)13098;
    value_mismatch |= var_21 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_7, var_10, zero, &var_17, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
