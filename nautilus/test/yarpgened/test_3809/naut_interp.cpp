/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3809
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3809
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
void test(val<int> var_4, val<short> var_6, val<unsigned long long int> var_8, val<long long int> var_9, val<unsigned int> var_11, val<long long int> var_12, val<unsigned int> var_16, val<long long int> var_17, val<signed char> var_18, val<int> zero, val<short*> var_20, val<unsigned long long int*> var_21, val<int*> var_22, val<signed char*> var_23, val<unsigned char*> var_24) {
    if (((/* implicit */val<bool>) max((((/* implicit */val<signed char>) ((((/* implicit */val<int>) var_6)) < (((/* implicit */val<int>) var_6))))), (((val<signed char>) ((((((/* implicit */val<int>) var_6)) + (2147483647))) << (((7343942812253052135LL) - (7343942812253052135LL)))))))))
    {
        *var_20 = ((/* implicit */val<short>) min((*var_20), (((val<short>) ((val<unsigned int>) min((((/* implicit */val<unsigned int>) var_4)), (0U)))))));
        if (((/* implicit */val<bool>) ((((var_8) * (((/* implicit */val<unsigned long long int>) (+(((/* implicit */val<int>) (val<unsigned char>)214))))))) << (((var_17) - (1686492788951494557LL))))))
        {
            *var_21 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<long long int>) ((val<int>) var_16))) / (var_9)));
            *var_22 = ((/* implicit */val<int>) var_18);
        }

    }

    *var_23 = ((/* implicit */val<signed char>) var_12);
    *var_24 = ((/* implicit */val<unsigned char>) max((*var_24), (((/* implicit */val<unsigned char>) ((var_16) <= (var_11))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1140502097;
short var_6 = (short)-29343;
unsigned long long int var_8 = 1401904547682616590ULL;
long long int var_9 = 5995269085009897782LL;
unsigned int var_11 = 3239189269U;
long long int var_12 = -6271733144667682650LL;
unsigned int var_16 = 724854117U;
long long int var_17 = 1686492788951494570LL;
signed char var_18 = (signed char)-67;
int zero = 0;
short var_20 = (short)-17146;
unsigned long long int var_21 = 2406590360214406450ULL;
int var_22 = 233084634;
signed char var_23 = (signed char)47;
unsigned char var_24 = (unsigned char)36;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (short)-17146;
    value_mismatch |= var_21 != 0ULL;
    value_mismatch |= var_22 != -67;
    value_mismatch |= var_23 != (signed char)-90;
    value_mismatch |= var_24 != (unsigned char)36;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_6, var_8, var_9, var_11, var_12, var_16, var_17, var_18, zero, &var_20, &var_21, &var_22, &var_23, &var_24);
  checksum();
}
