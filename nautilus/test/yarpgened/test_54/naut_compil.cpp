/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 54
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=54
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
void test(val<unsigned char> var_0, val<unsigned short> var_1, val<signed char> var_2, val<unsigned char> var_4, val<unsigned long long int> var_6, val<signed char> var_7, val<long long int> var_9, val<int> zero, val<bool*> var_11, val<unsigned char*> var_12, val<bool*> var_13, val<bool*> var_14, val<short*> var_15, val<unsigned int*> var_16, val<int*> var_17) {
    *var_11 ^= ((/* implicit */val<bool>) var_2);
    if (((/* implicit */val<bool>) ((val<long long int>) (-(((/* implicit */val<int>) ((((/* implicit */val<bool>) var_7)) || (((/* implicit */val<bool>) var_0)))))))))
    {
        *var_12 = var_4;
        *var_13 = ((/* implicit */val<bool>) var_7);
        *var_14 = ((/* implicit */val<bool>) var_4);
        *var_15 = ((/* implicit */val<short>) var_0);
    }

    *var_16 = ((/* implicit */val<unsigned int>) var_6);
    *var_17 = ((/* implicit */val<int>) ((((((/* implicit */val<long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_1)))))) - (var_9))) ^ (var_9)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)5;
unsigned short var_1 = (unsigned short)1881;
signed char var_2 = (signed char)36;
unsigned char var_4 = (unsigned char)17;
unsigned long long int var_6 = 6611646278447168476ULL;
signed char var_7 = (signed char)-27;
long long int var_9 = 7093108131488916352LL;
int zero = 0;
bool var_11 = (bool)1;
unsigned char var_12 = (unsigned char)182;
bool var_13 = (bool)1;
bool var_14 = (bool)1;
short var_15 = (short)12334;
unsigned int var_16 = 1328328893U;
int var_17 = 1105706860;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (bool)0;
    value_mismatch |= var_12 != (unsigned char)17;
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != (bool)1;
    value_mismatch |= var_15 != (short)5;
    value_mismatch |= var_16 != 2673900508U;
    value_mismatch |= var_17 != -256;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_6, var_7, var_9, zero, &var_11, &var_12, &var_13, &var_14, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
