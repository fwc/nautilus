/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7104
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7104
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
void test(val<short> var_1, val<unsigned short> var_2, val<long long int> var_4, val<short> var_5, val<short> var_7, val<bool> var_10, val<int> zero, val<int*> var_11, val<unsigned int*> var_12, val<unsigned int*> var_13, val<unsigned long long int*> var_14, val<unsigned char*> var_15, val<signed char*> var_16, val<signed char*> var_17) {
    if (((/* implicit */val<bool>) var_1))
    {
        *var_11 |= ((/* implicit */val<int>) var_2);
        if (((/* implicit */val<bool>) var_7))
        {
            *var_12 = ((/* implicit */val<unsigned int>) (!(((/* implicit */val<bool>) ((val<long long int>) (val<short>)24678)))));
            *var_13 = ((/* implicit */val<unsigned int>) max((*var_13), (((/* implicit */val<unsigned int>) var_10))));
            *var_14 = ((/* implicit */val<unsigned long long int>) (val<signed char>)-70);
        }

        *var_15 = ((/* implicit */val<unsigned char>) ((var_4) == (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_5)))));
        *var_16 = ((/* implicit */val<signed char>) ((val<bool>) ((val<int>) ((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<int>) var_2)) : (((/* implicit */val<int>) var_5))))));
    }

    *var_17 ^= ((/* implicit */val<signed char>) var_5);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)5133;
unsigned short var_2 = (unsigned short)53799;
long long int var_4 = 5351661696499622952LL;
short var_5 = (short)-1961;
short var_7 = (short)-28103;
bool var_10 = (bool)1;
int zero = 0;
int var_11 = 1064710823;
unsigned int var_12 = 2747182673U;
unsigned int var_13 = 3416989678U;
unsigned long long int var_14 = 14405107076832323128ULL;
unsigned char var_15 = (unsigned char)65;
signed char var_16 = (signed char)124;
signed char var_17 = (signed char)17;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 1064759975;
    value_mismatch |= var_12 != 0U;
    value_mismatch |= var_13 != 3416989678U;
    value_mismatch |= var_14 != 18446744073709551546ULL;
    value_mismatch |= var_15 != (unsigned char)0;
    value_mismatch |= var_16 != (signed char)1;
    value_mismatch |= var_17 != (signed char)70;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_4, var_5, var_7, var_10, zero, &var_11, &var_12, &var_13, &var_14, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
