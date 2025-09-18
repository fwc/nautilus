/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5128
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5128
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
void test(val<unsigned char> var_0, val<short> var_1, val<unsigned int> var_2, val<unsigned long long int> var_3, val<unsigned short> var_4, val<signed char> var_6, val<int> var_8, val<unsigned long long int> var_10, val<unsigned long long int> var_14, val<signed char> var_15, val<unsigned int> var_17, val<int> zero, val<unsigned short*> var_19, val<unsigned char*> var_20, val<unsigned short*> var_21, val<int*> var_22, val<short*> var_23) {
    *var_19 |= ((/* implicit */val<unsigned short>) min((max((((/* implicit */val<unsigned long long int>) ((1549848207U) < (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_4)))))), (((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<short>)-17629))) : (var_14))))), (((/* implicit */val<unsigned long long int>) (val<short>)-17637))));
    if (((/* implicit */val<bool>) ((14128490057592854929ULL) << (((((/* implicit */val<int>) (val<short>)1382)) - (1322))))))
    {
        *var_20 = ((/* implicit */val<unsigned char>) max((var_10), (min((((/* implicit */val<unsigned long long int>) ((((((/* implicit */val<int>) (val<short>)-30507)) + (2147483647))) << (((((/* implicit */val<int>) var_1)) - (11783)))))), (min((var_3), (var_10)))))));
        *var_21 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) min((((/* implicit */val<unsigned long long int>) min((((/* implicit */val<int>) var_15)), (-1887069911)))), (((var_3) + (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_6)))))))) ? (((/* implicit */val<int>) (val<signed char>)10)) : (((/* implicit */val<int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)28725))) >= (((var_17) - (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_0))))))))));
    }

    *var_22 = ((/* implicit */val<int>) min((((((/* implicit */val<bool>) var_17)) ? (min((((/* implicit */val<unsigned long long int>) var_8)), (1595228039606845639ULL))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)0))))), (((/* implicit */val<unsigned long long int>) 1339692370))));
    *var_23 = ((/* implicit */val<short>) (val<signed char>)-119);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)190;
short var_1 = (short)11783;
unsigned int var_2 = 237975546U;
unsigned long long int var_3 = 8752917656812695303ULL;
unsigned short var_4 = (unsigned short)10984;
signed char var_6 = (signed char)89;
int var_8 = 37514869;
unsigned long long int var_10 = 17893765129563208757ULL;
unsigned long long int var_14 = 5639557595285728036ULL;
signed char var_15 = (signed char)-113;
unsigned int var_17 = 714390388U;
int zero = 0;
unsigned short var_19 = (unsigned short)32910;
unsigned char var_20 = (unsigned char)93;
unsigned short var_21 = (unsigned short)24893;
int var_22 = 2023760365;
short var_23 = (short)9171;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned short)48031;
    value_mismatch |= var_20 != (unsigned char)53;
    value_mismatch |= var_21 != (unsigned short)10;
    value_mismatch |= var_22 != 37514869;
    value_mismatch |= var_23 != (short)-119;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_6, var_8, var_10, var_14, var_15, var_17, zero, &var_19, &var_20, &var_21, &var_22, &var_23);
  checksum();
}
