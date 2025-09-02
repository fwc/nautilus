/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8889
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8889
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
void test(val<unsigned char> var_0, val<bool> var_1, val<bool> var_3, val<int> var_8, val<unsigned int> var_9, val<signed char> var_10, val<long long int> var_12, val<unsigned int> var_13, val<unsigned short> var_14, val<long long int> var_15, val<signed char> var_17, val<int> zero, val<unsigned long long int*> var_19, val<unsigned short*> var_20, val<unsigned short*> var_21, val<long long int*> var_22) {
    *var_19 = ((/* implicit */val<unsigned long long int>) max((((((/* implicit */val<bool>) var_8)) ? (((((/* implicit */val<long long int>) var_8)) - (var_12))) : (((/* implicit */val<long long int>) ((var_13) * (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_1)))))))), (((/* implicit */val<long long int>) max((((/* implicit */val<signed char>) (!(((/* implicit */val<bool>) var_10))))), ((val<signed char>)69))))));
    *var_20 = ((/* implicit */val<unsigned short>) 2035287790U);
    *var_21 = ((/* implicit */val<unsigned short>) max((*var_21), (((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) min((12866613978162103505ULL), (((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)80))) - (12866613978162103504ULL)))))) ? (((/* implicit */val<int>) var_14)) : (((/* implicit */val<int>) var_0)))))));
    *var_22 = ((/* implicit */val<long long int>) max((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((var_12) & (((/* implicit */val<long long int>) var_9))))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<int>) (val<bool>)0)) >= (((/* implicit */val<int>) var_10)))))) : (((((/* implicit */val<bool>) (val<short>)-32752)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_17))) : (var_15)))))), (((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) 700544374118023644ULL)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_3))) : (var_13)))) | (((((/* implicit */val<unsigned long long int>) 3418066829U)) + (10739798188602487386ULL)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)112;
bool var_1 = (bool)0;
bool var_3 = (bool)0;
int var_8 = -1738436165;
unsigned int var_9 = 3370421190U;
signed char var_10 = (signed char)82;
long long int var_12 = -5578518125830671407LL;
unsigned int var_13 = 3946392683U;
unsigned short var_14 = (unsigned short)55272;
long long int var_15 = 1107852630318816273LL;
signed char var_17 = (signed char)22;
int zero = 0;
unsigned long long int var_19 = 13227513268551209401ULL;
unsigned short var_20 = (unsigned short)11497;
unsigned short var_21 = (unsigned short)61435;
long long int var_22 = -3505780377507731556LL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 5578518124092235242ULL;
    value_mismatch |= var_20 != (unsigned short)1774;
    value_mismatch |= var_21 != (unsigned short)61435;
    value_mismatch |= var_22 != -7706945881688997401LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_8, var_9, var_10, var_12, var_13, var_14, var_15, var_17, zero, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
