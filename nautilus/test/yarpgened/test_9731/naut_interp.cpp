/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9731
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9731
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
void test(val<unsigned char> var_4, val<long long int> var_17, val<int> zero, val<unsigned short*> var_20, val<unsigned char*> var_21) {
    *var_20 = ((/* implicit */val<unsigned short>) min((*var_20), (((/* implicit */val<unsigned short>) (-(var_17))))));
    *var_21 = ((/* implicit */val<unsigned char>) (~(((/* implicit */val<int>) var_4))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)66;
long long int var_17 = 4251709836205314168LL;
int zero = 0;
unsigned short var_20 = (unsigned short)11644;
unsigned char var_21 = (unsigned char)165;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (unsigned short)11644;
    value_mismatch |= var_21 != (unsigned char)189;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_17, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
