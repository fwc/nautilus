/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9659
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9659
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
void test(val<unsigned long long int> var_0, val<bool> var_2, val<int> var_3, val<bool> var_5, val<unsigned short> var_6, val<short> var_8, val<unsigned short> var_9, val<int> zero, val<short*> var_10, val<signed char*> var_11, val<bool*> var_12, val<unsigned int*> var_13, val<signed char*> var_14) {
    *var_10 = ((/* implicit */val<short>) ((((/* implicit */val<int>) ((val<unsigned char>) min((((/* implicit */val<unsigned int>) var_8)), (895186891U))))) + (((/* implicit */val<int>) var_2))));
    *var_11 = ((/* implicit */val<signed char>) var_0);
    if (var_5)
    {
        *var_12 = ((/* implicit */val<bool>) (((val<bool>)1) ? ((+(var_3))) : (((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<int>) (val<bool>)1)) & (((/* implicit */val<int>) (val<bool>)1))))))))));
        *var_13 = ((/* implicit */val<unsigned int>) ((max((max((var_3), (((/* implicit */val<int>) var_5)))), (((/* implicit */val<int>) min((var_5), ((val<bool>)1)))))) & (((/* implicit */val<int>) ((val<bool>) max((((/* implicit */val<unsigned char>) (val<bool>)1)), ((val<unsigned char>)13)))))));
        *var_14 = ((/* implicit */val<signed char>) max((((((/* implicit */val<int>) var_6)) << (((((/* implicit */val<int>) var_9)) - (16242))))), (((/* implicit */val<int>) var_9))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11871118810388227960ULL;
bool var_2 = (bool)1;
int var_3 = 1897375795;
bool var_5 = (bool)1;
unsigned short var_6 = (unsigned short)63431;
short var_8 = (short)5483;
unsigned short var_9 = (unsigned short)16243;
int zero = 0;
short var_10 = (short)-28584;
signed char var_11 = (signed char)109;
bool var_12 = (bool)0;
unsigned int var_13 = 69015926U;
signed char var_14 = (signed char)-2;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (short)108;
    value_mismatch |= var_11 != (signed char)120;
    value_mismatch |= var_12 != (bool)1;
    value_mismatch |= var_13 != 1U;
    value_mismatch |= var_14 != (signed char)-114;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_5, var_6, var_8, var_9, zero, &var_10, &var_11, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
