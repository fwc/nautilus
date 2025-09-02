/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6700
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6700
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
void test(val<long long int> var_2, val<unsigned char> var_5, val<signed char> var_6, val<int> var_8, val<int> zero, val<bool*> var_11, val<unsigned char*> var_12, val<int*> var_13, val<signed char*> var_14, val<bool*> var_15, val<int*> var_16) {
    *var_11 ^= ((/* implicit */val<bool>) (val<unsigned char>)136);
    *var_12 = ((/* implicit */val<unsigned char>) ((2617658960417409526LL) / (((/* implicit */val<long long int>) 679710225))));
    *var_13 = ((/* implicit */val<int>) 4771729503652342696ULL);
    if (((/* implicit */val<bool>) (+(var_2))))
    {
        *var_14 = ((/* implicit */val<signed char>) ((((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_6)) ? (((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<int>) var_5)) : (var_8))) : (((((/* implicit */val<int>) (val<unsigned char>)107)) << (((679710201) - (679710201)))))))) >= (((((/* implicit */val<long long int>) ((val<int>) 4294967294U))) | (var_2)))));
        *var_15 *= ((/* implicit */val<bool>) (val<unsigned char>)24);
    }

    *var_16 = ((/* implicit */val<int>) max((*var_16), (var_8)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 9079324833972491790LL;
unsigned char var_5 = (unsigned char)152;
signed char var_6 = (signed char)87;
int var_8 = 689840313;
int zero = 0;
bool var_11 = (bool)0;
unsigned char var_12 = (unsigned char)25;
int var_13 = -564405538;
signed char var_14 = (signed char)-102;
bool var_15 = (bool)1;
int var_16 = -1033525120;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (bool)1;
    value_mismatch |= var_12 != (unsigned char)10;
    value_mismatch |= var_13 != -1384977496;
    value_mismatch |= var_14 != (signed char)1;
    value_mismatch |= var_15 != (bool)1;
    value_mismatch |= var_16 != 689840313;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_6, var_8, zero, &var_11, &var_12, &var_13, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
