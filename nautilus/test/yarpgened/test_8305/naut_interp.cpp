/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8305
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8305
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
void test(val<bool> var_2, val<short> var_3, val<unsigned long long int> var_4, val<long long int> var_7, val<long long int> var_8, val<short> var_10, val<int> zero, val<unsigned long long int*> var_15, val<unsigned char*> var_16) {
    *var_15 = ((/* implicit */val<unsigned long long int>) max((*var_15), (((((/* implicit */val<bool>) (~(max((((/* implicit */val<long long int>) -642645315)), (var_7)))))) ? (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 2147483647)) ? (((/* implicit */val<int>) (val<short>)11969)) : (((/* implicit */val<int>) (val<unsigned char>)73))))) ? (((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_2))) : (var_4))) : (((/* implicit */val<unsigned long long int>) var_8)))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<bool>) max((((/* implicit */val<short>) (val<signed char>)-80)), (var_3))))))))));
    *var_16 = ((/* implicit */val<unsigned char>) var_3);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_2 = (bool)1;
short var_3 = (short)20694;
unsigned long long int var_4 = 18407453109673545614ULL;
long long int var_7 = -6444724307561934698LL;
long long int var_8 = 304435192161650148LL;
short var_10 = (short)21090;
int zero = 0;
unsigned long long int var_15 = 12586693892715517938ULL;
unsigned char var_16 = (unsigned char)167;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 12586693892715517938ULL;
    value_mismatch |= var_16 != (unsigned char)214;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_4, var_7, var_8, var_10, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
