/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4860
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4860
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
void test(val<signed char> var_0, val<unsigned short> var_4, val<int> var_11, val<int> zero, val<unsigned char*> var_16, val<short*> var_17, val<unsigned int*> var_18) {
    *var_16 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) ((val<short>) ((5711307022905726871ULL) | (0ULL))))) ? (((/* implicit */val<int>) ((val<short>) ((val<unsigned short>) -972441201774973488LL)))) : (((/* implicit */val<int>) ((((/* implicit */val<int>) var_4)) <= (338897520))))));
    *var_17 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) ((-338897520) | (((/* implicit */val<int>) (val<signed char>)-24))))) ? (((/* implicit */val<unsigned long long int>) ((val<int>) var_0))) : (((((/* implicit */val<unsigned long long int>) var_11)) * (((18446744073709551615ULL) / (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)255)))))))));
    *var_18 -= 3087038584U;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)106;
unsigned short var_4 = (unsigned short)15908;
int var_11 = -1914121260;
int zero = 0;
unsigned char var_16 = (unsigned char)212;
short var_17 = (short)-7002;
unsigned int var_18 = 468632093U;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned char)208;
    value_mismatch |= var_17 != (short)106;
    value_mismatch |= var_18 != 1676560805U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_11, zero, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
