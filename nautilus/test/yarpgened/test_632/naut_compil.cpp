/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 632
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=632
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
void test(val<unsigned char> var_1, val<signed char> var_4, val<long long int> var_7, val<short> var_9, val<unsigned long long int> var_14, val<unsigned short> var_15, val<int> zero, val<signed char*> var_17, val<unsigned short*> var_18, val<bool*> var_19, val<unsigned long long int*> var_20, val<unsigned short*> var_21) {
    *var_17 -= ((/* implicit */val<signed char>) (~(max((956649640162376321LL), (((/* implicit */val<long long int>) (val<bool>)1))))));
    *var_18 = ((/* implicit */val<unsigned short>) var_1);
    if (((/* implicit */val<bool>) min((((/* implicit */val<long long int>) ((((/* implicit */val<int>) max(((val<unsigned short>)63624), (((/* implicit */val<unsigned short>) var_4))))) != (((val<int>) var_9))))), (var_7))))
    {
        *var_19 = ((/* implicit */val<bool>) min(((~(((/* implicit */val<int>) ((((/* implicit */val<int>) var_15)) != (((/* implicit */val<int>) var_15))))))), (((val<int>) 520093696))));
        *var_20 ^= ((((/* implicit */val<bool>) (~(288230307432235008LL)))) ? (((/* implicit */val<unsigned long long int>) 520093696)) : (238494171829208831ULL));
        *var_21 = ((/* implicit */val<unsigned short>) ((var_14) * (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)0)))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)251;
signed char var_4 = (signed char)-77;
long long int var_7 = -5136804186123268742LL;
short var_9 = (short)26466;
unsigned long long int var_14 = 14394431901052051511ULL;
unsigned short var_15 = (unsigned short)40447;
int zero = 0;
signed char var_17 = (signed char)-53;
unsigned short var_18 = (unsigned short)11248;
bool var_19 = (bool)1;
unsigned long long int var_20 = 15387146760309850026ULL;
unsigned short var_21 = (unsigned short)46063;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (signed char)77;
    value_mismatch |= var_18 != (unsigned short)251;
    value_mismatch |= var_19 != (bool)1;
    value_mismatch |= var_20 != 15387146760192409514ULL;
    value_mismatch |= var_21 != (unsigned short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_7, var_9, var_14, var_15, zero, &var_17, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
