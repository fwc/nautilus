/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2536
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2536
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
void test(val<long long int> var_2, val<unsigned char> var_6, val<unsigned short> var_9, val<bool> var_11, val<unsigned long long int> var_12, val<bool> var_15, val<unsigned int> var_19, val<int> zero, val<short*> var_20, val<unsigned long long int*> var_21, val<bool*> var_22, val<unsigned short*> var_23) {
    if (max(((((~(370626017))) >= (((/* implicit */val<int>) var_11)))), (var_15)))
    {
        *var_20 = ((/* implicit */val<short>) max((((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) (val<signed char>)-96)) ? (((/* implicit */val<int>) (val<signed char>)-102)) : (2147483647)))), ((~(var_19)))));
        *var_21 = ((/* implicit */val<unsigned long long int>) min((*var_21), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)-10))) != (4126236690U))) ? ((((val<bool>)0) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) var_9)))) : (max((((/* implicit */val<int>) (val<bool>)1)), (881963400)))))) ? (((/* implicit */val<int>) (((-(var_12))) <= (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_6)))))) : (((/* implicit */val<int>) max((max(((val<signed char>)-113), ((val<signed char>)-111))), (((/* implicit */val<signed char>) (val<bool>)1))))))))));
        *var_22 = ((/* implicit */val<bool>) min(((val<unsigned short>)35067), (((/* implicit */val<unsigned short>) (val<signed char>)127))));
    }

    *var_23 = ((/* implicit */val<unsigned short>) min((var_2), (((/* implicit */val<long long int>) var_9))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2968127608704855776LL;
unsigned char var_6 = (unsigned char)124;
unsigned short var_9 = (unsigned short)42041;
bool var_11 = (bool)1;
unsigned long long int var_12 = 12973700216175313547ULL;
bool var_15 = (bool)1;
unsigned int var_19 = 3223576881U;
int zero = 0;
short var_20 = (short)-25724;
unsigned long long int var_21 = 6242011078916311402ULL;
bool var_22 = (bool)1;
unsigned short var_23 = (unsigned short)6538;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (short)-102;
    value_mismatch |= var_21 != 0ULL;
    value_mismatch |= var_22 != (bool)1;
    value_mismatch |= var_23 != (unsigned short)42041;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_6, var_9, var_11, var_12, var_15, var_19, zero, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
