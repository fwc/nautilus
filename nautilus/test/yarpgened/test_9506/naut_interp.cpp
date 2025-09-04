/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9506
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9506
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
void test(val<long long int> var_7, val<signed char> var_8, val<int> zero, val<short*> var_10, val<bool*> var_11, val<unsigned char*> var_12, val<short*> var_13) {
    *var_10 = ((/* implicit */val<short>) (val<signed char>)7);
    if (((/* implicit */val<bool>) (val<unsigned short>)16589))
    {
        *var_11 = ((/* implicit */val<bool>) max((((/* implicit */val<int>) max((((((/* implicit */val<bool>) var_8)) && (((/* implicit */val<bool>) (val<signed char>)76)))), ((!((val<bool>)1)))))), (((val<int>) ((((/* implicit */val<bool>) var_7)) && (((/* implicit */val<bool>) var_8)))))));
        *var_12 &= ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) max((((((/* implicit */val<int>) (val<unsigned short>)48947)) | (((/* implicit */val<int>) (val<short>)-1)))), (16383)))) ? ((~(((((/* implicit */val<int>) (val<unsigned short>)16589)) & (((/* implicit */val<int>) (val<unsigned short>)41356)))))) : (max(((~(((/* implicit */val<int>) (val<signed char>)-55)))), (((((/* implicit */val<bool>) -435855252)) ? (((/* implicit */val<int>) (val<short>)252)) : (((/* implicit */val<int>) (val<unsigned short>)44420))))))));
        *var_13 = ((/* implicit */val<short>) (~(((/* implicit */val<int>) max((((/* implicit */val<unsigned char>) (val<signed char>)127)), ((val<unsigned char>)11))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -7473654732196877770LL;
signed char var_8 = (signed char)31;
int zero = 0;
short var_10 = (short)20459;
bool var_11 = (bool)1;
unsigned char var_12 = (unsigned char)201;
short var_13 = (short)-17207;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (short)7;
    value_mismatch |= var_11 != (bool)1;
    value_mismatch |= var_12 != (unsigned char)65;
    value_mismatch |= var_13 != (short)-128;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, var_8, zero, &var_10, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
