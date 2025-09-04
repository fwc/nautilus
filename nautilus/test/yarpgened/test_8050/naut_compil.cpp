/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8050
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8050
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
void test(val<unsigned char> var_5, val<signed char> var_7, val<short> var_9, val<int> zero, val<bool*> var_11, val<long long int*> var_12, val<short*> var_13) {
    *var_11 = ((/* implicit */val<bool>) max((((val<short>) min((var_5), (((/* implicit */val<unsigned char>) var_7))))), (((/* implicit */val<short>) (val<unsigned char>)183))));
    if (((/* implicit */val<bool>) (val<unsigned char>)183))
    {
        *var_12 &= ((/* implicit */val<long long int>) var_7);
        *var_13 = ((/* implicit */val<short>) max((*var_13), (((/* implicit */val<short>) ((val<long long int>) var_9)))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)181;
signed char var_7 = (signed char)21;
short var_9 = (short)24772;
int zero = 0;
bool var_11 = (bool)1;
long long int var_12 = -6094628896555672323LL;
short var_13 = (short)22149;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (bool)1;
    value_mismatch |= var_12 != 21LL;
    value_mismatch |= var_13 != (short)24772;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_7, var_9, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
