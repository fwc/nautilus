/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6755
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6755
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
void test(val<unsigned int> var_0, val<unsigned int> var_1, val<int> var_2, val<int> var_3, val<unsigned short> var_4, val<unsigned int> var_5, val<unsigned int> var_6, val<unsigned char> var_8, val<int> zero, val<short*> var_10, val<long long int*> var_11, val<signed char*> var_12, val<unsigned long long int*> var_13, val<unsigned int*> var_14, val<long long int*> var_15) {
    if (((/* implicit */val<bool>) var_5))
    {
        *var_10 = ((/* implicit */val<short>) ((val<int>) (~(((/* implicit */val<int>) (val<signed char>)-27)))));
        *var_11 = ((/* implicit */val<long long int>) (~(var_5)));
        *var_12 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) var_3)) ? (max((((((/* implicit */val<long long int>) var_0)) % (1597213399907958354LL))), (((/* implicit */val<long long int>) var_0)))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) var_5)) && (((((/* implicit */val<bool>) 2147483647ULL)) && (((/* implicit */val<bool>) var_2))))))))));
        *var_13 = ((/* implicit */val<unsigned long long int>) min((*var_13), (((/* implicit */val<unsigned long long int>) max((var_2), (((/* implicit */val<int>) var_8)))))));
    }

    *var_14 -= ((/* implicit */val<unsigned int>) var_3);
    *var_15 += ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) min((var_6), (((/* implicit */val<unsigned int>) var_4))))) ? (var_6) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((var_6) == (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)-1)))))))))) ? (var_1) : (((/* implicit */val<unsigned int>) max((((/* implicit */val<int>) max((var_4), (((/* implicit */val<unsigned short>) var_8))))), (var_2))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 212024129U;
unsigned int var_1 = 4120377639U;
int var_2 = 2051537822;
int var_3 = -2147376565;
unsigned short var_4 = (unsigned short)23509;
unsigned int var_5 = 2278095271U;
unsigned int var_6 = 2532067815U;
unsigned char var_8 = (unsigned char)148;
int zero = 0;
short var_10 = (short)-28239;
long long int var_11 = 6246243005550100880LL;
signed char var_12 = (signed char)-102;
unsigned long long int var_13 = 16744826099934535520ULL;
unsigned int var_14 = 1387657167U;
long long int var_15 = -4974498628009101299LL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (short)26;
    value_mismatch |= var_11 != 2016872024LL;
    value_mismatch |= var_12 != (signed char)65;
    value_mismatch |= var_13 != 2051537822ULL;
    value_mismatch |= var_14 != 3535033732U;
    value_mismatch |= var_15 != -4974498623888723660LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_8, zero, &var_10, &var_11, &var_12, &var_13, &var_14, &var_15);
  checksum();
}
