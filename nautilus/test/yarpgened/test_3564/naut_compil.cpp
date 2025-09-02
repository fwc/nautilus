/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3564
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3564
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
void test(val<long long int> var_0, val<short> var_3, val<short> var_4, val<long long int> var_5, val<short> var_8, val<short> var_10, val<long long int> var_11, val<short> var_12, val<long long int> var_15, val<long long int> var_17, val<int> zero, val<short*> var_18, val<long long int*> var_19, val<short*> var_20, val<short*> var_21, val<short*> var_22, val<short*> var_23, val<short*> var_24) {
    *var_18 += ((/* implicit */val<short>) 6149406870489240393LL);
    *var_19 = ((/* implicit */val<long long int>) max((*var_19), ((~(min((((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_10))) & (var_11))), (min((-6149406870489240393LL), (-6149406870489240393LL)))))))));
    if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) min((((((/* implicit */val<bool>) -6149406870489240393LL)) ? (6149406870489240393LL) : (6149406870489240392LL))), (((1784041159923515596LL) ^ (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_10)))))))) ? (((/* implicit */val<int>) ((min((var_15), (var_17))) != (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_8)))))) : (((/* implicit */val<int>) var_12)))))
    {
        *var_20 = ((/* implicit */val<short>) min((min((((/* implicit */val<long long int>) min((var_8), (var_10)))), (6149406870489240393LL))), (min((((-6149406870489240393LL) & (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_3))))), (((/* implicit */val<long long int>) ((4208847230741247325LL) > (var_0))))))));
        *var_21 = ((/* implicit */val<short>) max((*var_21), (((/* implicit */val<short>) var_17))));
        *var_22 *= ((/* implicit */val<short>) (+(((((((((/* implicit */val<bool>) 7918403958914378076LL)) ? (-7223778971803593234LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_12))))) + (9223372036854775807LL))) >> ((((+(4265707351947743637LL))) - (4265707351947743590LL)))))));
    }

    *var_23 *= ((val<short>) min((min((var_5), (var_17))), (((/* implicit */val<long long int>) min(((val<short>)13515), (var_12))))));
    *var_24 |= ((/* implicit */val<short>) min((var_15), (((/* implicit */val<long long int>) ((val<short>) var_4)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4684369227744249259LL;
short var_3 = (short)25789;
short var_4 = (short)-8711;
long long int var_5 = 2820445069570847030LL;
short var_8 = (short)-5550;
short var_10 = (short)30595;
long long int var_11 = 6614208629561188809LL;
short var_12 = (short)15451;
long long int var_15 = 6332550202891198917LL;
long long int var_17 = -7384142263934032147LL;
int zero = 0;
short var_18 = (short)-27714;
long long int var_19 = -8273480295370511327LL;
short var_20 = (short)-24217;
short var_21 = (short)-8308;
short var_22 = (short)10543;
short var_23 = (short)-6956;
short var_24 = (short)21158;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (short)9991;
    value_mismatch |= var_19 != 6149406870489240392LL;
    value_mismatch |= var_20 != (short)-5550;
    value_mismatch |= var_21 != (short)26349;
    value_mismatch |= var_22 != (short)-30895;
    value_mismatch |= var_23 != (short)20548;
    value_mismatch |= var_24 != (short)-8193;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_4, var_5, var_8, var_10, var_11, var_12, var_15, var_17, zero, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23, &var_24);
  checksum();
  assert(!value_mismatch);
}
