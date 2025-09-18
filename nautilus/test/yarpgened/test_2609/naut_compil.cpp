/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2609
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2609
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
void test(val<signed char> var_0, val<int> var_1, val<int> var_2, val<short> var_7, val<unsigned int> var_11, val<unsigned int> var_12, val<long long int> var_13, val<int> var_14, val<unsigned long long int> var_17, val<int> zero, val<bool*> var_19, val<short*> var_20, val<signed char*> var_21, val<unsigned long long int*> var_22) {
    *var_19 = ((/* implicit */val<bool>) min((((((/* implicit */val<bool>) min((((/* implicit */val<unsigned int>) var_1)), (var_11)))) ? (((/* implicit */val<unsigned long long int>) (+(-5LL)))) : (((((/* implicit */val<unsigned long long int>) var_1)) | (var_17))))), (((val<unsigned long long int>) min((((/* implicit */val<int>) var_7)), (var_2))))));
    *var_20 = ((/* implicit */val<short>) max((*var_20), (((/* implicit */val<short>) (~((~(min((var_13), (((/* implicit */val<long long int>) var_14)))))))))));
    *var_21 = ((/* implicit */val<signed char>) min((*var_21), (((/* implicit */val<signed char>) min((((((/* implicit */val<bool>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_0))) ^ (4294967269U)))) ? (var_12) : (4294967277U))), (((/* implicit */val<unsigned int>) ((val<int>) min((var_14), (var_1))))))))));
    *var_22 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) min((((/* implicit */val<unsigned int>) 327562999)), (((val<unsigned int>) (val<unsigned short>)40626))))) ? ((~((~(327562999))))) : (var_14)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)72;
int var_1 = -340629144;
int var_2 = -1203981953;
short var_7 = (short)13565;
unsigned int var_11 = 1196870389U;
unsigned int var_12 = 3115663843U;
long long int var_13 = 4176219379187917992LL;
int var_14 = 1614642166;
unsigned long long int var_17 = 8114256917382041708ULL;
int zero = 0;
bool var_19 = (bool)0;
short var_20 = (short)22020;
signed char var_21 = (signed char)-29;
unsigned long long int var_22 = 3155642546834000927ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (bool)1;
    value_mismatch |= var_20 != (short)31734;
    value_mismatch |= var_21 != (signed char)-29;
    value_mismatch |= var_22 != 327562999ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_7, var_11, var_12, var_13, var_14, var_17, zero, &var_19, &var_20, &var_21, &var_22);
  checksum();
}
