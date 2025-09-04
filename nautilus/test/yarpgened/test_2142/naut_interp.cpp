/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2142
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2142
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
void test(val<int> var_1, val<signed char> var_6, val<unsigned long long int> var_7, val<signed char> var_13, val<unsigned long long int> var_14, val<unsigned long long int> var_15, val<short> var_16, val<int> zero, val<unsigned long long int*> var_20, val<long long int*> var_21, val<unsigned long long int*> var_22, val<unsigned long long int*> var_23, val<unsigned long long int*> var_24, val<int*> var_25) {
    if (((/* implicit */val<bool>) var_6))
    {
        *var_20 = ((/* implicit */val<unsigned long long int>) max((*var_20), (((val<unsigned long long int>) ((val<unsigned int>) 2018034812856936312LL)))));
        if (((/* implicit */val<bool>) var_16))
        {
            *var_21 = ((/* implicit */val<long long int>) max((*var_21), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((val<signed char>) ((((/* implicit */val<bool>) 4194303LL)) ? (((/* implicit */val<int>) (val<unsigned short>)44191)) : (((/* implicit */val<int>) (val<signed char>)127)))))) ? (16768718457431902199ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_13))))))));
            *var_22 = max((((/* implicit */val<unsigned long long int>) (val<signed char>)-50)), (min((var_15), (min((((/* implicit */val<unsigned long long int>) var_13)), (var_14))))));
        }

        *var_23 &= ((/* implicit */val<unsigned long long int>) (-(((val<unsigned int>) ((val<signed char>) var_1)))));
        *var_24 |= var_7;
    }

    *var_25 = ((/* implicit */val<int>) max((*var_25), (((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) ((val<unsigned int>) min((((/* implicit */val<int>) (val<signed char>)-1)), (-813255347))))) + (var_14))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2126827703;
signed char var_6 = (signed char)58;
unsigned long long int var_7 = 5119796950016972117ULL;
signed char var_13 = (signed char)9;
unsigned long long int var_14 = 12585046844189283685ULL;
unsigned long long int var_15 = 5979642335658357065ULL;
short var_16 = (short)-5777;
int zero = 0;
unsigned long long int var_20 = 9706980578301670713ULL;
long long int var_21 = -7262411143871477863LL;
unsigned long long int var_22 = 2042388648790685399ULL;
unsigned long long int var_23 = 12485211306935307702ULL;
unsigned long long int var_24 = 5632293569335703675ULL;
int var_25 = 894440600;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 9706980578301670713ULL;
    value_mismatch |= var_21 != -1678025616277649417LL;
    value_mismatch |= var_22 != 18446744073709551566ULL;
    value_mismatch |= var_23 != 0ULL;
    value_mismatch |= var_24 != 5705477144901844351ULL;
    value_mismatch |= var_25 != 894440600;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_6, var_7, var_13, var_14, var_15, var_16, zero, &var_20, &var_21, &var_22, &var_23, &var_24, &var_25);
  checksum();
  assert(!value_mismatch);
}
