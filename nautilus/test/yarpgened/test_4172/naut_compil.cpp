/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4172
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4172
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
void test(val<unsigned short> var_8, val<int> zero, val<unsigned int*> var_14, val<long long int*> var_15) {
    *var_14 += ((/* implicit */val<unsigned int>) var_8);
    *var_15 = ((/* implicit */val<long long int>) (val<unsigned char>)14);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)65428;
int zero = 0;
unsigned int var_14 = 1614146476U;
long long int var_15 = -1628817539656230510LL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 1614211904U;
    value_mismatch |= var_15 != 14LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
