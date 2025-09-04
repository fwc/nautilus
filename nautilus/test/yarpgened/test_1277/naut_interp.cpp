/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1277
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1277
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
void test(val<unsigned char> var_3, val<long long int> var_4, val<unsigned short> var_5, val<int> var_6, val<bool> var_10, val<bool> var_12, val<short> var_15, val<signed char> var_16, val<int> var_17, val<int> zero, val<short*> var_18, val<bool*> var_19, val<unsigned long long int*> var_20, val<bool*> var_21, val<bool*> var_22) {
    *var_18 = ((/* implicit */val<short>) (+((-(((/* implicit */val<int>) max((((/* implicit */val<unsigned char>) (val<signed char>)68)), (var_3))))))));
    *var_19 = ((((/* implicit */val<long long int>) ((/* implicit */val<int>) ((val<bool>) (val<unsigned short>)1)))) != (var_4));
    *var_20 = ((/* implicit */val<unsigned long long int>) (+(((/* implicit */val<int>) var_15))));
    *var_21 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) (val<unsigned char>)200)) ^ (((/* implicit */val<int>) (val<short>)-4049))))) ? (((/* implicit */val<int>) ((((/* implicit */val<bool>) (~(((/* implicit */val<int>) var_5))))) || (((/* implicit */val<bool>) ((var_12) ? (((/* implicit */val<int>) var_10)) : (((/* implicit */val<int>) var_5)))))))) : (((/* implicit */val<int>) (val<unsigned short>)46919))));
    *var_22 = ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned short>)65533)) ? (((((/* implicit */val<int>) var_16)) / (var_17))) : (((/* implicit */val<int>) ((val<bool>) var_10)))))) && (((/* implicit */val<bool>) (((+(((/* implicit */val<int>) (val<unsigned short>)65534)))) ^ (((((/* implicit */val<bool>) (val<signed char>)(-127 - 1))) ? (var_6) : (((/* implicit */val<int>) var_10))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)132;
long long int var_4 = 2491570432697114396LL;
unsigned short var_5 = (unsigned short)51422;
int var_6 = 786406093;
bool var_10 = (bool)0;
bool var_12 = (bool)1;
short var_15 = (short)-27107;
signed char var_16 = (signed char)-34;
int var_17 = -1854195455;
int zero = 0;
short var_18 = (short)25211;
bool var_19 = (bool)0;
unsigned long long int var_20 = 2496189207876215767ULL;
bool var_21 = (bool)0;
bool var_22 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (short)-132;
    value_mismatch |= var_19 != (bool)1;
    value_mismatch |= var_20 != 18446744073709524509ULL;
    value_mismatch |= var_21 != (bool)1;
    value_mismatch |= var_22 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_5, var_6, var_10, var_12, var_15, var_16, var_17, zero, &var_18, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
