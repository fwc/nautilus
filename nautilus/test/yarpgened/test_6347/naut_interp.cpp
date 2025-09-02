/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6347
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6347
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
void test(val<int> var_2, val<signed char> var_3, val<unsigned char> var_4, val<bool> var_5, val<unsigned char> var_6, val<int> var_7, val<bool> var_9, val<int> var_14, val<int> zero, val<unsigned long long int*> var_16, val<int*> var_17, val<long long int*> var_18, val<bool*> var_19, val<int*> var_20) {
    *var_16 -= ((/* implicit */val<unsigned long long int>) 1084094457);
    *var_17 = ((((/* implicit */val<bool>) var_7)) ? (((((((/* implicit */val<int>) var_4)) + ((-2147483647 - 1)))) - (var_2))) : (((2147483647) ^ ((~(2147483647))))));
    *var_18 = ((/* implicit */val<long long int>) (val<bool>)1);
    if (((/* implicit */val<bool>) var_14))
    {
        *var_19 |= ((/* implicit */val<bool>) (~(((((/* implicit */val<int>) var_3)) | ((~(((/* implicit */val<int>) var_4))))))));
        *var_20 = ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((var_9) ? (1025389557) : (((/* implicit */val<int>) (val<bool>)1))))) ? (((var_5) ? (((/* implicit */val<int>) var_3)) : (((/* implicit */val<int>) var_6)))) : (max((var_2), (1263216430)))))) ? ((((+(2147483647))) * (((/* implicit */val<int>) var_5)))) : (((/* implicit */val<int>) (val<bool>)1)));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -5970090;
signed char var_3 = (signed char)122;
unsigned char var_4 = (unsigned char)114;
bool var_5 = (bool)0;
unsigned char var_6 = (unsigned char)178;
int var_7 = 636151611;
bool var_9 = (bool)1;
int var_14 = 1854854904;
int zero = 0;
unsigned long long int var_16 = 2063206717416996331ULL;
int var_17 = 464523905;
long long int var_18 = 9149052375455801547LL;
bool var_19 = (bool)0;
int var_20 = -1073382621;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 2063206716332901874ULL;
    value_mismatch |= var_17 != -2141513444;
    value_mismatch |= var_18 != 1LL;
    value_mismatch |= var_19 != (bool)0;
    value_mismatch |= var_20 != 0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_4, var_5, var_6, var_7, var_9, var_14, zero, &var_16, &var_17, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
