/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 609
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=609
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
void test(val<long long int> var_7, val<int> zero, val<short*> var_13, val<int*> var_14, val<long long int*> var_15) {
    *var_13 = ((/* implicit */val<short>) ((val<unsigned short>) var_7));
    *var_14 = ((/* implicit */val<int>) ((((/* implicit */val<long long int>) ((val<int>) (+(-4706649538032499450LL))))) == ((~(var_7)))));
    *var_15 = ((/* implicit */val<long long int>) (val<short>)3992);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 8580398534858071623LL;
int zero = 0;
short var_13 = (short)-15456;
int var_14 = -306514177;
long long int var_15 = 1178811357332326547LL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (short)24135;
    value_mismatch |= var_14 != 0;
    value_mismatch |= var_15 != 3992LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, zero, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
