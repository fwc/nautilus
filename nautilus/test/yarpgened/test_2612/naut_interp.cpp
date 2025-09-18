/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2612
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2612
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
void test(val<signed char> var_2, val<int> zero, val<unsigned char*> var_14, val<unsigned short*> var_15, val<long long int*> var_16) {
    *var_14 = ((/* implicit */val<unsigned char>) (val<unsigned short>)53964);
    *var_15 = ((/* implicit */val<unsigned short>) var_2);
    *var_16 = 8672716305306860592LL;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)63;
int zero = 0;
unsigned char var_14 = (unsigned char)176;
unsigned short var_15 = (unsigned short)3089;
long long int var_16 = 8896291962469479583LL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned char)204;
    value_mismatch |= var_15 != (unsigned short)63;
    value_mismatch |= var_16 != 8672716305306860592LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, zero, &var_14, &var_15, &var_16);
  checksum();
}
