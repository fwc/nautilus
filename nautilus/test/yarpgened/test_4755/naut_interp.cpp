/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4755
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4755
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
void test(val<unsigned char> var_0, val<unsigned int> var_5, val<int> zero, val<unsigned long long int*> var_16, val<short*> var_17) {
    *var_16 = ((/* implicit */val<unsigned long long int>) var_5);
    *var_17 = ((/* implicit */val<short>) min((*var_17), (((/* implicit */val<short>) var_0))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)167;
unsigned int var_5 = 2025718709U;
int zero = 0;
unsigned long long int var_16 = 6530636676930859959ULL;
short var_17 = (short)-788;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 2025718709ULL;
    value_mismatch |= var_17 != (short)-788;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_5, zero, &var_16, &var_17);
  checksum();
}
