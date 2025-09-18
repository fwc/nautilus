/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9407
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9407
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
void test(val<unsigned long long int> var_1, val<long long int> var_4, val<long long int> var_9, val<int> var_11, val<long long int> var_14, val<int> zero, val<short*> var_16, val<unsigned long long int*> var_17, val<long long int*> var_18, val<long long int*> var_19) {
    if (((/* implicit */val<bool>) var_1))
    {
        *var_16 = ((/* implicit */val<short>) var_4);
        *var_17 = ((/* implicit */val<unsigned long long int>) var_14);
        *var_18 = ((/* implicit */val<long long int>) var_1);
    }

    *var_19 = ((/* implicit */val<long long int>) ((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (~(var_14)))) ? (var_9) : (((/* implicit */val<long long int>) var_11))))) < (max((((/* implicit */val<unsigned long long int>) 1913005800109155142LL)), (35465847065542656ULL)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4683364247088493788ULL;
long long int var_4 = 2540302903770813419LL;
long long int var_9 = 3978881465208602747LL;
int var_11 = -1276672312;
long long int var_14 = -447215762339488447LL;
int zero = 0;
short var_16 = (short)-14593;
unsigned long long int var_17 = 4994723228732408012ULL;
long long int var_18 = -4346746180653083757LL;
long long int var_19 = 262222933301255306LL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (short)5099;
    value_mismatch |= var_17 != 17999528311370063169ULL;
    value_mismatch |= var_18 != 4683364247088493788LL;
    value_mismatch |= var_19 != 0LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_9, var_11, var_14, zero, &var_16, &var_17, &var_18, &var_19);
  checksum();
}
