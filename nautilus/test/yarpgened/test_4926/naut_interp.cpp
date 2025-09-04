/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4926
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4926
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
void test(val<bool> var_0, val<unsigned long long int> var_1, val<unsigned int> var_2, val<unsigned int> var_3, val<bool> var_4, val<unsigned int> var_5, val<signed char> var_7, val<short> var_8, val<unsigned int> var_9, val<bool> var_10, val<unsigned int> var_11, val<int> zero, val<unsigned short*> var_13, val<long long int*> var_14, val<signed char*> var_15, val<unsigned int*> var_16, val<unsigned long long int*> var_17, val<unsigned short*> var_18, val<signed char*> var_19, val<unsigned char*> var_20, val<bool*> var_21) {
    *var_13 = ((/* implicit */val<unsigned short>) max((*var_13), (((/* implicit */val<unsigned short>) var_1))));
    *var_14 = ((/* implicit */val<long long int>) var_5);
    if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<signed char>)-61)) ? (((val<int>) ((var_3) + (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_0)))))) : (((/* implicit */val<int>) ((val<unsigned short>) ((((/* implicit */val<bool>) var_8)) ? (var_3) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_0))))))))))
    {
        *var_15 = ((/* implicit */val<signed char>) var_0);
        *var_16 = (-((-(var_11))));
        *var_17 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<unsigned long long int>) var_3)) : (var_1)))) ? (((var_10) ? (var_9) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_4))))) : (max((((/* implicit */val<unsigned int>) var_4)), (var_5)))))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_0))) : (max((max((var_11), (var_9))), (((((/* implicit */val<bool>) var_5)) ? (3680291183U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_4)))))))));
        if (((/* implicit */val<bool>) (val<signed char>)-15))
        {
            *var_18 = ((/* implicit */val<unsigned short>) var_5);
            *var_19 = ((/* implicit */val<signed char>) var_4);
        }

        *var_20 = ((/* implicit */val<unsigned char>) var_1);
    }

    *var_21 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<int>) ((max((((/* implicit */val<int>) var_4)), (-2147483626))) >= (((/* implicit */val<int>) max((((/* implicit */val<unsigned short>) var_4)), ((val<unsigned short>)65535))))))) : (((/* implicit */val<int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 614676107U)) ? (var_1) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_7)))))) || (((/* implicit */val<bool>) var_7)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
unsigned long long int var_1 = 17239391893474200195ULL;
unsigned int var_2 = 237522324U;
unsigned int var_3 = 4073168613U;
bool var_4 = (bool)0;
unsigned int var_5 = 1498415392U;
signed char var_7 = (signed char)-119;
short var_8 = (short)-25454;
unsigned int var_9 = 1070052156U;
bool var_10 = (bool)1;
unsigned int var_11 = 3042609548U;
int zero = 0;
unsigned short var_13 = (unsigned short)54381;
long long int var_14 = 5839578000408146911LL;
signed char var_15 = (signed char)-86;
unsigned int var_16 = 3261949949U;
unsigned long long int var_17 = 525143333276739789ULL;
unsigned short var_18 = (unsigned short)16713;
signed char var_19 = (signed char)-121;
unsigned char var_20 = (unsigned char)151;
bool var_21 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned short)54381;
    value_mismatch |= var_14 != 1498415392LL;
    value_mismatch |= var_15 != (signed char)0;
    value_mismatch |= var_16 != 3042609548U;
    value_mismatch |= var_17 != 0ULL;
    value_mismatch |= var_18 != (unsigned short)288;
    value_mismatch |= var_19 != (signed char)0;
    value_mismatch |= var_20 != (unsigned char)131;
    value_mismatch |= var_21 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_7, var_8, var_9, var_10, var_11, zero, &var_13, &var_14, &var_15, &var_16, &var_17, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
