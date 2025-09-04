/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8812
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8812
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
void test(val<unsigned short> var_1, val<unsigned char> var_4, val<unsigned int> var_5, val<long long int> var_6, val<unsigned int> var_7, val<unsigned short> var_8, val<unsigned short> var_9, val<unsigned int> var_10, val<int> zero, val<signed char*> var_12, val<unsigned long long int*> var_13, val<long long int*> var_14, val<unsigned char*> var_15) {
    *var_12 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) var_4)) ? (((var_6) * (((/* implicit */val<long long int>) ((var_7) ^ (var_7)))))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) min((var_5), (((/* implicit */val<unsigned int>) var_8)))))))))));
    if (((/* implicit */val<bool>) min((((((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_9))) : (18446744073709551615ULL))) >> ((((val<bool>)1) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)0))) : (var_6))))), (((/* implicit */val<unsigned long long int>) min((((/* implicit */val<unsigned short>) ((val<bool>) (val<signed char>)-80))), ((val<unsigned short>)48420)))))))
    {
        *var_13 = ((/* implicit */val<unsigned long long int>) min((var_5), (var_10)));
        *var_14 |= ((/* implicit */val<long long int>) var_1);
        *var_15 = ((/* implicit */val<unsigned char>) var_6);
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)40828;
unsigned char var_4 = (unsigned char)232;
unsigned int var_5 = 706120852U;
long long int var_6 = 475973432061966193LL;
unsigned int var_7 = 714286684U;
unsigned short var_8 = (unsigned short)58978;
unsigned short var_9 = (unsigned short)4340;
unsigned int var_10 = 1673902777U;
int zero = 0;
signed char var_12 = (signed char)21;
unsigned long long int var_13 = 2134684915155851752ULL;
long long int var_14 = -2458353806555602724LL;
unsigned char var_15 = (unsigned char)35;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (signed char)0;
    value_mismatch |= var_13 != 706120852ULL;
    value_mismatch |= var_14 != -2458353806555561988LL;
    value_mismatch |= var_15 != (unsigned char)113;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_5, var_6, var_7, var_8, var_9, var_10, zero, &var_12, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
