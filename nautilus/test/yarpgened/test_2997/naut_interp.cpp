/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2997
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2997
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
void test(val<long long int> var_0, val<signed char> var_5, val<int> var_8, val<short> var_9, val<unsigned long long int> var_10, val<unsigned int> var_11, val<signed char> var_12, val<unsigned char> var_13, val<unsigned long long int> var_15, val<unsigned int> var_16, val<short> var_17, val<long long int> var_19, val<int> zero, val<long long int*> var_20, val<signed char*> var_21, val<unsigned int*> var_22, val<unsigned char*> var_23, val<int*> var_24) {
    *var_20 = max(((~(max((var_0), (((/* implicit */val<long long int>) var_12)))))), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_12)) ? (((/* implicit */val<int>) ((((/* implicit */val<long long int>) 531904968)) > (var_0)))) : (((/* implicit */val<int>) ((((/* implicit */val<unsigned int>) var_8)) <= (var_11))))))));
    *var_21 = ((/* implicit */val<signed char>) ((val<int>) max((15292323008742152343ULL), (((/* implicit */val<unsigned long long int>) 1032192)))));
    *var_22 = ((/* implicit */val<unsigned int>) (!(((/* implicit */val<bool>) (val<unsigned short>)14))));
    *var_23 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) (+(1961765197)))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_17))) : (((val<unsigned int>) ((((/* implicit */val<int>) var_5)) < (((/* implicit */val<int>) var_13)))))));
    *var_24 = ((/* implicit */val<int>) max((((/* implicit */val<unsigned long long int>) max(((+(var_19))), (((/* implicit */val<long long int>) var_9))))), (max((((((/* implicit */val<bool>) var_16)) ? (((/* implicit */val<unsigned long long int>) 5940339213466547493LL)) : (var_15))), (max((var_10), (((/* implicit */val<unsigned long long int>) var_5))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3162184544117441198LL;
signed char var_5 = (signed char)-29;
int var_8 = 949238629;
short var_9 = (short)-4876;
unsigned long long int var_10 = 16172557600732363145ULL;
unsigned int var_11 = 1207338135U;
signed char var_12 = (signed char)113;
unsigned char var_13 = (unsigned char)169;
unsigned long long int var_15 = 6031600623773887322ULL;
unsigned int var_16 = 3400521616U;
short var_17 = (short)27945;
long long int var_19 = -47312089714632397LL;
int zero = 0;
long long int var_20 = 8206353398003652378LL;
signed char var_21 = (signed char)-110;
unsigned int var_22 = 3401737453U;
unsigned char var_23 = (unsigned char)31;
int var_24 = -556783911;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 1LL;
    value_mismatch |= var_21 != (signed char)-105;
    value_mismatch |= var_22 != 0U;
    value_mismatch |= var_23 != (unsigned char)41;
    value_mismatch |= var_24 != -29;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_5, var_8, var_9, var_10, var_11, var_12, var_13, var_15, var_16, var_17, var_19, zero, &var_20, &var_21, &var_22, &var_23, &var_24);
  checksum();
  assert(!value_mismatch);
}
