/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8287
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8287
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
void test(val<signed char> var_0, val<unsigned char> var_1, val<int> var_2, val<unsigned char> var_3, val<bool> var_4, val<long long int> var_5, val<long long int> var_6, val<unsigned char> var_7, val<unsigned short> var_8, val<unsigned short> var_9, val<int> zero, val<unsigned char*> var_10, val<long long int*> var_11, val<signed char*> var_12, val<unsigned char*> var_13, val<signed char*> var_14) {
    if (((/* implicit */val<bool>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)74))) & (((((/* implicit */val<bool>) ((val<long long int>) var_4))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_7))) : (16833132693572879311ULL))))))
    {
        if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) max((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) 2565032321464817221ULL)) ? (2146435072LL) : (-6016154246867305603LL)))), (18446744073709551615ULL)))) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) min((((/* implicit */val<unsigned short>) var_1)), (var_9)))) ? (((/* implicit */val<long long int>) (+(((/* implicit */val<int>) var_9))))) : (((((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<signed char>)-11))) - (-1LL)))))) : ((-(12871923476702268230ULL))))))
        {
            *var_10 ^= ((/* implicit */val<unsigned char>) max((((/* implicit */val<int>) ((((/* implicit */val<bool>) 5574820597007283385ULL)) || (((/* implicit */val<bool>) 8ULL))))), (((((/* implicit */val<bool>) 6016154246867305585LL)) ? (((/* implicit */val<int>) var_0)) : (((/* implicit */val<int>) var_4))))));
            *var_11 -= ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<int>) var_8)) : (((/* implicit */val<int>) (val<unsigned char>)55))));
            *var_12 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) max((var_5), (((/* implicit */val<long long int>) (val<unsigned short>)30947))))) ? (((/* implicit */val<int>) var_7)) : (((((/* implicit */val<bool>) ((9717676877243918885ULL) / (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_8)))))) ? (((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<int>) (val<signed char>)14)) : (((/* implicit */val<int>) var_0)))) : (((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<int>) var_3)) : (var_2)))))));
        }

        *var_13 = ((/* implicit */val<unsigned char>) -7277934937106725425LL);
    }

    *var_14 &= ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) var_1)) ? (((((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<signed char>)-10))) ^ (var_5))) : (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<int>) var_0)) : (((/* implicit */val<int>) max(((val<unsigned short>)5974), (((/* implicit */val<unsigned short>) (val<signed char>)4))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-62;
unsigned char var_1 = (unsigned char)99;
int var_2 = 961635129;
unsigned char var_3 = (unsigned char)108;
bool var_4 = (bool)0;
long long int var_5 = 2923148696659419307LL;
long long int var_6 = 2208068993863346292LL;
unsigned char var_7 = (unsigned char)158;
unsigned short var_8 = (unsigned short)53562;
unsigned short var_9 = (unsigned short)20237;
int zero = 0;
unsigned char var_10 = (unsigned char)161;
long long int var_11 = 1953290463110647129LL;
signed char var_12 = (signed char)35;
unsigned char var_13 = (unsigned char)180;
signed char var_14 = (signed char)-31;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned char)160;
    value_mismatch |= var_11 != 1953290463110593567LL;
    value_mismatch |= var_12 != (signed char)-98;
    value_mismatch |= var_13 != (unsigned char)207;
    value_mismatch |= var_14 != (signed char)65;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, zero, &var_10, &var_11, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
