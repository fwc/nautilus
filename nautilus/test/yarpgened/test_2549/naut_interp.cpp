/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2549
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2549
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
void test(val<signed char> var_1, val<unsigned int> var_3, val<unsigned long long int> var_7, val<unsigned int> var_13, val<signed char> var_14, val<unsigned long long int> var_17, val<int> zero, val<unsigned int*> var_19, val<signed char*> var_20, val<long long int*> var_21, val<unsigned short*> var_22) {
    *var_19 = ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_14))) - ((((-(var_3))) >> (((min((((/* implicit */val<unsigned long long int>) 196616691U)), (var_17))) - (196616664ULL))))));
    *var_20 = ((/* implicit */val<signed char>) (-(var_13)));
    *var_21 = ((/* implicit */val<long long int>) var_1);
    *var_22 = ((/* implicit */val<unsigned short>) max((min((((/* implicit */val<unsigned long long int>) 3899899197U)), ((~(var_7))))), (((/* implicit */val<unsigned long long int>) (~(-1717667878936660501LL))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)90;
unsigned int var_3 = 75653395U;
unsigned long long int var_7 = 15867705211053683141ULL;
unsigned int var_13 = 3843750761U;
signed char var_14 = (signed char)-98;
unsigned long long int var_17 = 4264113693861772550ULL;
int zero = 0;
unsigned int var_19 = 1975541534U;
signed char var_20 = (signed char)14;
long long int var_21 = -7040727628614830483LL;
unsigned short var_22 = (unsigned short)44552;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 4294967167U;
    value_mismatch |= var_20 != (signed char)-105;
    value_mismatch |= var_21 != 90LL;
    value_mismatch |= var_22 != (unsigned short)18964;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_7, var_13, var_14, var_17, zero, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
