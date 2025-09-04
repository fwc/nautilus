/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9195
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9195
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
void test(val<short> var_0, val<unsigned long long int> var_1, val<unsigned long long int> var_2, val<short> var_4, val<unsigned int> var_5, val<unsigned long long int> var_6, val<unsigned int> var_7, val<unsigned int> var_8, val<unsigned long long int> var_9, val<unsigned int> var_10, val<short> var_12, val<int> zero, val<unsigned long long int*> var_15, val<short*> var_16, val<unsigned long long int*> var_17) {
    if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) min((((/* implicit */val<short>) ((4238893605U) < (4238893588U)))), (((val<short>) 18182832458321341630ULL))))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<unsigned char>) ((((/* implicit */val<bool>) 0U)) ? (0U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_12)))))))) : (min(((-(var_1))), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_0))) > (var_2)))))))))
    {
        *var_15 = ((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) ((((val<unsigned long long int>) 13273556486014771336ULL)) << (((/* implicit */val<int>) ((val<unsigned char>) var_4))))))));
        *var_16 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) 2776343073U)) ? (((/* implicit */val<unsigned long long int>) var_7)) : (min((((/* implicit */val<unsigned long long int>) max((var_7), (var_10)))), (((((/* implicit */val<bool>) var_6)) ? (var_1) : (4599410658734814857ULL)))))));
    }

    *var_17 = max((((/* implicit */val<unsigned long long int>) max(((!(((/* implicit */val<bool>) var_5)))), (((var_8) < (var_7)))))), (var_9));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19145;
unsigned long long int var_1 = 17876930684635742011ULL;
unsigned long long int var_2 = 8054505136179020267ULL;
short var_4 = (short)27188;
unsigned int var_5 = 2702899929U;
unsigned long long int var_6 = 2198326860057500389ULL;
unsigned int var_7 = 152866698U;
unsigned int var_8 = 4073210030U;
unsigned long long int var_9 = 250109921206982553ULL;
unsigned int var_10 = 3316936712U;
short var_12 = (short)22751;
int zero = 0;
unsigned long long int var_15 = 12115620033852891207ULL;
short var_16 = (short)-2147;
unsigned long long int var_17 = 8880805146237881200ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 0ULL;
    value_mismatch |= var_16 != (short)-28790;
    value_mismatch |= var_17 != 250109921206982553ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_12, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
