/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8395
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8395
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
void test(val<short> var_1, val<short> var_4, val<unsigned short> var_5, val<unsigned int> var_8, val<short> var_10, val<short> var_11, val<long long int> var_13, val<bool> var_15, val<short> var_16, val<long long int> var_17, val<int> zero, val<bool*> var_18, val<long long int*> var_19) {
    *var_18 = ((/* implicit */val<bool>) ((((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_11))) >= ((((val<bool>)1) ? (var_13) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_15))))))) ? (((((((/* implicit */val<bool>) var_17)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_10))) : (var_8))) % (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_16))))) : (((/* implicit */val<unsigned int>) (-(((/* implicit */val<int>) (val<bool>)1)))))));
    *var_19 -= ((/* implicit */val<long long int>) min((max(((~(((/* implicit */val<int>) var_1)))), (((/* implicit */val<int>) var_4)))), (((/* implicit */val<int>) var_5))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-3667;
short var_4 = (short)-27697;
unsigned short var_5 = (unsigned short)26213;
unsigned int var_8 = 184349477U;
short var_10 = (short)-9417;
short var_11 = (short)6752;
long long int var_13 = -9055514378936457982LL;
bool var_15 = (bool)1;
short var_16 = (short)20458;
long long int var_17 = 7974489567239393750LL;
int zero = 0;
bool var_18 = (bool)1;
long long int var_19 = -8952380350555017309LL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (bool)1;
    value_mismatch |= var_19 != -8952380350555020975LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_5, var_8, var_10, var_11, var_13, var_15, var_16, var_17, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
