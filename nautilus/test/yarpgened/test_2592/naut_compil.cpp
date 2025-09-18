/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2592
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2592
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
void test(val<signed char> var_0, val<short> var_8, val<signed char> var_16, val<int> zero, val<int*> var_17, val<int*> var_18) {
    *var_17 &= ((((/* implicit */val<int>) var_16)) << (((((((((/* implicit */val<bool>) (val<unsigned short>)62071)) ? (1160447271070920575LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_8))))) % (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_0))))) - (31LL))));
    *var_18 = ((/* implicit */val<int>) (!(((/* implicit */val<bool>) min((((/* implicit */val<short>) (val<unsigned char>)206)), ((val<short>)-10287))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)62;
short var_8 = (short)-246;
signed char var_16 = (signed char)127;
int zero = 0;
int var_17 = 109690878;
int var_18 = -432164387;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 622592;
    value_mismatch |= var_18 != 0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_8, var_16, zero, &var_17, &var_18);
  checksum();
}
