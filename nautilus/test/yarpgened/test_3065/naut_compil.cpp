/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3065
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3065
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
void test(val<unsigned char> var_0, val<long long int> var_1, val<signed char> var_3, val<short> var_7, val<int> var_11, val<int> zero, val<unsigned long long int*> var_16, val<long long int*> var_17, val<unsigned long long int*> var_18, val<unsigned long long int*> var_19) {
    *var_16 ^= ((/* implicit */val<unsigned long long int>) var_1);
    *var_17 = (((~(((((/* implicit */val<bool>) (val<unsigned short>)50639)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_3))) : (var_1))))) / (((/* implicit */val<long long int>) ((((/* implicit */val<int>) (val<unsigned short>)50639)) - (((/* implicit */val<int>) (val<unsigned short>)14907))))));
    *var_18 = ((/* implicit */val<unsigned long long int>) max((*var_18), (((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) max((((/* implicit */val<unsigned short>) var_0)), ((val<unsigned short>)50629)))) ? (var_11) : (((/* implicit */val<int>) (val<unsigned short>)14891))))) & (((((/* implicit */val<bool>) (val<unsigned short>)50639)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned short>)50639))) : (8191ULL)))))));
    *var_19 |= ((/* implicit */val<unsigned long long int>) var_7);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)239;
long long int var_1 = -1475832642447716189LL;
signed char var_3 = (signed char)-52;
short var_7 = (short)20444;
int var_11 = -1801229862;
int zero = 0;
unsigned long long int var_16 = 13005314899872318208ULL;
long long int var_17 = 3587414146956050643LL;
unsigned long long int var_18 = 7815994784743898890ULL;
unsigned long long int var_19 = 16153427999805177420ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 6915526786365674403ULL;
    value_mismatch |= var_17 != 0LL;
    value_mismatch |= var_18 != 7815994784743898890ULL;
    value_mismatch |= var_19 != 16153427999805177820ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_7, var_11, zero, &var_16, &var_17, &var_18, &var_19);
  checksum();
}
