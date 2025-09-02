/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4962
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4962
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
void test(val<unsigned short> var_2, val<long long int> var_3, val<unsigned long long int> var_7, val<int> zero, val<int*> var_12, val<int*> var_13, val<unsigned int*> var_14) {
    if (((/* implicit */val<bool>) (val<short>)10505))
    {
        *var_12 &= ((/* implicit */val<int>) var_7);
        *var_13 = ((/* implicit */val<int>) max((*var_13), (((/* implicit */val<int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_2))) < (((var_3) >> (((-3077066691908922440LL) + (3077066691908922476LL))))))))));
    }

    *var_14 = ((/* implicit */val<unsigned int>) max((((/* implicit */val<unsigned short>) (val<short>)-22655)), ((val<unsigned short>)15)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)26724;
long long int var_3 = 4181472311440609334LL;
unsigned long long int var_7 = 379795309309845068ULL;
int zero = 0;
int var_12 = 1639208977;
int var_13 = 292671738;
unsigned int var_14 = 2439010829U;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 1082415104;
    value_mismatch |= var_13 != 292671738;
    value_mismatch |= var_14 != 42881U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_7, zero, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
