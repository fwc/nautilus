/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1603
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1603
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
void test(val<unsigned int> var_0, val<unsigned char> var_8, val<short> var_9, val<unsigned long long int> var_11, val<short> var_14, val<int> zero, val<unsigned int*> var_15, val<long long int*> var_16) {
    *var_15 += ((/* implicit */val<unsigned int>) (-(((/* implicit */val<int>) var_9))));
    *var_16 ^= ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((val<unsigned short>) ((((/* implicit */val<bool>) var_14)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_8))) : (var_0))))) ? (min((((/* implicit */val<unsigned long long int>) var_9)), (max((((/* implicit */val<unsigned long long int>) 4187886340U)), (var_11))))) : (((/* implicit */val<unsigned long long int>) (+(1487032043))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 772122408U;
unsigned char var_8 = (unsigned char)113;
short var_9 = (short)20892;
unsigned long long int var_11 = 10144787495290558077ULL;
short var_14 = (short)-27419;
int zero = 0;
unsigned int var_15 = 3921921135U;
long long int var_16 = 958724311164839244LL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 3921900243U;
    value_mismatch |= var_16 != 958724311164826832LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_8, var_9, var_11, var_14, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
