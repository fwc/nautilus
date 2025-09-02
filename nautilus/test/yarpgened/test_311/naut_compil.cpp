/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 311
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=311
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
void test(val<long long int> var_2, val<short> var_4, val<unsigned char> var_14, val<int> zero, val<unsigned int*> var_18, val<short*> var_19) {
    *var_18 = ((/* implicit */val<unsigned int>) ((val<long long int>) var_4));
    *var_19 = ((/* implicit */val<short>) min((*var_19), (((/* implicit */val<short>) ((((/* implicit */val<bool>) var_14)) ? (((/* implicit */val<int>) (val<short>)5483)) : (((/* implicit */val<int>) ((val<short>) var_2))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5173628603642788640LL;
short var_4 = (short)-2258;
unsigned char var_14 = (unsigned char)9;
int zero = 0;
unsigned int var_18 = 737039435U;
short var_19 = (short)-25930;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 4294965038U;
    value_mismatch |= var_19 != (short)-25930;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_14, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
