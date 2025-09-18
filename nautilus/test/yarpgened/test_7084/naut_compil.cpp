/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7084
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7084
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
void test(val<unsigned long long int> var_7, val<int> zero, val<long long int*> var_15, val<unsigned short*> var_16) {
    *var_15 = ((/* implicit */val<long long int>) var_7);
    *var_16 = ((/* implicit */val<unsigned short>) (val<unsigned char>)112);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 14468328259946268158ULL;
int zero = 0;
long long int var_15 = 1919813027053659045LL;
unsigned short var_16 = (unsigned short)31809;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != -3978415813763283458LL;
    value_mismatch |= var_16 != (unsigned short)112;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, zero, &var_15, &var_16);
  checksum();
}
