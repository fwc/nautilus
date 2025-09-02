/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3918
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3918
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
void test(val<unsigned char> var_6, val<int> zero, val<int*> var_10, val<bool*> var_11) {
    *var_10 = ((/* implicit */val<int>) var_6);
    *var_11 = ((/* implicit */val<bool>) max((*var_11), (((/* implicit */val<bool>) max(((+((-(((/* implicit */val<int>) (val<short>)-19737)))))), ((-(((((/* implicit */val<int>) (val<bool>)1)) * (((/* implicit */val<int>) (val<short>)-19728)))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)219;
int zero = 0;
int var_10 = 32438711;
bool var_11 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 219;
    value_mismatch |= var_11 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
