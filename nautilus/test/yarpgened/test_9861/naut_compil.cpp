/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9861
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9861
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
void test(val<unsigned long long int> var_1, val<signed char> var_3, val<unsigned long long int> var_5, val<unsigned short> var_6, val<long long int> var_7, val<bool> var_9, val<int> zero, val<bool*> var_10, val<short*> var_11, val<signed char*> var_12, val<unsigned short*> var_13, val<bool*> var_14, val<signed char*> var_15) {
    *var_10 = ((/* implicit */val<bool>) (val<signed char>)108);
    *var_11 = ((/* implicit */val<short>) var_5);
    if (((/* implicit */val<bool>) (val<signed char>)108))
    {
        *var_12 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) max(((val<signed char>)116), ((val<signed char>)26)))) ? (1099511627776LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<signed char>)26)))));
        *var_13 = ((/* implicit */val<unsigned short>) (+(((((/* implicit */val<bool>) max((((/* implicit */val<unsigned long long int>) var_3)), (var_1)))) ? (((/* implicit */val<unsigned long long int>) var_7)) : ((-(18446744073709551615ULL)))))));
    }

    *var_14 = var_9;
    *var_15 = ((/* implicit */val<signed char>) min((*var_15), (((/* implicit */val<signed char>) (+(((((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)5))) > (var_5))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) 9223372036854775807LL)))))) : (((((/* implicit */val<bool>) var_6)) ? (0LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_9))))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11616759980805643410ULL;
signed char var_3 = (signed char)-42;
unsigned long long int var_5 = 11424391817160256716ULL;
unsigned short var_6 = (unsigned short)28644;
long long int var_7 = 628669759502498561LL;
bool var_9 = (bool)0;
int zero = 0;
bool var_10 = (bool)0;
short var_11 = (short)507;
signed char var_12 = (signed char)-49;
unsigned short var_13 = (unsigned short)20561;
bool var_14 = (bool)1;
signed char var_15 = (signed char)-113;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (bool)1;
    value_mismatch |= var_11 != (short)27852;
    value_mismatch |= var_12 != (signed char)0;
    value_mismatch |= var_13 != (unsigned short)15105;
    value_mismatch |= var_14 != (bool)0;
    value_mismatch |= var_15 != (signed char)-113;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_5, var_6, var_7, var_9, zero, &var_10, &var_11, &var_12, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
