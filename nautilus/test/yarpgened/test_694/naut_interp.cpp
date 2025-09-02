/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 694
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=694
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
void test(val<int> var_3, val<signed char> var_8, val<int> zero, val<int*> var_10, val<int*> var_11) {
    *var_10 = ((/* implicit */val<int>) min((*var_10), (var_3)));
    *var_11 = (+(((/* implicit */val<int>) min((((/* implicit */val<unsigned char>) var_8)), ((val<unsigned char>)35)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1695756003;
signed char var_8 = (signed char)51;
int zero = 0;
int var_10 = 1048096438;
int var_11 = 462611348;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 1048096438;
    value_mismatch |= var_11 != 35;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_8, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
