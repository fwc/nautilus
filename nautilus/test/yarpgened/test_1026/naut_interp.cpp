/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1026
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1026
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
void test(val<signed char> var_1, val<int> var_8, val<unsigned char> var_9, val<int> zero, val<unsigned char*> var_14, val<unsigned int*> var_15, val<short*> var_16) {
    *var_14 = ((/* implicit */val<unsigned char>) (+(((/* implicit */val<int>) ((((/* implicit */val<bool>) ((val<short>) (val<unsigned short>)65535))) && (((/* implicit */val<bool>) max((var_8), (((/* implicit */val<int>) var_1))))))))));
    *var_15 += ((/* implicit */val<unsigned int>) var_9);
    *var_16 = ((/* implicit */val<short>) (val<signed char>)-1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-72;
int var_8 = -1939217744;
unsigned char var_9 = (unsigned char)28;
int zero = 0;
unsigned char var_14 = (unsigned char)137;
unsigned int var_15 = 209766941U;
short var_16 = (short)-19468;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned char)1;
    value_mismatch |= var_15 != 209766969U;
    value_mismatch |= var_16 != (short)-1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_8, var_9, zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
