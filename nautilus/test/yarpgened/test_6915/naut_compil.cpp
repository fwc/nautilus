/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6915
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6915
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
void test(val<unsigned long long int> var_2, val<bool> var_3, val<int> var_4, val<int> var_5, val<unsigned long long int> var_6, val<long long int> var_9, val<unsigned int> var_11, val<int> var_16, val<int> zero, val<int*> var_17, val<unsigned short*> var_18, val<unsigned short*> var_19, val<int*> var_20, val<bool*> var_21) {
    *var_17 = (+(((/* implicit */val<int>) ((val<signed char>) var_2))));
    *var_18 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<unsigned long long int>) var_5)) : (((((((/* implicit */val<bool>) (val<unsigned short>)11382)) ? (var_2) : (((/* implicit */val<unsigned long long int>) var_16)))) * (((/* implicit */val<unsigned long long int>) var_9))))));
    if (((/* implicit */val<bool>) ((val<unsigned short>) ((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<long long int>) (+(((/* implicit */val<int>) (val<signed char>)-21))))) : (var_9)))))
    {
        *var_19 = ((/* implicit */val<unsigned short>) ((var_6) == (((/* implicit */val<unsigned long long int>) var_4))));
        *var_20 = ((/* implicit */val<int>) ((var_3) ? (((/* implicit */val<unsigned long long int>) ((val<int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)21))) % (753987563U))))) : (8531109629697399172ULL)));
        *var_21 = ((/* implicit */val<bool>) var_11);
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1776998657670917318ULL;
bool var_3 = (bool)1;
int var_4 = 1283597075;
int var_5 = -1662112888;
unsigned long long int var_6 = 14917175754205902063ULL;
long long int var_9 = -6566395108874018574LL;
unsigned int var_11 = 228264856U;
int var_16 = -446342855;
int zero = 0;
int var_17 = 1019387044;
unsigned short var_18 = (unsigned short)51982;
unsigned short var_19 = (unsigned short)52865;
int var_20 = -1468106416;
bool var_21 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != -58;
    value_mismatch |= var_18 != (unsigned short)11144;
    value_mismatch |= var_19 != (unsigned short)0;
    value_mismatch |= var_20 != 21;
    value_mismatch |= var_21 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_4, var_5, var_6, var_9, var_11, var_16, zero, &var_17, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
