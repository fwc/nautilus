/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8278
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8278
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
void test(val<int> var_1, val<short> var_3, val<short> var_5, val<signed char> var_7, val<unsigned char> var_12, val<short> var_15, val<int> zero, val<signed char*> var_16, val<short*> var_17, val<unsigned long long int*> var_18, val<unsigned long long int*> var_19) {
    *var_16 = ((/* implicit */val<signed char>) var_15);
    *var_17 = ((/* implicit */val<short>) ((((/* implicit */val<int>) var_5)) <= (var_1)));
    if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<signed char>)-22)) ? (((/* implicit */val<int>) var_12)) : ((+(max((1511527510), (1511527510))))))))
    {
        *var_18 &= ((/* implicit */val<unsigned long long int>) var_7);
        *var_19 = ((/* implicit */val<unsigned long long int>) var_3);
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -677811670;
short var_3 = (short)25853;
short var_5 = (short)27866;
signed char var_7 = (signed char)19;
unsigned char var_12 = (unsigned char)19;
short var_15 = (short)-17107;
int zero = 0;
signed char var_16 = (signed char)109;
short var_17 = (short)10002;
unsigned long long int var_18 = 1640894376536501243ULL;
unsigned long long int var_19 = 14956605948228454471ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (signed char)45;
    value_mismatch |= var_17 != (short)0;
    value_mismatch |= var_18 != 19ULL;
    value_mismatch |= var_19 != 25853ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_5, var_7, var_12, var_15, zero, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
