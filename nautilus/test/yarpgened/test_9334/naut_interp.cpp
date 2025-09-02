/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9334
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9334
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
void test(val<signed char> var_5, val<unsigned long long int> var_14, val<int> zero, val<unsigned char*> var_19, val<int*> var_20) {
    *var_19 *= ((/* implicit */val<unsigned char>) ((val<signed char>) var_14));
    *var_20 += ((/* implicit */val<int>) var_5);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)82;
unsigned long long int var_14 = 14269733742938265197ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)98;
int var_20 = 347508108;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned char)186;
    value_mismatch |= var_20 != 347508190;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_14, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
