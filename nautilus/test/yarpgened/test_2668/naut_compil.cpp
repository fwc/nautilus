/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2668
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2668
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
void test(val<bool> var_4, val<int> var_6, val<long long int> var_9, val<long long int> var_13, val<long long int> var_15, val<int> zero, val<long long int*> var_16, val<int*> var_17, val<unsigned short*> var_18) {
    if (((/* implicit */val<bool>) min((((val<unsigned long long int>) (val<short>)8399)), (((/* implicit */val<unsigned long long int>) var_15)))))
    {
        *var_16 = ((((/* implicit */val<bool>) 1536906413U)) ? (var_13) : (min((((/* implicit */val<long long int>) (val<short>)8382)), (4611123068473966592LL))));
        *var_17 = ((/* implicit */val<int>) min((*var_17), (((/* implicit */val<int>) var_13))));
    }

    *var_18 ^= ((/* implicit */val<unsigned short>) min((min((((/* implicit */val<long long int>) ((((/* implicit */val<long long int>) var_6)) <= (-289603842369196467LL)))), (((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)0))) : (var_13))))), (((/* implicit */val<long long int>) max((((/* implicit */val<short>) ((((/* implicit */val<bool>) var_15)) && (((/* implicit */val<bool>) (val<short>)-8394))))), (max((((/* implicit */val<short>) var_4)), ((val<short>)32767))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_4 = (bool)1;
int var_6 = 3642245;
long long int var_9 = -4789309720205207784LL;
long long int var_13 = -3942982673597168569LL;
long long int var_15 = 2045421247697628843LL;
int zero = 0;
long long int var_16 = -6775846430995622521LL;
int var_17 = 235741435;
unsigned short var_18 = (unsigned short)8169;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != -3942982673597168569LL;
    value_mismatch |= var_17 != 235741435;
    value_mismatch |= var_18 != (unsigned short)8169;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_6, var_9, var_13, var_15, zero, &var_16, &var_17, &var_18);
  checksum();
}
