/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2020
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2020
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
void test(val<unsigned int> var_0, val<unsigned long long int> var_2, val<signed char> var_3, val<unsigned int> var_4, val<signed char> var_7, val<unsigned long long int> var_8, val<int> var_9, val<short> var_12, val<int> zero, val<unsigned char*> var_16, val<unsigned long long int*> var_17, val<bool*> var_18, val<bool*> var_19) {
    *var_16 -= ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) max((((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) var_3)) - (((/* implicit */val<int>) var_3))))), ((-(var_4)))))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_9))))) > (((/* implicit */val<int>) (val<short>)-1)))))) : (max((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_8)) ? (var_0) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_7)))))), (((val<unsigned long long int>) 5022835668141957422ULL))))));
    *var_17 |= ((/* implicit */val<unsigned long long int>) var_12);
    if (((/* implicit */val<bool>) var_3))
    {
        *var_18 = ((((/* implicit */val<int>) (val<unsigned char>)102)) < (((/* implicit */val<int>) (val<short>)7)));
        *var_19 = ((/* implicit */val<bool>) var_2);
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2845628855U;
unsigned long long int var_2 = 17037096506332525931ULL;
signed char var_3 = (signed char)63;
unsigned int var_4 = 258999247U;
signed char var_7 = (signed char)63;
unsigned long long int var_8 = 9497234737353111833ULL;
int var_9 = 889852086;
short var_12 = (short)759;
int zero = 0;
unsigned char var_16 = (unsigned char)208;
unsigned long long int var_17 = 15611147924977128005ULL;
bool var_18 = (bool)1;
bool var_19 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned char)207;
    value_mismatch |= var_17 != 15611147924977128183ULL;
    value_mismatch |= var_18 != (bool)0;
    value_mismatch |= var_19 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_7, var_8, var_9, var_12, zero, &var_16, &var_17, &var_18, &var_19);
  checksum();
}
