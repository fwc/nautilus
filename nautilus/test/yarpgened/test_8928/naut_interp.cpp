/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8928
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8928
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
void test(val<short> var_0, val<bool> var_1, val<unsigned long long int> var_2, val<short> var_3, val<short> var_5, val<long long int> var_6, val<short> var_8, val<int> var_10, val<int> zero, val<bool*> var_12, val<int*> var_13, val<unsigned char*> var_14) {
    *var_12 += ((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((val<unsigned short>) var_10))) ? (((/* implicit */val<int>) ((val<short>) var_8))) : (((/* implicit */val<int>) var_8))))) ? (((/* implicit */val<int>) min((((/* implicit */val<short>) ((val<bool>) var_1))), (var_0)))) : (max((((/* implicit */val<int>) (val<bool>)1)), ((+(((/* implicit */val<int>) var_5))))))));
    *var_13 = ((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) var_6)) | (var_2)));
    *var_14 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<int>) ((min((var_6), (9223372036854775793LL))) >= (((/* implicit */val<long long int>) ((((/* implicit */val<int>) var_3)) | (((/* implicit */val<int>) (val<bool>)0)))))))) + (((/* implicit */val<int>) var_8))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16740;
bool var_1 = (bool)1;
unsigned long long int var_2 = 13149962926625769721ULL;
short var_3 = (short)4299;
short var_5 = (short)-5736;
long long int var_6 = -5618407847527024882LL;
short var_8 = (short)21711;
int var_10 = -265296614;
int zero = 0;
bool var_12 = (bool)0;
int var_13 = 747517124;
unsigned char var_14 = (unsigned char)65;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (bool)1;
    value_mismatch |= var_13 != -1074266113;
    value_mismatch |= var_14 != (unsigned char)207;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_5, var_6, var_8, var_10, zero, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
