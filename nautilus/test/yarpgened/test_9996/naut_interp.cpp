/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9996
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9996
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
void test(val<signed char> var_0, val<long long int> var_2, val<long long int> var_3, val<unsigned long long int> var_5, val<unsigned long long int> var_6, val<unsigned long long int> var_8, val<bool> var_10, val<int> zero, val<bool*> var_12, val<unsigned int*> var_13, val<unsigned short*> var_14, val<unsigned char*> var_15) {
    *var_12 = ((/* implicit */val<bool>) var_2);
    *var_13 = ((/* implicit */val<unsigned int>) min((*var_13), (((/* implicit */val<unsigned int>) max(((!(var_10))), (var_10))))));
    if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) (-(var_3)))) ? (min((((/* implicit */val<unsigned long long int>) (+(((/* implicit */val<int>) (val<short>)7))))), ((+(var_6))))) : (min((((/* implicit */val<unsigned long long int>) (val<signed char>)127)), (var_5))))))
    {
        *var_14 = ((/* implicit */val<unsigned short>) (-(min((var_8), (((/* implicit */val<unsigned long long int>) ((4847895806120576844LL) << (((((/* implicit */val<int>) var_0)) - (5))))))))));
        *var_15 = ((/* implicit */val<unsigned char>) max((*var_15), (((/* implicit */val<unsigned char>) max((((/* implicit */val<unsigned long long int>) (+(((/* implicit */val<int>) var_0))))), (((((/* implicit */val<bool>) (val<signed char>)(-127 - 1))) ? (min((5424296893491768044ULL), (var_5))) : (min((((/* implicit */val<unsigned long long int>) -4400707152116106149LL)), (var_6))))))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)5;
long long int var_2 = -2997475389558698140LL;
long long int var_3 = 186664815144495169LL;
unsigned long long int var_5 = 10643490962150987750ULL;
unsigned long long int var_6 = 5145598453651736047ULL;
unsigned long long int var_8 = 11089271243977660059ULL;
bool var_10 = (bool)1;
int zero = 0;
bool var_12 = (bool)1;
unsigned int var_13 = 1056722475U;
unsigned short var_14 = (unsigned short)1353;
unsigned char var_15 = (unsigned char)130;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (bool)1;
    value_mismatch |= var_13 != 1U;
    value_mismatch |= var_14 != (unsigned short)47284;
    value_mismatch |= var_15 != (unsigned char)236;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_5, var_6, var_8, var_10, zero, &var_12, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
