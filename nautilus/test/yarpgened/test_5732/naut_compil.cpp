/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5732
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5732
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
void test(val<short> var_1, val<unsigned long long int> var_8, val<unsigned char> var_10, val<short> var_16, val<long long int> var_18, val<int> zero, val<short*> var_19, val<unsigned char*> var_20) {
    *var_19 = ((/* implicit */val<short>) var_10);
    *var_20 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<int>) var_16)) ^ (((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_1))) < (var_8))))) <= (min((18446744073709551605ULL), (((/* implicit */val<unsigned long long int>) var_18)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-31195;
unsigned long long int var_8 = 9482877584158209074ULL;
unsigned char var_10 = (unsigned char)30;
short var_16 = (short)-23804;
long long int var_18 = 2463795397894634603LL;
int zero = 0;
short var_19 = (short)13396;
unsigned char var_20 = (unsigned char)220;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (short)30;
    value_mismatch |= var_20 != (unsigned char)5;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_8, var_10, var_16, var_18, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
