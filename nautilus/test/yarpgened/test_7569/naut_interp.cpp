/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7569
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7569
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
void test(val<long long int> var_0, val<unsigned char> var_1, val<unsigned short> var_4, val<bool> var_6, val<int> var_7, val<unsigned char> var_8, val<bool> var_9, val<unsigned char> var_10, val<int> zero, val<unsigned char*> var_11, val<unsigned long long int*> var_12, val<bool*> var_13) {
    if (((/* implicit */val<bool>) max((((/* implicit */val<unsigned int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)7))) <= (4294967295U)))), ((+(((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_1))) : (4294967286U))))))))
    {
        *var_11 = ((/* implicit */val<unsigned char>) (-(((/* implicit */val<int>) var_10))));
        *var_12 &= ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) (!(((/* implicit */val<bool>) (-(var_0))))))) % (((/* implicit */val<int>) ((val<unsigned char>) min((var_4), (((/* implicit */val<unsigned short>) var_6))))))));
    }

    *var_13 = ((/* implicit */val<bool>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_9))) & (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<short>)-11796)) ? (0U) : (4294967295U)))) ? (var_0) : (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<int>) var_4)) : (((/* implicit */val<int>) var_8)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3119036346943457990LL;
unsigned char var_1 = (unsigned char)90;
unsigned short var_4 = (unsigned short)21736;
bool var_6 = (bool)1;
int var_7 = -268271925;
unsigned char var_8 = (unsigned char)59;
bool var_9 = (bool)1;
unsigned char var_10 = (unsigned char)46;
int zero = 0;
unsigned char var_11 = (unsigned char)38;
unsigned long long int var_12 = 1632876592081566641ULL;
bool var_13 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (unsigned char)210;
    value_mismatch |= var_12 != 0ULL;
    value_mismatch |= var_13 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_4, var_6, var_7, var_8, var_9, var_10, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
