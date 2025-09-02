/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4369
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4369
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
void test(val<unsigned char> var_1, val<int> var_3, val<unsigned char> var_5, val<unsigned int> var_6, val<unsigned int> var_7, val<int> zero, val<unsigned int*> var_11, val<unsigned int*> var_12) {
    *var_11 = max((((((/* implicit */val<bool>) min((((/* implicit */val<short>) (val<unsigned char>)153)), ((val<short>)-11376)))) ? (var_7) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((val<short>) (val<short>)32767)))))), (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) (+(((/* implicit */val<int>) var_1))))) ? (((/* implicit */val<int>) min((((/* implicit */val<short>) (val<unsigned char>)121)), ((val<short>)11375)))) : (((/* implicit */val<int>) min(((val<short>)-8073), ((val<short>)(-32767 - 1)))))))));
    *var_12 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) (+(((/* implicit */val<int>) (val<short>)-11376))))) ? (max((((((/* implicit */val<bool>) var_6)) ? ((-2147483647 - 1)) : (((/* implicit */val<int>) var_1)))), (((((/* implicit */val<bool>) (val<short>)32370)) ? (((/* implicit */val<int>) (val<short>)32767)) : (((/* implicit */val<int>) var_5)))))) : (var_3)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)1;
int var_3 = -2112142018;
unsigned char var_5 = (unsigned char)194;
unsigned int var_6 = 3126405729U;
unsigned int var_7 = 1586247043U;
int zero = 0;
unsigned int var_11 = 2978656778U;
unsigned int var_12 = 1838573184U;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 1586247043U;
    value_mismatch |= var_12 != 32767U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_5, var_6, var_7, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
