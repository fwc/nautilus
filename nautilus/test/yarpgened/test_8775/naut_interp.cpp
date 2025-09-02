/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8775
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8775
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
void test(val<int> zero, val<signed char*> var_18, val<unsigned char*> var_19) {
    *var_18 = ((/* implicit */val<signed char>) (~((~((-(((/* implicit */val<int>) (val<bool>)1))))))));
    *var_19 += ((/* implicit */val<unsigned char>) (+((+((+(9115693470426175551ULL)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
signed char var_18 = (signed char)-40;
unsigned char var_19 = (unsigned char)156;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (signed char)-1;
    value_mismatch |= var_19 != (unsigned char)219;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
