/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1465
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1465
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
void test(val<short> var_3, val<int> var_4, val<long long int> var_6, val<unsigned long long int> var_7, val<unsigned long long int> var_8, val<unsigned short> var_10, val<unsigned short> var_11, val<bool> var_15, val<unsigned int> var_16, val<int> zero, val<short*> var_18, val<bool*> var_19, val<unsigned short*> var_20, val<int*> var_21, val<unsigned char*> var_22, val<unsigned short*> var_23) {
    if (((/* implicit */val<bool>) ((((/* implicit */val<int>) var_10)) & (var_4))))
    {
        *var_18 += ((/* implicit */val<short>) max(((~(var_7))), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) var_11)) ^ (var_4))))));
        *var_19 = var_15;
    }

    *var_20 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) var_16)) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) var_10)) << (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_8)))))))) : ((+(min((((/* implicit */val<unsigned long long int>) var_3)), (7357858238798133028ULL)))))));
    *var_21 = ((/* implicit */val<int>) var_10);
    *var_22 = ((/* implicit */val<unsigned char>) var_6);
    *var_23 *= ((/* implicit */val<unsigned short>) var_6);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-30702;
int var_4 = 435917920;
long long int var_6 = 4856769773852493573LL;
unsigned long long int var_7 = 13975134586581299128ULL;
unsigned long long int var_8 = 9508142649453864877ULL;
unsigned short var_10 = (unsigned short)55537;
unsigned short var_11 = (unsigned short)1856;
bool var_15 = (bool)0;
unsigned int var_16 = 2217420169U;
int zero = 0;
short var_18 = (short)-13245;
bool var_19 = (bool)1;
unsigned short var_20 = (unsigned short)37367;
int var_21 = 280827366;
unsigned char var_22 = (unsigned char)156;
unsigned short var_23 = (unsigned short)29270;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (short)-25462;
    value_mismatch |= var_19 != (bool)0;
    value_mismatch |= var_20 != (unsigned short)55537;
    value_mismatch |= var_21 != 55537;
    value_mismatch |= var_22 != (unsigned char)5;
    value_mismatch |= var_23 != (unsigned short)38318;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_6, var_7, var_8, var_10, var_11, var_15, var_16, zero, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23);
  checksum();
}
