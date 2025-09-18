/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2241
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2241
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
void test(val<bool> var_12, val<int> zero, val<unsigned short*> var_18, val<unsigned short*> var_19) {
    *var_18 = ((/* implicit */val<unsigned short>) max((*var_18), (((/* implicit */val<unsigned short>) (~(((/* implicit */val<int>) var_12)))))));
    *var_19 = (val<unsigned short>)31066;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_12 = (bool)1;
int zero = 0;
unsigned short var_18 = (unsigned short)16654;
unsigned short var_19 = (unsigned short)32278;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned short)65534;
    value_mismatch |= var_19 != (unsigned short)31066;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_12, zero, &var_18, &var_19);
  checksum();
}
