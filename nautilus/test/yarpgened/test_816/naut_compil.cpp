/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 816
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=816
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
void test(val<int> var_8, val<bool> var_11, val<unsigned int> var_13, val<signed char> var_14, val<signed char> var_17, val<int> zero, val<short*> var_19, val<unsigned int*> var_20, val<unsigned char*> var_21) {
    *var_19 = ((/* implicit */val<short>) max((((((/* implicit */val<bool>) (val<unsigned char>)16)) ? (((/* implicit */val<int>) var_17)) : (((/* implicit */val<int>) var_11)))), (((/* implicit */val<int>) var_14))));
    *var_20 = ((/* implicit */val<unsigned int>) var_8);
    *var_21 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) (+(((((/* implicit */val<bool>) -134217728)) ? (((/* implicit */val<int>) (val<unsigned char>)16)) : (((/* implicit */val<int>) (val<unsigned char>)240))))))) ? (var_13) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)16442)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = -1987608462;
bool var_11 = (bool)0;
unsigned int var_13 = 3476211065U;
signed char var_14 = (signed char)-112;
signed char var_17 = (signed char)-30;
int zero = 0;
short var_19 = (short)-27692;
unsigned int var_20 = 3690068961U;
unsigned char var_21 = (unsigned char)222;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (short)-30;
    value_mismatch |= var_20 != 2307358834U;
    value_mismatch |= var_21 != (unsigned char)121;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, var_11, var_13, var_14, var_17, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
