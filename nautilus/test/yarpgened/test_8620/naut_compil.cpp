/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8620
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8620
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
void test(val<short> var_4, val<unsigned short> var_13, val<int> zero, val<bool*> var_20, val<bool*> var_21) {
    *var_20 = (!(((/* implicit */val<bool>) var_13)));
    *var_21 = ((/* implicit */val<bool>) min((*var_21), (((/* implicit */val<bool>) var_4))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-19420;
unsigned short var_13 = (unsigned short)50931;
int zero = 0;
bool var_20 = (bool)0;
bool var_21 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (bool)0;
    value_mismatch |= var_21 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_13, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
