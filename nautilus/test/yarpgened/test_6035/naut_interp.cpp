/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6035
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6035
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
void test(val<long long int> var_2, val<unsigned long long int> var_3, val<signed char> var_4, val<short> var_5, val<signed char> var_6, val<bool> var_7, val<unsigned char> var_8, val<signed char> var_10, val<int> var_11, val<int> var_12, val<bool> var_13, val<unsigned long long int> var_14, val<unsigned char> var_15, val<int> zero, val<long long int*> var_16, val<bool*> var_17, val<bool*> var_18, val<unsigned int*> var_19, val<unsigned short*> var_20, val<signed char*> var_21, val<signed char*> var_22, val<unsigned char*> var_23, val<unsigned int*> var_24) {
    if (((/* implicit */val<bool>) ((val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) var_8)) & (var_12)))) ? (min((((/* implicit */val<int>) var_4)), (var_12))) : (((((/* implicit */val<bool>) (val<short>)2677)) ? (((/* implicit */val<int>) (val<short>)-2693)) : (((/* implicit */val<int>) (val<short>)-2710))))))))
    {
        *var_16 |= var_2;
        *var_17 = ((/* implicit */val<bool>) max((*var_17), (((/* implicit */val<bool>) var_14))));
        if (((/* implicit */val<bool>) (val<short>)-2657))
        {
            *var_18 |= ((/* implicit */val<bool>) ((val<signed char>) ((((/* implicit */val<int>) var_8)) & (((/* implicit */val<int>) (val<short>)-2663)))));
            *var_19 += ((/* implicit */val<unsigned int>) ((val<signed char>) ((val<unsigned short>) (val<short>)-2709)));
            *var_20 |= ((/* implicit */val<unsigned short>) ((val<long long int>) var_11));
        }

        *var_21 = ((/* implicit */val<signed char>) var_3);
    }

    *var_22 &= ((/* implicit */val<signed char>) (!(((/* implicit */val<bool>) var_6))));
    *var_23 -= var_8;
    *var_24 -= ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_15)) ? (((/* implicit */val<int>) var_5)) : (((/* implicit */val<int>) var_7))))) ? (min(((-(((/* implicit */val<int>) var_10)))), (((/* implicit */val<int>) var_13)))) : (((/* implicit */val<int>) var_7))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6223055927404921768LL;
unsigned long long int var_3 = 7341328303493522216ULL;
signed char var_4 = (signed char)93;
short var_5 = (short)1958;
signed char var_6 = (signed char)65;
bool var_7 = (bool)0;
unsigned char var_8 = (unsigned char)230;
signed char var_10 = (signed char)39;
int var_11 = 1670346419;
int var_12 = 950697201;
bool var_13 = (bool)0;
unsigned long long int var_14 = 12265854557782721842ULL;
unsigned char var_15 = (unsigned char)207;
int zero = 0;
long long int var_16 = 3136326924284638370LL;
bool var_17 = (bool)0;
bool var_18 = (bool)0;
unsigned int var_19 = 3888808799U;
unsigned short var_20 = (unsigned short)5028;
signed char var_21 = (signed char)29;
signed char var_22 = (signed char)-47;
unsigned char var_23 = (unsigned char)42;
unsigned int var_24 = 4183738998U;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != -6077753129057911558LL;
    value_mismatch |= var_17 != (bool)1;
    value_mismatch |= var_18 != (bool)1;
    value_mismatch |= var_19 != 3888808906U;
    value_mismatch |= var_20 != (unsigned short)30647;
    value_mismatch |= var_21 != (signed char)40;
    value_mismatch |= var_22 != (signed char)0;
    value_mismatch |= var_23 != (unsigned char)68;
    value_mismatch |= var_24 != 4183739037U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_10, var_11, var_12, var_13, var_14, var_15, zero, &var_16, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23, &var_24);
  checksum();
  assert(!value_mismatch);
}
