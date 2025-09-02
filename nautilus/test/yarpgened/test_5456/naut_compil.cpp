/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5456
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5456
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
void test(val<unsigned long long int> var_0, val<int> var_1, val<bool> var_2, val<unsigned char> var_3, val<bool> var_4, val<signed char> var_5, val<int> var_6, val<unsigned short> var_7, val<long long int> var_9, val<int> zero, val<bool*> var_10, val<long long int*> var_11, val<unsigned char*> var_12) {
    if (((/* implicit */val<bool>) (-(((/* implicit */val<int>) (val<signed char>)0)))))
    {
        *var_10 ^= ((/* implicit */val<bool>) ((((((var_9) - (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_7))))) >= (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_3))))) ? (((((/* implicit */val<bool>) (((val<bool>)1) ? (((/* implicit */val<int>) (val<signed char>)12)) : (((/* implicit */val<int>) (val<bool>)1))))) ? (max((var_1), (((/* implicit */val<int>) var_2)))) : (((((/* implicit */val<int>) var_2)) >> (((/* implicit */val<int>) var_3)))))) : (var_1)));
        *var_11 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_0)) ? (((var_4) ? (((/* implicit */val<unsigned long long int>) var_6)) : (((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_2))) : (var_0))))) : (((/* implicit */val<unsigned long long int>) (+(((var_2) ? (var_1) : (((/* implicit */val<int>) var_5)))))))));
    }

    *var_12 = ((/* implicit */val<unsigned char>) var_9);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8749914408161440539ULL;
int var_1 = -824123355;
bool var_2 = (bool)1;
unsigned char var_3 = (unsigned char)21;
bool var_4 = (bool)1;
signed char var_5 = (signed char)-30;
int var_6 = -1416061416;
unsigned short var_7 = (unsigned short)30313;
long long int var_9 = 100111758161632011LL;
int zero = 0;
bool var_10 = (bool)0;
long long int var_11 = -6140321217363142276LL;
unsigned char var_12 = (unsigned char)211;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (bool)0;
    value_mismatch |= var_11 != -6140321217363142276LL;
    value_mismatch |= var_12 != (unsigned char)11;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_9, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
