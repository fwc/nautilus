/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5009
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5009
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
void test(val<unsigned char> var_2, val<long long int> var_3, val<int> zero, val<unsigned short*> var_13, val<long long int*> var_14) {
    *var_13 = ((/* implicit */val<unsigned short>) var_3);
    *var_14 = ((/* implicit */val<long long int>) var_2);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)189;
long long int var_3 = 4147851992821288423LL;
int zero = 0;
unsigned short var_13 = (unsigned short)58328;
long long int var_14 = 6959017781413017518LL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned short)19943;
    value_mismatch |= var_14 != 189LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
