/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 606
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=606
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
void test(val<signed char> var_1, val<unsigned short> var_2, val<signed char> var_4, val<unsigned short> var_5, val<short> var_6, val<unsigned long long int> var_8, val<int> var_9, val<int> zero, val<unsigned short*> var_10, val<unsigned long long int*> var_11, val<unsigned short*> var_12, val<long long int*> var_13) {
    *var_10 = ((/* implicit */val<unsigned short>) ((max((((/* implicit */val<int>) (val<signed char>)122)), (((((/* implicit */val<bool>) (val<signed char>)109)) ? (((/* implicit */val<int>) (val<unsigned short>)59949)) : (((/* implicit */val<int>) var_6)))))) + (((((((/* implicit */val<int>) (val<signed char>)-126)) - (((/* implicit */val<int>) var_6)))) >> (((((/* implicit */val<int>) var_1)) + (85)))))));
    *var_11 = ((/* implicit */val<unsigned long long int>) min((((/* implicit */val<unsigned short>) (val<signed char>)105)), (var_2)));
    *var_12 = ((/* implicit */val<unsigned short>) (-((-(((((/* implicit */val<int>) (val<signed char>)-105)) / (((/* implicit */val<int>) (val<unsigned short>)29289))))))));
    *var_13 = ((/* implicit */val<long long int>) ((((/* implicit */val<int>) var_6)) > (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_9)) ? (var_8) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_5)))))) ? (((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<int>) var_4)) : (var_9))) : (((/* implicit */val<int>) min((((/* implicit */val<unsigned short>) (val<signed char>)105)), (var_5))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-60;
unsigned short var_2 = (unsigned short)64497;
signed char var_4 = (signed char)-97;
unsigned short var_5 = (unsigned short)7219;
short var_6 = (short)-10763;
unsigned long long int var_8 = 17158275035849826286ULL;
int var_9 = -1484626203;
int zero = 0;
unsigned short var_10 = (unsigned short)48484;
unsigned long long int var_11 = 9143863826545819529ULL;
unsigned short var_12 = (unsigned short)24717;
long long int var_13 = -6546178216554702736LL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned short)59949;
    value_mismatch |= var_11 != 105ULL;
    value_mismatch |= var_12 != (unsigned short)0;
    value_mismatch |= var_13 != 0LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_4, var_5, var_6, var_8, var_9, zero, &var_10, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
