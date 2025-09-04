/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6158
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6158
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
void test(val<short> var_1, val<unsigned short> var_4, val<unsigned short> var_6, val<unsigned int> var_10, val<short> var_11, val<int> var_13, val<unsigned long long int> var_16, val<int> zero, val<int*> var_19, val<long long int*> var_20, val<unsigned short*> var_21, val<unsigned long long int*> var_22) {
    if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) (-((-(((/* implicit */val<int>) var_6))))))) ? (var_13) : (((/* implicit */val<int>) (!((val<bool>)1)))))))
    {
        *var_19 = (~(((/* implicit */val<int>) var_11)));
        *var_20 = ((/* implicit */val<long long int>) var_4);
    }

    *var_21 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((((/* implicit */val<int>) var_1)) >= (((((/* implicit */val<int>) var_1)) & (((/* implicit */val<int>) (val<bool>)0)))))))) : (((val<unsigned int>) ((((/* implicit */val<bool>) var_16)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)0))) : (13287643791976422686ULL))))));
    *var_22 = ((/* implicit */val<unsigned long long int>) var_10);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)17150;
unsigned short var_4 = (unsigned short)45339;
unsigned short var_6 = (unsigned short)9116;
unsigned int var_10 = 3048614816U;
short var_11 = (short)-23931;
int var_13 = -1741536146;
unsigned long long int var_16 = 12872881018902140854ULL;
int zero = 0;
int var_19 = 789697829;
long long int var_20 = -1262545618760330252LL;
unsigned short var_21 = (unsigned short)5206;
unsigned long long int var_22 = 465524714231311676ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 23930;
    value_mismatch |= var_20 != 45339LL;
    value_mismatch |= var_21 != (unsigned short)1;
    value_mismatch |= var_22 != 3048614816ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_6, var_10, var_11, var_13, var_16, zero, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
