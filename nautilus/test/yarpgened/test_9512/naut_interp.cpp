/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9512
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9512
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
void test(val<short> var_0, val<short> var_2, val<unsigned int> var_3, val<unsigned int> var_9, val<int> var_10, val<unsigned short> var_12, val<int> var_14, val<short> var_16, val<int> zero, val<unsigned char*> var_17, val<unsigned int*> var_18, val<unsigned short*> var_19, val<long long int*> var_20) {
    *var_17 = ((/* implicit */val<unsigned char>) max((*var_17), (((/* implicit */val<unsigned char>) var_12))));
    *var_18 &= ((/* implicit */val<unsigned int>) max((-875917024), (((/* implicit */val<int>) (val<unsigned short>)65535))));
    if (((/* implicit */val<bool>) max((((/* implicit */val<unsigned int>) var_2)), (((((/* implicit */val<bool>) ((((/* implicit */val<int>) var_12)) - (var_10)))) ? (((/* implicit */val<unsigned int>) (-(var_14)))) : (((((/* implicit */val<bool>) var_0)) ? (var_3) : (((/* implicit */val<unsigned int>) var_10)))))))))
    {
        *var_19 = ((/* implicit */val<unsigned short>) min((*var_19), (((/* implicit */val<unsigned short>) (~((-(((var_9) >> (((((/* implicit */val<int>) var_0)) + (25059))))))))))));
        *var_20 = ((/* implicit */val<long long int>) ((val<short>) ((((/* implicit */val<int>) var_16)) < (((/* implicit */val<int>) ((val<unsigned short>) var_16))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25053;
short var_2 = (short)-27;
unsigned int var_3 = 2591575579U;
unsigned int var_9 = 1610850106U;
int var_10 = -1406264564;
unsigned short var_12 = (unsigned short)2729;
int var_14 = -623443097;
short var_16 = (short)1225;
int zero = 0;
unsigned char var_17 = (unsigned char)242;
unsigned int var_18 = 139341212U;
unsigned short var_19 = (unsigned short)43849;
long long int var_20 = 2011585067938048768LL;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (unsigned char)242;
    value_mismatch |= var_18 != 11676U;
    value_mismatch |= var_19 != (unsigned short)3707;
    value_mismatch |= var_20 != 0LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_9, var_10, var_12, var_14, var_16, zero, &var_17, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
