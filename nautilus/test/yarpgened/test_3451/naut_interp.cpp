/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3451
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3451
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
void test(val<unsigned char> var_5, val<long long int> var_9, val<int> zero, val<unsigned long long int*> var_12, val<long long int*> var_13, val<unsigned int*> var_14) {
    *var_12 = ((/* implicit */val<unsigned long long int>) var_5);
    *var_13 &= ((/* implicit */val<long long int>) (val<unsigned short>)45340);
    *var_14 = ((/* implicit */val<unsigned int>) var_9);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)145;
long long int var_9 = 1625836314847952660LL;
int zero = 0;
unsigned long long int var_12 = 18129957888656968479ULL;
long long int var_13 = 8891742350861243218LL;
unsigned int var_14 = 1188401983U;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 145ULL;
    value_mismatch |= var_13 != 37136LL;
    value_mismatch |= var_14 != 2842771220U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_9, zero, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
