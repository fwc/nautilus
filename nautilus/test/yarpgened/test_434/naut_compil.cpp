/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 434
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=434
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
void test(val<long long int> var_2, val<bool> var_7, val<short> var_12, val<int> zero, val<unsigned long long int*> var_16, val<unsigned int*> var_17, val<signed char*> var_18, val<short*> var_19) {
    if (((/* implicit */val<bool>) (((!(((/* implicit */val<bool>) (+(((/* implicit */val<int>) (val<signed char>)7))))))) ? (((((((/* implicit */val<int>) (val<signed char>)-99)) == (87147685))) ? (((/* implicit */val<int>) ((((/* implicit */val<int>) (val<bool>)1)) >= (((/* implicit */val<int>) (val<signed char>)37))))) : (((/* implicit */val<int>) (!((val<bool>)0)))))) : (((((/* implicit */val<bool>) (((val<bool>)1) ? (((/* implicit */val<int>) (val<unsigned short>)5143)) : (((/* implicit */val<int>) (val<unsigned short>)44384))))) ? (((/* implicit */val<int>) ((val<unsigned char>) (val<signed char>)28))) : (((((/* implicit */val<bool>) (val<signed char>)28)) ? (((/* implicit */val<int>) (val<unsigned short>)44408)) : (((/* implicit */val<int>) (val<unsigned short>)44404)))))))))
    {
        *var_16 = ((/* implicit */val<unsigned long long int>) ((((val<long long int>) (!(((/* implicit */val<bool>) (val<unsigned char>)255))))) >= (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) max(((val<short>)-3702), (((/* implicit */val<short>) (val<signed char>)-100))))) ? ((+(((/* implicit */val<int>) (val<unsigned char>)97)))) : (((/* implicit */val<int>) (val<short>)-3714)))))));
        *var_17 = ((/* implicit */val<unsigned int>) var_12);
    }

    *var_18 = ((/* implicit */val<signed char>) ((((/* implicit */val<int>) ((((((/* implicit */val<int>) (val<bool>)1)) + (((/* implicit */val<int>) (val<bool>)1)))) == (((/* implicit */val<int>) var_12))))) == (((/* implicit */val<int>) var_7))));
    *var_19 = ((/* implicit */val<short>) var_2);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6323170264415838846LL;
bool var_7 = (bool)0;
short var_12 = (short)6463;
int zero = 0;
unsigned long long int var_16 = 16040976783809823371ULL;
unsigned int var_17 = 3716232147U;
signed char var_18 = (signed char)-42;
short var_19 = (short)28976;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 0ULL;
    value_mismatch |= var_17 != 6463U;
    value_mismatch |= var_18 != (signed char)1;
    value_mismatch |= var_19 != (short)-23938;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_7, var_12, zero, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
