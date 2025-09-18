/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7094
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7094
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
void test(val<short> var_0, val<signed char> var_1, val<short> var_2, val<unsigned short> var_4, val<signed char> var_12, val<unsigned char> var_13, val<int> zero, val<short*> var_14, val<signed char*> var_15, val<int*> var_16, val<unsigned long long int*> var_17) {
    if (((((/* implicit */val<int>) ((((((/* implicit */val<bool>) 1109477200U)) ? (((/* implicit */val<int>) var_2)) : (0))) > (((/* implicit */val<int>) max((var_4), (((/* implicit */val<unsigned short>) var_0)))))))) > (min((((((/* implicit */val<int>) (val<signed char>)101)) - (((/* implicit */val<int>) (val<bool>)0)))), (((/* implicit */val<int>) max((var_1), (var_12))))))))
    {
        *var_14 = ((/* implicit */val<short>) min((*var_14), (((/* implicit */val<short>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned short>)30362))) ^ (((0ULL) >> (((((/* implicit */val<int>) ((val<signed char>) (val<unsigned short>)35185))) - (113))))))))));
        *var_15 = ((/* implicit */val<signed char>) max((*var_15), (((/* implicit */val<signed char>) 1724285547U))));
        *var_16 = ((/* implicit */val<int>) var_13);
    }

    *var_17 = ((/* implicit */val<unsigned long long int>) (val<signed char>)-101);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20254;
signed char var_1 = (signed char)2;
short var_2 = (short)-30738;
unsigned short var_4 = (unsigned short)8800;
signed char var_12 = (signed char)-111;
unsigned char var_13 = (unsigned char)36;
int zero = 0;
short var_14 = (short)13560;
signed char var_15 = (signed char)-16;
int var_16 = -1806752433;
unsigned long long int var_17 = 7781704685855461118ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (short)13560;
    value_mismatch |= var_15 != (signed char)-16;
    value_mismatch |= var_16 != -1806752433;
    value_mismatch |= var_17 != 18446744073709551515ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_12, var_13, zero, &var_14, &var_15, &var_16, &var_17);
  checksum();
}
