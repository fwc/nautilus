/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4166
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4166
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
void test(val<unsigned short> var_9, val<unsigned int> var_14, val<int> zero, val<short*> var_18, val<signed char*> var_19) {
    *var_18 = ((/* implicit */val<short>) var_9);
    *var_19 = ((/* implicit */val<signed char>) min((min((min((1048575ULL), (1048575ULL))), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)31))) - (var_14)))))), (((/* implicit */val<unsigned long long int>) (val<bool>)1))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_9 = (unsigned short)41601;
unsigned int var_14 = 3327136320U;
int zero = 0;
short var_18 = (short)31823;
signed char var_19 = (signed char)-117;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (short)-23935;
    value_mismatch |= var_19 != (signed char)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_9, var_14, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
