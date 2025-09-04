/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5959
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5959
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
void test(val<bool> var_1, val<long long int> var_2, val<bool> var_5, val<unsigned char> var_6, val<unsigned long long int> var_7, val<long long int> var_8, val<bool> var_11, val<int> zero, val<long long int*> var_12, val<unsigned int*> var_13, val<unsigned int*> var_14, val<unsigned short*> var_15, val<unsigned char*> var_16) {
    *var_12 += var_2;
    if (((/* implicit */val<bool>) max((var_8), (((/* implicit */val<long long int>) var_6)))))
    {
        *var_13 = ((/* implicit */val<unsigned int>) max((*var_13), (((/* implicit */val<unsigned int>) (~(min((((((/* implicit */val<bool>) -969895414405911924LL)) ? (((/* implicit */val<int>) (val<unsigned short>)55084)) : (((/* implicit */val<int>) var_11)))), (((var_11) ? (((/* implicit */val<int>) (val<signed char>)111)) : (((/* implicit */val<int>) var_1)))))))))));
        *var_14 = ((/* implicit */val<unsigned int>) max((((((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) (val<unsigned short>)55084))))) ^ (var_7))), (((/* implicit */val<unsigned long long int>) (val<unsigned short>)10471))));
        *var_15 = ((/* implicit */val<unsigned short>) min((*var_15), (((/* implicit */val<unsigned short>) ((((/* implicit */val<int>) (val<bool>)1)) | (((/* implicit */val<int>) var_5)))))));
    }

    *var_16 = var_6;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)0;
long long int var_2 = 2700746275312583673LL;
bool var_5 = (bool)0;
unsigned char var_6 = (unsigned char)236;
unsigned long long int var_7 = 16732925198249768684ULL;
long long int var_8 = 7712030349213041680LL;
bool var_11 = (bool)1;
int zero = 0;
long long int var_12 = 3264758994743068313LL;
unsigned int var_13 = 3985618537U;
unsigned int var_14 = 562223277U;
unsigned short var_15 = (unsigned short)55690;
unsigned char var_16 = (unsigned char)8;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 5965505270055651986LL;
    value_mismatch |= var_13 != 4294967184U;
    value_mismatch |= var_14 != 3777175103U;
    value_mismatch |= var_15 != (unsigned short)1;
    value_mismatch |= var_16 != (unsigned char)236;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_5, var_6, var_7, var_8, var_11, zero, &var_12, &var_13, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
