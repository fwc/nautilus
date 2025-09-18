/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2258
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2258
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
void test(val<long long int> var_0, val<long long int> var_2, val<unsigned long long int> var_4, val<int> var_6, val<unsigned char> var_14, val<bool> var_15, val<signed char> var_17, val<int> zero, val<long long int*> var_18, val<unsigned short*> var_19, val<long long int*> var_20, val<short*> var_21, val<unsigned char*> var_22, val<bool*> var_23, val<unsigned short*> var_24) {
    if (((/* implicit */val<bool>) ((val<unsigned long long int>) 3686912124U)))
    {
        *var_18 += ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((val<int>) var_2))) ? (((/* implicit */val<unsigned long long int>) var_0)) : (((((/* implicit */val<bool>) ((val<int>) var_14))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<signed char>) var_17)))) : (((((/* implicit */val<unsigned long long int>) -1LL)) % (6831618251510564281ULL)))))));
        *var_19 = ((/* implicit */val<unsigned short>) max((min((((/* implicit */val<unsigned long long int>) (+(((/* implicit */val<int>) var_17))))), (min((18446744073709551605ULL), (((/* implicit */val<unsigned long long int>) var_2)))))), (((/* implicit */val<unsigned long long int>) -23LL))));
        *var_20 = ((/* implicit */val<long long int>) ((((/* implicit */val<unsigned long long int>) var_6)) * ((((!(((/* implicit */val<bool>) 288160007407534080ULL)))) ? (min((var_4), (((/* implicit */val<unsigned long long int>) -9LL)))) : ((-(6629535207021574831ULL)))))));
        *var_21 = ((/* implicit */val<short>) ((val<int>) ((max((var_15), (var_15))) || (((/* implicit */val<bool>) ((((/* implicit */val<bool>) 6LL)) ? (12885877268495916138ULL) : (11ULL)))))));
    }
    else
    {
        *var_22 = ((/* implicit */val<unsigned char>) var_2);
        *var_23 = ((/* implicit */val<bool>) min((*var_23), (((/* implicit */val<bool>) max((((/* implicit */val<unsigned int>) max((max(((val<signed char>)-1), ((val<signed char>)-47))), ((val<signed char>)47)))), (((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) (val<short>)10175)) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) (val<signed char>)55))))) : (1918798070U))))))));
    }

    *var_24 = ((/* implicit */val<unsigned short>) var_15);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6278611087407141383LL;
long long int var_2 = 6543801104560821839LL;
unsigned long long int var_4 = 4665646584507247294ULL;
int var_6 = 718076160;
unsigned char var_14 = (unsigned char)139;
bool var_15 = (bool)0;
signed char var_17 = (signed char)49;
int zero = 0;
long long int var_18 = -465367025197867105LL;
unsigned short var_19 = (unsigned short)37858;
long long int var_20 = 4445988707447172617LL;
short var_21 = (short)535;
unsigned char var_22 = (unsigned char)108;
bool var_23 = (bool)0;
unsigned short var_24 = (unsigned short)27352;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != -6743978112605008488LL;
    value_mismatch |= var_19 != (unsigned short)65513;
    value_mismatch |= var_20 != -7268761603402118912LL;
    value_mismatch |= var_21 != (short)1;
    value_mismatch |= var_22 != (unsigned char)108;
    value_mismatch |= var_23 != (bool)0;
    value_mismatch |= var_24 != (unsigned short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_4, var_6, var_14, var_15, var_17, zero, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23, &var_24);
  checksum();
}
