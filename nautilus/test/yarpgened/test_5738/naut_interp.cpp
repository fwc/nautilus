/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5738
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5738
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
void test(val<int> var_3, val<unsigned long long int> var_4, val<short> var_10, val<int> zero, val<bool*> var_11, val<bool*> var_12) {
    *var_11 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_10)) ? (((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_3)))))) ^ (var_4))) : (8123218738505286625ULL)));
    *var_12 = ((/* implicit */val<bool>) var_3);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -151204011;
unsigned long long int var_4 = 13098047615558567925ULL;
short var_10 = (short)-13510;
int zero = 0;
bool var_11 = (bool)1;
bool var_12 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (bool)1;
    value_mismatch |= var_12 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_10, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
