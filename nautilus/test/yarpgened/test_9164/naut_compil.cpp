/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9164
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9164
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
void test(val<bool> var_18, val<int> zero, val<signed char*> var_19, val<unsigned char*> var_20) {
    *var_19 |= ((/* implicit */val<signed char>) var_18);
    *var_20 = ((/* implicit */val<unsigned char>) (!(((/* implicit */val<bool>) min((((/* implicit */val<int>) (val<unsigned short>)0)), (766676300))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_18 = (bool)1;
int zero = 0;
signed char var_19 = (signed char)36;
unsigned char var_20 = (unsigned char)188;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (signed char)37;
    value_mismatch |= var_20 != (unsigned char)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_18, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
