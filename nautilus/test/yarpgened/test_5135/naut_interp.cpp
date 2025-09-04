/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5135
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5135
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
void test(val<bool> var_1, val<bool> var_4, val<signed char> var_9, val<int> zero, val<long long int*> var_20, val<long long int*> var_21, val<int*> var_22) {
    *var_20 = ((/* implicit */val<long long int>) 972830932U);
    *var_21 = ((/* implicit */val<long long int>) ((((((/* implicit */val<bool>) (val<signed char>)65)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned short>)33669))) : (((var_4) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)54))) : (0ULL))))) * (((((/* implicit */val<unsigned long long int>) (-(((/* implicit */val<int>) (val<unsigned short>)37378))))) / (((((/* implicit */val<bool>) 18446744073709551613ULL)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<short>)(-32767 - 1)))) : (1691785550687654414ULL)))))));
    *var_22 = ((/* implicit */val<int>) max((((val<unsigned long long int>) ((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<int>) (val<bool>)0)) : (((/* implicit */val<int>) var_1))))), (((/* implicit */val<unsigned long long int>) var_9))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)0;
bool var_4 = (bool)0;
signed char var_9 = (signed char)12;
int zero = 0;
long long int var_20 = -4234817590084950568LL;
long long int var_21 = 8987894123550936212LL;
int var_22 = -926578664;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 972830932LL;
    value_mismatch |= var_21 != 0LL;
    value_mismatch |= var_22 != 12;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_9, zero, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
