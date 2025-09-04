/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3480
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3480
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
void test(val<unsigned long long int> var_0, val<int> var_2, val<short> var_4, val<long long int> var_5, val<long long int> var_6, val<bool> var_7, val<signed char> var_11, val<unsigned char> var_13, val<signed char> var_16, val<int> zero, val<signed char*> var_17, val<unsigned int*> var_18, val<int*> var_19, val<unsigned int*> var_20) {
    *var_17 += ((/* implicit */val<signed char>) (~(((/* implicit */val<int>) min((((/* implicit */val<unsigned short>) ((12518023249219713442ULL) < (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_4)))))), (max((((/* implicit */val<unsigned short>) var_13)), ((val<unsigned short>)22909))))))));
    if (((((/* implicit */val<int>) (val<unsigned short>)42627)) > (((/* implicit */val<int>) var_4))))
    {
        *var_18 = ((/* implicit */val<unsigned int>) max((((/* implicit */val<short>) (!(((17884798700069322885ULL) >= (var_0)))))), (((val<short>) (!(((/* implicit */val<bool>) var_13)))))));
        *var_19 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) min((((((/* implicit */val<bool>) -1989735559)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_16))) : (var_5))), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) 8936830510563328LL)) ? (var_2) : (((/* implicit */val<int>) (val<unsigned short>)55325)))))))) ? (576460752303423487LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_13)))));
        *var_20 = ((/* implicit */val<unsigned int>) min((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_6))))) < (((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<short>)255)))))))), (((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (val<unsigned short>)42613)) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) var_11))))) / (((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_4))) % (12ULL)))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18421244489617874639ULL;
int var_2 = 999928833;
short var_4 = (short)-15501;
long long int var_5 = 4447633315514688271LL;
long long int var_6 = -7942227111202488606LL;
bool var_7 = (bool)0;
signed char var_11 = (signed char)108;
unsigned char var_13 = (unsigned char)49;
signed char var_16 = (signed char)97;
int zero = 0;
signed char var_17 = (signed char)-112;
unsigned int var_18 = 3811356996U;
int var_19 = -1346812169;
unsigned int var_20 = 1003038468U;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (signed char)-114;
    value_mismatch |= var_18 != 1U;
    value_mismatch |= var_19 != -1;
    value_mismatch |= var_20 != 0U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_4, var_5, var_6, var_7, var_11, var_13, var_16, zero, &var_17, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
