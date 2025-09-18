/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7555
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7555
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
void test(val<unsigned int> var_3, val<bool> var_4, val<unsigned char> var_9, val<unsigned int> var_12, val<int> zero, val<signed char*> var_14, val<unsigned long long int*> var_15, val<signed char*> var_16, val<short*> var_17, val<unsigned int*> var_18) {
    *var_14 -= ((/* implicit */val<signed char>) var_4);
    *var_15 = ((/* implicit */val<unsigned long long int>) ((val<long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) (val<short>)-1)) / (((/* implicit */val<int>) (val<short>)-4))))) ? (((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<int>) (val<short>)-18)) : (((/* implicit */val<int>) var_4)))) : (((/* implicit */val<int>) (val<unsigned char>)76)))));
    *var_16 = ((/* implicit */val<signed char>) max((*var_16), (((/* implicit */val<signed char>) ((((/* implicit */val<int>) (val<short>)7)) ^ (((/* implicit */val<int>) (val<signed char>)96)))))));
    *var_17 = ((/* implicit */val<short>) ((val<signed char>) var_3));
    *var_18 = ((/* implicit */val<unsigned int>) ((val<unsigned long long int>) ((val<bool>) ((((((/* implicit */val<int>) (val<short>)-7)) + (2147483647))) >> (((var_12) - (1738975819U)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2510403530U;
bool var_4 = (bool)1;
unsigned char var_9 = (unsigned char)68;
unsigned int var_12 = 1738975842U;
int zero = 0;
signed char var_14 = (signed char)45;
unsigned long long int var_15 = 17441393603760290628ULL;
signed char var_16 = (signed char)-36;
short var_17 = (short)18642;
unsigned int var_18 = 241968411U;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (signed char)44;
    value_mismatch |= var_15 != 76ULL;
    value_mismatch |= var_16 != (signed char)103;
    value_mismatch |= var_17 != (short)-54;
    value_mismatch |= var_18 != 1U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_9, var_12, zero, &var_14, &var_15, &var_16, &var_17, &var_18);
  checksum();
}
