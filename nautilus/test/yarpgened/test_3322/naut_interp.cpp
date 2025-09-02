/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3322
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3322
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
void test(val<unsigned int> var_0, val<long long int> var_1, val<short> var_2, val<long long int> var_4, val<bool> var_6, val<unsigned int> var_8, val<int> zero, val<unsigned int*> var_10, val<bool*> var_11, val<short*> var_12, val<unsigned int*> var_13, val<unsigned long long int*> var_14, val<unsigned long long int*> var_15) {
    *var_10 ^= ((/* implicit */val<unsigned int>) (-(((/* implicit */val<int>) (!((!(var_6))))))));
    *var_11 = ((/* implicit */val<bool>) min((((/* implicit */val<long long int>) var_8)), (var_1)));
    if (((/* implicit */val<bool>) (-((-(((/* implicit */val<int>) var_2)))))))
    {
        *var_12 = ((/* implicit */val<short>) (!(((/* implicit */val<bool>) var_0))));
        *var_13 = ((/* implicit */val<unsigned int>) 1773639427606388307ULL);
        *var_14 = ((/* implicit */val<unsigned long long int>) var_4);
    }

    *var_15 = ((/* implicit */val<unsigned long long int>) -1526781320);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3308962793U;
long long int var_1 = 7304915452094862058LL;
short var_2 = (short)-10966;
long long int var_4 = -159777163090008181LL;
bool var_6 = (bool)0;
unsigned int var_8 = 3916231283U;
int zero = 0;
unsigned int var_10 = 1335817989U;
bool var_11 = (bool)0;
short var_12 = (short)17520;
unsigned int var_13 = 1704228829U;
unsigned long long int var_14 = 16802336587710219824ULL;
unsigned long long int var_15 = 11174277884006955217ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 1335817989U;
    value_mismatch |= var_11 != (bool)1;
    value_mismatch |= var_12 != (short)0;
    value_mismatch |= var_13 != 2317033043U;
    value_mismatch |= var_14 != 18286966910619543435ULL;
    value_mismatch |= var_15 != 18446744072182770296ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_6, var_8, zero, &var_10, &var_11, &var_12, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
