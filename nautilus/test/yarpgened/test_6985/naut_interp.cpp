/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6985
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6985
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
void test(val<unsigned short> var_0, val<bool> var_1, val<short> var_2, val<unsigned short> var_3, val<unsigned long long int> var_5, val<signed char> var_6, val<int> var_7, val<unsigned int> var_9, val<signed char> var_11, val<int> zero, val<unsigned short*> var_12, val<short*> var_13, val<unsigned long long int*> var_14, val<short*> var_15, val<signed char*> var_16, val<short*> var_17) {
    *var_12 += ((/* implicit */val<unsigned short>) (~(max(((-(var_9))), (((/* implicit */val<unsigned int>) var_11))))));
    *var_13 ^= ((/* implicit */val<short>) max((((/* implicit */val<unsigned long long int>) (~((~(((/* implicit */val<int>) var_6))))))), (((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) var_1))))) : (var_5)))));
    *var_14 = ((/* implicit */val<unsigned long long int>) min((((/* implicit */val<int>) var_3)), (((((/* implicit */val<bool>) min((var_5), (((/* implicit */val<unsigned long long int>) (val<unsigned short>)0))))) ? (((/* implicit */val<int>) var_0)) : (((/* implicit */val<int>) var_2))))));
    *var_15 = ((/* implicit */val<short>) var_1);
    if (((/* implicit */val<bool>) (~(((/* implicit */val<int>) ((var_1) && (((/* implicit */val<bool>) var_5))))))))
    {
        *var_16 = ((/* implicit */val<signed char>) (!(((/* implicit */val<bool>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned short>)1022))) / ((-(7244252089084735811ULL))))))));
        *var_17 = ((/* implicit */val<short>) var_1);
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9992;
bool var_1 = (bool)1;
short var_2 = (short)22426;
unsigned short var_3 = (unsigned short)61930;
unsigned long long int var_5 = 11012543669586247345ULL;
signed char var_6 = (signed char)121;
int var_7 = -539012332;
unsigned int var_9 = 2973488669U;
signed char var_11 = (signed char)-28;
int zero = 0;
unsigned short var_12 = (unsigned short)36247;
short var_13 = (short)-3666;
unsigned long long int var_14 = 4191677419546561123ULL;
short var_15 = (short)27201;
signed char var_16 = (signed char)99;
short var_17 = (short)24235;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned short)36274;
    value_mismatch |= var_13 != (short)-3625;
    value_mismatch |= var_14 != 22426ULL;
    value_mismatch |= var_15 != (short)1;
    value_mismatch |= var_16 != (signed char)1;
    value_mismatch |= var_17 != (short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_5, var_6, var_7, var_9, var_11, zero, &var_12, &var_13, &var_14, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
