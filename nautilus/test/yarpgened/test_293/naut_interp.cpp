/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 293
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=293
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
void test(val<unsigned char> var_1, val<unsigned char> var_4, val<int> zero, val<unsigned long long int*> var_11, val<bool*> var_12) {
    *var_11 -= ((/* implicit */val<unsigned long long int>) ((val<unsigned char>) ((val<bool>) var_4)));
    *var_12 = ((/* implicit */val<bool>) var_1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)56;
unsigned char var_4 = (unsigned char)186;
int zero = 0;
unsigned long long int var_11 = 722274794816563749ULL;
bool var_12 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 722274794816563748ULL;
    value_mismatch |= var_12 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
