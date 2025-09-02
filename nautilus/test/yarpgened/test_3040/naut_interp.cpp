/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3040
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3040
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
void test(val<bool> var_1, val<bool> var_4, val<int> zero, val<int*> var_10, val<int*> var_11) {
    *var_10 = ((/* implicit */val<int>) var_1);
    *var_11 = ((/* implicit */val<int>) ((((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<short>)31748)) ? (((/* implicit */val<int>) (val<unsigned char>)222)) : (((/* implicit */val<int>) var_4)))))))) == (((/* implicit */val<int>) (val<short>)-31749))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)1;
bool var_4 = (bool)1;
int zero = 0;
int var_10 = -1616729592;
int var_11 = -80204808;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 1;
    value_mismatch |= var_11 != 0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
