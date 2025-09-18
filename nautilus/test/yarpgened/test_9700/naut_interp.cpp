/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9700
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9700
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
void test(val<unsigned int> var_0, val<int> var_4, val<short> var_7, val<unsigned short> var_11, val<int> zero, val<signed char*> var_12, val<unsigned long long int*> var_13, val<unsigned char*> var_14, val<unsigned char*> var_15) {
    *var_12 ^= ((/* implicit */val<signed char>) 10792475887829851395ULL);
    if (((/* implicit */val<bool>) (~(((/* implicit */val<int>) (val<unsigned char>)253)))))
    {
        *var_13 += ((/* implicit */val<unsigned long long int>) var_4);
        *var_14 = ((/* implicit */val<unsigned char>) var_11);
        *var_15 = ((/* implicit */val<unsigned char>) ((var_0) << (((((/* implicit */val<int>) var_7)) + (22464)))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1581937874U;
int var_4 = -1967127573;
short var_7 = (short)-22444;
unsigned short var_11 = (unsigned short)46704;
int zero = 0;
signed char var_12 = (signed char)1;
unsigned long long int var_13 = 2128503712553890126ULL;
unsigned char var_14 = (unsigned char)49;
unsigned char var_15 = (unsigned char)82;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (signed char)2;
    value_mismatch |= var_13 != 2128503710586762553ULL;
    value_mismatch |= var_14 != (unsigned char)112;
    value_mismatch |= var_15 != (unsigned char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_7, var_11, zero, &var_12, &var_13, &var_14, &var_15);
  checksum();
}
