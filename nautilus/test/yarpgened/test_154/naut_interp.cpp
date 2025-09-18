/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 154
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=154
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
void test(val<unsigned short> var_4, val<unsigned long long int> var_7, val<unsigned short> var_13, val<int> zero, val<short*> var_20, val<long long int*> var_21) {
    *var_20 = ((/* implicit */val<short>) max((var_7), (((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) var_13)))))));
    *var_21 = ((/* implicit */val<long long int>) (+(((/* implicit */val<int>) var_4))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)33134;
unsigned long long int var_7 = 11518327111939278737ULL;
unsigned short var_13 = (unsigned short)65416;
int zero = 0;
short var_20 = (short)-29523;
long long int var_21 = 948233209242879588LL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (short)18321;
    value_mismatch |= var_21 != 33134LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_7, var_13, zero, &var_20, &var_21);
  checksum();
}
