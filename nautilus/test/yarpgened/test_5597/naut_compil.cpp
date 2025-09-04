/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5597
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5597
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
void test(val<short> var_0, val<short> var_10, val<int> zero, val<unsigned short*> var_11, val<long long int*> var_12) {
    *var_11 = ((/* implicit */val<unsigned short>) var_10);
    *var_12 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) (+(4095LL)))) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((val<long long int>) var_0)))))) : (((/* implicit */val<int>) var_0))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25135;
short var_10 = (short)-21766;
int zero = 0;
unsigned short var_11 = (unsigned short)3612;
long long int var_12 = -7399298780006294846LL;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (unsigned short)43770;
    value_mismatch |= var_12 != 0LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_10, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
