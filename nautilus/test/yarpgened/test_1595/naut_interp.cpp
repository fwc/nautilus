/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1595
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1595
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
void test(val<int> var_7, val<unsigned long long int> var_11, val<int> zero, val<long long int*> var_16, val<unsigned char*> var_17) {
    *var_16 = ((/* implicit */val<long long int>) var_11);
    *var_17 = ((/* implicit */val<unsigned char>) min((*var_17), (((/* implicit */val<unsigned char>) (!(((/* implicit */val<bool>) var_7)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 1775537619;
unsigned long long int var_11 = 11849467017389654871ULL;
int zero = 0;
long long int var_16 = -377854381910890484LL;
unsigned char var_17 = (unsigned char)180;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != -6597277056319896745LL;
    value_mismatch |= var_17 != (unsigned char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, var_11, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
