/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9377
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9377
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
void test(val<long long int> var_1, val<short> var_3, val<unsigned int> var_5, val<signed char> var_7, val<long long int> var_8, val<unsigned char> var_9, val<int> zero, val<bool*> var_12, val<unsigned int*> var_13, val<long long int*> var_14, val<unsigned char*> var_15, val<unsigned int*> var_16) {
    *var_12 += ((/* implicit */val<bool>) max((((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) max((((/* implicit */val<short>) (val<signed char>)-113)), ((val<short>)2079))))))), (((val<unsigned long long int>) var_9))));
    if (((/* implicit */val<bool>) var_3))
    {
        *var_13 = ((/* implicit */val<unsigned int>) var_1);
        *var_14 = ((/* implicit */val<long long int>) var_7);
        *var_15 = ((/* implicit */val<unsigned char>) ((var_5) << (((((/* implicit */val<int>) ((val<unsigned short>) max((var_8), (((/* implicit */val<long long int>) (val<signed char>)115)))))) - (4581)))));
    }

    *var_16 ^= ((/* implicit */val<unsigned int>) (+(var_1)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7845625731304859200LL;
short var_3 = (short)2272;
unsigned int var_5 = 3313226652U;
signed char var_7 = (signed char)-126;
long long int var_8 = 3499224835236565494LL;
unsigned char var_9 = (unsigned char)132;
int zero = 0;
bool var_12 = (bool)1;
unsigned int var_13 = 1896185342U;
long long int var_14 = 8920690326852266841LL;
unsigned char var_15 = (unsigned char)191;
unsigned int var_16 = 1888259904U;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (bool)1;
    value_mismatch |= var_13 != 485022144U;
    value_mismatch |= var_14 != -126LL;
    value_mismatch |= var_15 != (unsigned char)0;
    value_mismatch |= var_16 != 1818515072U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_5, var_7, var_8, var_9, zero, &var_12, &var_13, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
