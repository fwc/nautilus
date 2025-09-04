/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8464
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8464
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
void test(val<signed char> var_1, val<unsigned int> var_4, val<bool> var_8, val<int> zero, val<int*> var_18, val<unsigned long long int*> var_19, val<unsigned long long int*> var_20) {
    *var_18 = ((/* implicit */val<int>) ((val<short>) ((val<long long int>) ((((/* implicit */val<unsigned int>) -514582971)) < (var_4)))));
    *var_19 = ((/* implicit */val<unsigned long long int>) var_1);
    *var_20 = ((/* implicit */val<unsigned long long int>) var_8);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)80;
unsigned int var_4 = 119956404U;
bool var_8 = (bool)0;
int zero = 0;
int var_18 = -630874590;
unsigned long long int var_19 = 16536491326387090188ULL;
unsigned long long int var_20 = 2119845480141495796ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 0;
    value_mismatch |= var_19 != 80ULL;
    value_mismatch |= var_20 != 0ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_8, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
