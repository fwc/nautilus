/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7230
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7230
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
void test(val<unsigned char> var_0, val<int> var_3, val<unsigned long long int> var_4, val<int> var_5, val<int> var_6, val<unsigned int> var_11, val<bool> var_12, val<short> var_14, val<bool> var_16, val<unsigned short> var_17, val<int> zero, val<bool*> var_19, val<long long int*> var_20, val<long long int*> var_21) {
    *var_19 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) max((((/* implicit */val<unsigned long long int>) var_3)), (min((((/* implicit */val<unsigned long long int>) (val<bool>)1)), (16009860457569831075ULL)))))) ? (max((((/* implicit */val<unsigned long long int>) ((val<unsigned short>) var_3))), (((((/* implicit */val<unsigned long long int>) var_6)) + (var_4))))) : (((/* implicit */val<unsigned long long int>) (+(((var_5) + (((/* implicit */val<int>) var_12)))))))));
    *var_20 = ((/* implicit */val<long long int>) (!(((/* implicit */val<bool>) max((((/* implicit */val<unsigned char>) (val<bool>)1)), ((val<unsigned char>)144))))));
    *var_21 = ((/* implicit */val<long long int>) min((((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_11)) ? (var_6) : (((/* implicit */val<int>) var_14))))) ? (((/* implicit */val<unsigned long long int>) (+(((/* implicit */val<int>) var_16))))) : (((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_17))) + (var_4))))), (((/* implicit */val<unsigned long long int>) ((var_5) == (((/* implicit */val<int>) max((var_0), (var_0)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)185;
int var_3 = -1365062148;
unsigned long long int var_4 = 17799698123108596506ULL;
int var_5 = 1964724074;
int var_6 = -781781540;
unsigned int var_11 = 2189890145U;
bool var_12 = (bool)0;
short var_14 = (short)6476;
bool var_16 = (bool)0;
unsigned short var_17 = (unsigned short)32945;
int zero = 0;
bool var_19 = (bool)1;
long long int var_20 = -218101739914649LL;
long long int var_21 = 3556803324104864520LL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (bool)1;
    value_mismatch |= var_20 != 0LL;
    value_mismatch |= var_21 != 0LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_4, var_5, var_6, var_11, var_12, var_14, var_16, var_17, zero, &var_19, &var_20, &var_21);
  checksum();
}
