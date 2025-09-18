/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 846
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=846
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
void test(val<unsigned short> var_3, val<unsigned int> var_6, val<unsigned short> var_8, val<unsigned int> var_9, val<unsigned int> var_10, val<unsigned int> var_12, val<unsigned int> var_13, val<unsigned int> var_14, val<unsigned int> var_15, val<int> zero, val<unsigned short*> var_18, val<unsigned int*> var_19, val<unsigned int*> var_20, val<unsigned int*> var_21, val<unsigned int*> var_22) {
    *var_18 = ((/* implicit */val<unsigned short>) var_12);
    *var_19 = ((/* implicit */val<unsigned int>) max((((/* implicit */val<int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)27723))) <= (((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)46435))) : (6U)))))), ((~(((/* implicit */val<int>) ((var_15) == (3830405234U))))))));
    if ((!(((/* implicit */val<bool>) var_15))))
    {
        *var_20 = ((((/* implicit */val<bool>) (((~(((/* implicit */val<int>) var_8)))) ^ (((/* implicit */val<int>) max(((val<unsigned short>)10627), ((val<unsigned short>)65346))))))) ? (((((/* implicit */val<bool>) ((((/* implicit */val<int>) var_8)) % (((/* implicit */val<int>) var_8))))) ? (max((4294967295U), (var_12))) : (var_12))) : (4294967295U));
        *var_21 = var_14;
        *var_22 = ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_3))) : (var_9)))) ? (max((((((/* implicit */val<bool>) var_15)) ? (var_6) : (var_12))), (min((1073741823U), (var_13))))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((((/* implicit */val<int>) (val<unsigned short>)15435)) > (((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<unsigned short>)20))))))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)3067;
unsigned int var_6 = 1408572196U;
unsigned short var_8 = (unsigned short)61133;
unsigned int var_9 = 3867445493U;
unsigned int var_10 = 3972216717U;
unsigned int var_12 = 2087753470U;
unsigned int var_13 = 3663146239U;
unsigned int var_14 = 4194665690U;
unsigned int var_15 = 3975704349U;
int zero = 0;
unsigned short var_18 = (unsigned short)25546;
unsigned int var_19 = 1827015188U;
unsigned int var_20 = 1745871465U;
unsigned int var_21 = 84885035U;
unsigned int var_22 = 3352249475U;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned short)38654;
    value_mismatch |= var_19 != 1U;
    value_mismatch |= var_20 != 1745871465U;
    value_mismatch |= var_21 != 84885035U;
    value_mismatch |= var_22 != 3352249475U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_6, var_8, var_9, var_10, var_12, var_13, var_14, var_15, zero, &var_18, &var_19, &var_20, &var_21, &var_22);
  checksum();
}
