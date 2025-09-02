/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4394
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4394
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
void test(val<unsigned short> var_8, val<long long int> var_9, val<int> zero, val<signed char*> var_15, val<signed char*> var_16) {
    *var_15 &= ((/* implicit */val<signed char>) ((((/* implicit */val<unsigned long long int>) ((val<long long int>) (-(((/* implicit */val<int>) var_8)))))) == ((-(((((/* implicit */val<bool>) 3395617954237264817LL)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)13))) : (0ULL)))))));
    *var_16 &= ((/* implicit */val<signed char>) var_9);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)10358;
long long int var_9 = -674518452390925467LL;
int zero = 0;
signed char var_15 = (signed char)-48;
signed char var_16 = (signed char)-30;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (signed char)0;
    value_mismatch |= var_16 != (signed char)96;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, var_9, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
