/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9615
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9615
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
void test(val<signed char> var_0, val<unsigned char> var_1, val<unsigned int> var_2, val<bool> var_3, val<int> var_5, val<int> var_8, val<signed char> var_10, val<long long int> var_13, val<long long int> var_15, val<long long int> var_16, val<unsigned short> var_17, val<int> zero, val<signed char*> var_18, val<unsigned short*> var_19, val<unsigned int*> var_20, val<unsigned short*> var_21, val<bool*> var_22) {
    *var_18 &= ((/* implicit */val<signed char>) ((7431344593283344317LL) >> (((((9556653488623131010ULL) << ((((((val<bool>)1) ? (((/* implicit */val<int>) var_10)) : (-416735700))) + (123))))) - (13526638861085573116ULL)))));
    *var_19 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<int>) ((((/* implicit */val<long long int>) ((((/* implicit */val<int>) var_1)) / (-416735700)))) >= (var_16)))) : (((/* implicit */val<int>) var_17))));
    *var_20 = ((/* implicit */val<unsigned int>) min((((/* implicit */val<long long int>) min((-416735701), (var_5)))), (((((((/* implicit */val<bool>) var_8)) ? (var_16) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_3))))) | (min((((/* implicit */val<long long int>) var_2)), (var_15)))))));
    *var_21 = ((/* implicit */val<unsigned short>) var_13);
    *var_22 = ((/* implicit */val<bool>) max((*var_22), (((/* implicit */val<bool>) var_0))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-17;
unsigned char var_1 = (unsigned char)84;
unsigned int var_2 = 1009843365U;
bool var_3 = (bool)1;
int var_5 = 1351652448;
int var_8 = -573141730;
signed char var_10 = (signed char)-93;
long long int var_13 = 2029419850368794659LL;
long long int var_15 = 2143847093052293075LL;
long long int var_16 = 7492751186851039174LL;
unsigned short var_17 = (unsigned short)42623;
int zero = 0;
signed char var_18 = (signed char)-66;
unsigned short var_19 = (unsigned short)10372;
unsigned int var_20 = 1855168171U;
unsigned short var_21 = (unsigned short)6987;
bool var_22 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (signed char)58;
    value_mismatch |= var_19 != (unsigned short)0;
    value_mismatch |= var_20 != 3878231595U;
    value_mismatch |= var_21 != (unsigned short)49187;
    value_mismatch |= var_22 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_5, var_8, var_10, var_13, var_15, var_16, var_17, zero, &var_18, &var_19, &var_20, &var_21, &var_22);
  checksum();
}
