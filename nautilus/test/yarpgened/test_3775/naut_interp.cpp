/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3775
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3775
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
void test(val<unsigned int> var_1, val<unsigned short> var_2, val<unsigned short> var_4, val<unsigned int> var_5, val<signed char> var_6, val<unsigned char> var_7, val<unsigned char> var_11, val<int> zero, val<unsigned char*> var_14, val<unsigned short*> var_15, val<signed char*> var_16, val<unsigned int*> var_17) {
    *var_14 = ((/* implicit */val<unsigned char>) (!(((/* implicit */val<bool>) (val<unsigned char>)75))));
    if (((/* implicit */val<bool>) var_4))
    {
        *var_15 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) max(((val<unsigned char>)109), (((/* implicit */val<unsigned char>) (val<signed char>)-16)))))) != ((((val<bool>)1) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_2))) : (var_1)))))) - (((/* implicit */val<int>) var_7))));
        *var_16 = ((/* implicit */val<signed char>) var_11);
        *var_17 |= ((((/* implicit */val<bool>) (val<signed char>)0)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_6))) : (var_5));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3931874721U;
unsigned short var_2 = (unsigned short)10305;
unsigned short var_4 = (unsigned short)36603;
unsigned int var_5 = 2992594481U;
signed char var_6 = (signed char)55;
unsigned char var_7 = (unsigned char)102;
unsigned char var_11 = (unsigned char)57;
int zero = 0;
unsigned char var_14 = (unsigned char)146;
unsigned short var_15 = (unsigned short)27;
signed char var_16 = (signed char)-41;
unsigned int var_17 = 545002493U;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned char)0;
    value_mismatch |= var_15 != (unsigned short)65435;
    value_mismatch |= var_16 != (signed char)57;
    value_mismatch |= var_17 != 2994692093U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_4, var_5, var_6, var_7, var_11, zero, &var_14, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
