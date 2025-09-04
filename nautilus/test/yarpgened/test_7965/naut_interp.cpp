/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7965
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7965
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
void test(val<unsigned long long int> var_2, val<unsigned long long int> var_5, val<short> var_8, val<int> zero, val<short*> var_20, val<signed char*> var_21) {
    *var_20 = ((/* implicit */val<short>) min((var_5), (var_2)));
    *var_21 = ((/* implicit */val<signed char>) var_8);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7502598943250448860ULL;
unsigned long long int var_5 = 10295318480005033543ULL;
short var_8 = (short)-24084;
int zero = 0;
short var_20 = (short)21282;
signed char var_21 = (signed char)51;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (short)476;
    value_mismatch |= var_21 != (signed char)-20;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_8, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
