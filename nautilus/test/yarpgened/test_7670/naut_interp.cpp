/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7670
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7670
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
void test(val<unsigned char> var_4, val<short> var_8, val<int> var_10, val<int> zero, val<bool*> var_11, val<unsigned int*> var_12) {
    *var_11 = ((/* implicit */val<bool>) (((val<bool>)1) ? (((/* implicit */val<int>) ((((/* implicit */val<int>) var_4)) >= (((/* implicit */val<int>) var_8))))) : (((/* implicit */val<int>) (val<signed char>)-53))));
    *var_12 *= ((/* implicit */val<unsigned int>) var_10);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)15;
short var_8 = (short)-4261;
int var_10 = 553777059;
int zero = 0;
bool var_11 = (bool)0;
unsigned int var_12 = 3044822266U;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (bool)1;
    value_mismatch |= var_12 != 56899886U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_8, var_10, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
