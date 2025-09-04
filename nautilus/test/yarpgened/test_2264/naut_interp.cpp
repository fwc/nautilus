/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2264
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2264
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
void test(val<long long int> var_0, val<unsigned short> var_1, val<short> var_4, val<short> var_5, val<bool> var_6, val<int> var_7, val<int> var_8, val<signed char> var_10, val<int> var_13, val<int> var_14, val<int> zero, val<bool*> var_15, val<short*> var_16, val<long long int*> var_17, val<unsigned long long int*> var_18) {
    *var_15 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<long long int>) ((3265187247U) - (((/* implicit */val<unsigned int>) var_8))))) - (((((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned short>)56848))) - (var_0)))))) ? (((((-8207088916932891371LL) > (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<short>)10468))))) ? (((-8207088916932891371LL) % (var_0))) : (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) 8207088916932891370LL)) ? (((/* implicit */val<int>) var_5)) : (((/* implicit */val<int>) var_10))))))) : (((((/* implicit */val<bool>) (+(((/* implicit */val<int>) (val<bool>)1))))) ? (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_13)) ? (((/* implicit */val<int>) var_1)) : (((/* implicit */val<int>) var_5))))) : (((((/* implicit */val<bool>) (val<short>)-885)) ? (8207088916932891371LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)1)))))))));
    *var_16 = ((/* implicit */val<short>) ((max((((((/* implicit */val<bool>) (val<short>)-14060)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<short>)884))) : (-7361233936553447780LL))), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) 1637327105)) ? (((/* implicit */val<int>) (val<short>)14059)) : (((/* implicit */val<int>) var_6))))))) / (min((((-8207088916932891375LL) / (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<short>)15))))), (((/* implicit */val<long long int>) (val<short>)18779))))));
    *var_17 = var_0;
    *var_18 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) max((((/* implicit */val<long long int>) var_7)), (var_0)))) ? (((((/* implicit */val<bool>) (-(((/* implicit */val<int>) (val<short>)-14060))))) ? (((var_8) + (var_14))) : (((((/* implicit */val<bool>) 1252982715U)) ? (var_13) : (((/* implicit */val<int>) var_4)))))) : (((/* implicit */val<int>) var_5))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4892970051664772333LL;
unsigned short var_1 = (unsigned short)20884;
short var_4 = (short)-10982;
short var_5 = (short)25105;
bool var_6 = (bool)0;
int var_7 = -742765739;
int var_8 = -61959374;
signed char var_10 = (signed char)44;
int var_13 = 2020465092;
int var_14 = -106237540;
int zero = 0;
bool var_15 = (bool)1;
short var_16 = (short)11350;
long long int var_17 = -3305180171379058938LL;
unsigned long long int var_18 = 5072998385078725883ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (bool)1;
    value_mismatch |= var_16 != (short)0;
    value_mismatch |= var_17 != 4892970051664772333LL;
    value_mismatch |= var_18 != 18446744073541354702ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_4, var_5, var_6, var_7, var_8, var_10, var_13, var_14, zero, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
