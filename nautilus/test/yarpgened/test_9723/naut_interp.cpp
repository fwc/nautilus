/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9723
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9723
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
void test(val<unsigned int> var_3, val<signed char> var_4, val<unsigned char> var_5, val<bool> var_7, val<int> zero, val<unsigned char*> var_12, val<bool*> var_13, val<int*> var_14) {
    *var_12 += ((/* implicit */val<unsigned char>) max((((val<unsigned long long int>) ((val<unsigned int>) 9788467464588403490ULL))), (((/* implicit */val<unsigned long long int>) ((val<signed char>) min((12406266806699281244ULL), (((/* implicit */val<unsigned long long int>) (val<bool>)1))))))));
    if (((/* implicit */val<bool>) ((max((((/* implicit */val<unsigned int>) -992066)), (1675171582U))) | (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((444107936U) >= (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_4))))))))))
    {
        *var_13 = max((((((((/* implicit */val<int>) var_5)) >= (-496410649))) && (((/* implicit */val<bool>) max(((val<signed char>)86), ((val<signed char>)-80)))))), (max((var_7), ((!(((/* implicit */val<bool>) 703466940)))))));
        *var_14 = ((/* implicit */val<int>) var_3);
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1045993360U;
signed char var_4 = (signed char)-110;
unsigned char var_5 = (unsigned char)235;
bool var_7 = (bool)1;
int zero = 0;
unsigned char var_12 = (unsigned char)128;
bool var_13 = (bool)0;
int var_14 = -303938550;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned char)162;
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != 1045993360;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_5, var_7, zero, &var_12, &var_13, &var_14);
  checksum();
}
