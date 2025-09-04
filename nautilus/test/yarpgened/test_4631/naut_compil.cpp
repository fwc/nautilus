/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4631
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4631
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
void test(val<unsigned char> var_0, val<long long int> var_1, val<unsigned short> var_2, val<unsigned short> var_5, val<unsigned long long int> var_7, val<unsigned char> var_8, val<long long int> var_9, val<long long int> var_10, val<bool> var_11, val<int> zero, val<unsigned char*> var_12, val<unsigned short*> var_13, val<short*> var_14, val<long long int*> var_15) {
    if (((/* implicit */val<bool>) max(((+(((((/* implicit */val<bool>) var_9)) ? (var_7) : (((/* implicit */val<unsigned long long int>) var_9)))))), (((((/* implicit */val<bool>) ((var_9) | (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_2)))))) ? (((var_7) | (var_7))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) min((var_5), (((/* implicit */val<unsigned short>) var_11)))))))))))
    {
        *var_12 &= ((/* implicit */val<unsigned char>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((min((var_10), (((/* implicit */val<long long int>) var_11)))) >= (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_8))))))) * ((~(((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<unsigned long long int>) var_10)) : (var_7)))))));
        *var_13 = ((/* implicit */val<unsigned short>) ((((((((/* implicit */val<bool>) 17197070967442522557ULL)) || (((/* implicit */val<bool>) (val<signed char>)54)))) ? (((/* implicit */val<int>) var_2)) : ((~(((/* implicit */val<int>) var_11)))))) / (((/* implicit */val<int>) var_0))));
        *var_14 = ((/* implicit */val<short>) (+(((/* implicit */val<int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) -2506539695488593828LL)) ? (var_1) : (var_10)))) || (((/* implicit */val<bool>) var_0)))))));
    }

    *var_15 = ((val<long long int>) var_11);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)13;
long long int var_1 = -5128368515824575317LL;
unsigned short var_2 = (unsigned short)16312;
unsigned short var_5 = (unsigned short)25481;
unsigned long long int var_7 = 11375904536086909518ULL;
unsigned char var_8 = (unsigned char)78;
long long int var_9 = -92177023620802163LL;
long long int var_10 = -7864183756187500388LL;
bool var_11 = (bool)0;
int zero = 0;
unsigned char var_12 = (unsigned char)128;
unsigned short var_13 = (unsigned short)51067;
short var_14 = (short)-9390;
long long int var_15 = 6042891975771099684LL;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned char)0;
    value_mismatch |= var_13 != (unsigned short)1254;
    value_mismatch |= var_14 != (short)1;
    value_mismatch |= var_15 != 0LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_5, var_7, var_8, var_9, var_10, var_11, zero, &var_12, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
