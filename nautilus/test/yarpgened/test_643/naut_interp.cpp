/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 643
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=643
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
void test(val<unsigned short> var_3, val<int> zero, val<unsigned char*> var_15, val<long long int*> var_16, val<int*> var_17) {
    *var_15 = ((/* implicit */val<unsigned char>) min((*var_15), (((/* implicit */val<unsigned char>) var_3))));
    *var_16 = ((/* implicit */val<long long int>) var_3);
    *var_17 = ((/* implicit */val<int>) (+(-6128666151749537004LL)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)22905;
int zero = 0;
unsigned char var_15 = (unsigned char)168;
long long int var_16 = -8564789111075382996LL;
int var_17 = 456307123;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned char)121;
    value_mismatch |= var_16 != 22905LL;
    value_mismatch |= var_17 != 637678356;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
