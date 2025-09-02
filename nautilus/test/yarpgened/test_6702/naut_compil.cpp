/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6702
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6702
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
void test(val<unsigned short> var_6, val<int> var_7, val<signed char> var_9, val<unsigned long long int> var_13, val<short> var_15, val<unsigned int> var_16, val<unsigned short> var_18, val<unsigned short> var_19, val<int> zero, val<bool*> var_20, val<bool*> var_21, val<long long int*> var_22, val<bool*> var_23, val<unsigned long long int*> var_24) {
    if (((/* implicit */val<bool>) (val<unsigned short>)50507))
    {
        *var_20 = ((/* implicit */val<bool>) min((*var_20), ((!(((/* implicit */val<bool>) max(((+(((/* implicit */val<int>) var_18)))), ((((val<bool>)0) ? (((/* implicit */val<int>) var_19)) : (((/* implicit */val<int>) var_6)))))))))));
        *var_21 = ((/* implicit */val<bool>) var_9);
    }

    *var_22 = ((/* implicit */val<long long int>) min((var_7), (((/* implicit */val<int>) ((((/* implicit */val<long long int>) var_16)) <= (max((((/* implicit */val<long long int>) (val<bool>)1)), (9223372036854775807LL))))))));
    *var_23 = ((/* implicit */val<bool>) var_15);
    *var_24 = ((((/* implicit */val<bool>) var_19)) ? (var_13) : (((/* implicit */val<unsigned long long int>) (-(((/* implicit */val<int>) var_15))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)64563;
int var_7 = 41704816;
signed char var_9 = (signed char)-17;
unsigned long long int var_13 = 12856609624286260514ULL;
short var_15 = (short)11560;
unsigned int var_16 = 3987820303U;
unsigned short var_18 = (unsigned short)36254;
unsigned short var_19 = (unsigned short)27125;
int zero = 0;
bool var_20 = (bool)0;
bool var_21 = (bool)0;
long long int var_22 = 2794832164866492856LL;
bool var_23 = (bool)1;
unsigned long long int var_24 = 17895490812968211490ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (bool)0;
    value_mismatch |= var_21 != (bool)1;
    value_mismatch |= var_22 != 1LL;
    value_mismatch |= var_23 != (bool)1;
    value_mismatch |= var_24 != 12856609624286260514ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_7, var_9, var_13, var_15, var_16, var_18, var_19, zero, &var_20, &var_21, &var_22, &var_23, &var_24);
  checksum();
  assert(!value_mismatch);
}
