/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 33
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=33
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
void test(val<int> var_1, val<bool> var_12, val<int> zero, val<signed char*> var_20, val<unsigned char*> var_21, val<unsigned char*> var_22) {
    *var_20 = ((/* implicit */val<signed char>) var_1);
    *var_21 = ((/* implicit */val<unsigned char>) var_12);
    *var_22 = ((/* implicit */val<unsigned char>) var_1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 760182276;
bool var_12 = (bool)0;
int zero = 0;
signed char var_20 = (signed char)-28;
unsigned char var_21 = (unsigned char)229;
unsigned char var_22 = (unsigned char)130;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (signed char)4;
    value_mismatch |= var_21 != (unsigned char)0;
    value_mismatch |= var_22 != (unsigned char)4;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_12, zero, &var_20, &var_21, &var_22);
  checksum();
}
