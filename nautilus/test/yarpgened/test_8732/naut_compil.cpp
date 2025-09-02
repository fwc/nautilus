/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8732
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8732
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
void test(val<signed char> var_0, val<unsigned short> var_1, val<long long int> var_3, val<int> var_5, val<int> var_8, val<unsigned short> var_13, val<unsigned short> var_15, val<int> zero, val<signed char*> var_18, val<unsigned long long int*> var_19, val<signed char*> var_20, val<bool*> var_21) {
    if (((/* implicit */val<bool>) max((min(((~(((/* implicit */val<int>) (val<signed char>)-30)))), (var_8))), (((((/* implicit */val<int>) min((((/* implicit */val<signed char>) (val<bool>)1)), (var_0)))) & (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_1))))))))))
    {
        *var_18 *= var_0;
        *var_19 = ((/* implicit */val<unsigned long long int>) var_3);
    }

    *var_20 = ((/* implicit */val<signed char>) min((*var_20), (((/* implicit */val<signed char>) (~(min((min((var_8), (((/* implicit */val<int>) var_15)))), ((~(((/* implicit */val<int>) var_13)))))))))));
    *var_21 += ((/* implicit */val<bool>) ((((/* implicit */val<unsigned long long int>) min(((-(var_5))), (((/* implicit */val<int>) (val<signed char>)-30))))) + ((+(9163194865996150188ULL)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)106;
unsigned short var_1 = (unsigned short)24536;
long long int var_3 = 438592285744670711LL;
int var_5 = -1713029065;
int var_8 = -1137536977;
unsigned short var_13 = (unsigned short)35901;
unsigned short var_15 = (unsigned short)16929;
int zero = 0;
signed char var_18 = (signed char)91;
unsigned long long int var_19 = 15933291485117723621ULL;
signed char var_20 = (signed char)-120;
bool var_21 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (signed char)91;
    value_mismatch |= var_19 != 15933291485117723621ULL;
    value_mismatch |= var_20 != (signed char)-120;
    value_mismatch |= var_21 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_5, var_8, var_13, var_15, zero, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
