/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9524
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9524
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
void test(val<short> var_2, val<unsigned char> var_4, val<int> var_7, val<unsigned int> var_8, val<unsigned char> var_9, val<unsigned char> var_14, val<int> zero, val<short*> var_16, val<int*> var_17, val<unsigned short*> var_18) {
    if (((/* implicit */val<bool>) var_2))
    {
        *var_16 = ((/* implicit */val<short>) min((*var_16), (((/* implicit */val<short>) min((((9223372036854775803LL) + (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)1))))), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<unsigned int>) var_7)) : (min((var_8), (((/* implicit */val<unsigned int>) var_4))))))))))));
        *var_17 = ((/* implicit */val<int>) min((*var_17), (((/* implicit */val<int>) ((val<unsigned char>) var_14)))));
    }

    *var_18 ^= ((/* implicit */val<unsigned short>) ((-527191185) / (((/* implicit */val<int>) var_9))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)3689;
unsigned char var_4 = (unsigned char)111;
int var_7 = -1664392839;
unsigned int var_8 = 3525656952U;
unsigned char var_9 = (unsigned char)151;
unsigned char var_14 = (unsigned char)56;
int zero = 0;
short var_16 = (short)-23471;
int var_17 = 2031011522;
unsigned short var_18 = (unsigned short)57862;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (short)-23471;
    value_mismatch |= var_17 != 56;
    value_mismatch |= var_18 != (unsigned short)23546;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_7, var_8, var_9, var_14, zero, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
