/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6686
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6686
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
void test(val<int> var_2, val<unsigned char> var_8, val<int> zero, val<int*> var_10, val<signed char*> var_11) {
    *var_10 = var_2;
    *var_11 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) ((val<unsigned int>) (val<short>)27887))) && (((/* implicit */val<bool>) ((val<unsigned long long int>) var_8)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -408023818;
unsigned char var_8 = (unsigned char)246;
int zero = 0;
int var_10 = -4031452;
signed char var_11 = (signed char)44;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != -408023818;
    value_mismatch |= var_11 != (signed char)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_8, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
