/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8700
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8700
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
void test(val<long long int> var_4, val<unsigned int> var_6, val<unsigned short> var_8, val<signed char> var_9, val<unsigned int> var_11, val<short> var_18, val<int> zero, val<unsigned int*> var_19, val<short*> var_20, val<bool*> var_21, val<short*> var_22, val<bool*> var_23) {
    *var_19 = var_6;
    *var_20 = ((/* implicit */val<short>) max((((/* implicit */val<int>) (val<signed char>)-1)), (max(((-(((/* implicit */val<int>) (val<short>)-32763)))), (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_8)))))))));
    *var_21 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_6)) ? (min((max((var_11), (var_6))), (((/* implicit */val<unsigned int>) 404573898)))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((val<bool>) var_4))))));
    *var_22 = ((/* implicit */val<short>) (!(((((/* implicit */val<int>) (val<signed char>)22)) >= (((/* implicit */val<int>) ((-6834268503672450883LL) == (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_9))))))))));
    *var_23 = ((/* implicit */val<bool>) var_18);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 6844413564457129825LL;
unsigned int var_6 = 1709964619U;
unsigned short var_8 = (unsigned short)39984;
signed char var_9 = (signed char)115;
unsigned int var_11 = 548344239U;
short var_18 = (short)-27427;
int zero = 0;
unsigned int var_19 = 2611131525U;
short var_20 = (short)27016;
bool var_21 = (bool)0;
short var_22 = (short)21430;
bool var_23 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 1709964619U;
    value_mismatch |= var_20 != (short)32763;
    value_mismatch |= var_21 != (bool)1;
    value_mismatch |= var_22 != (short)0;
    value_mismatch |= var_23 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_6, var_8, var_9, var_11, var_18, zero, &var_19, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
