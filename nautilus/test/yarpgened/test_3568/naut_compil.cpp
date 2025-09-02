/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3568
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3568
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
void test(val<unsigned long long int> var_0, val<unsigned long long int> var_2, val<signed char> var_3, val<unsigned long long int> var_4, val<unsigned long long int> var_5, val<unsigned long long int> var_6, val<unsigned long long int> var_7, val<unsigned long long int> var_9, val<int> zero, val<signed char*> var_10, val<unsigned long long int*> var_11, val<signed char*> var_12, val<unsigned long long int*> var_13) {
    *var_10 = ((/* implicit */val<signed char>) max((max((((var_2) | (var_5))), (((((/* implicit */val<bool>) var_4)) ? (var_0) : (var_9))))), (min((((/* implicit */val<unsigned long long int>) ((val<signed char>) var_7))), (min((var_0), (var_0)))))));
    if (((/* implicit */val<bool>) (+(((val<unsigned long long int>) (+(((/* implicit */val<int>) var_3))))))))
    {
        *var_11 ^= ((((/* implicit */val<bool>) min((((((/* implicit */val<bool>) 800977824571922336ULL)) ? (17645766249137629279ULL) : (7730189864757619359ULL))), (max((var_5), (var_6)))))) ? ((~(((((/* implicit */val<bool>) 17645766249137629269ULL)) ? (17645766249137629275ULL) : (var_4))))) : (((max((var_5), (17645766249137629280ULL))) << (((min((6238257109300506029ULL), (var_2))) - (6238257109300506022ULL))))));
        *var_12 = ((/* implicit */val<signed char>) min((*var_12), (((/* implicit */val<signed char>) ((val<unsigned long long int>) ((800977824571922336ULL) - (6774277747754177739ULL)))))));
    }

    *var_13 = ((((/* implicit */val<bool>) 0ULL)) ? (800977824571922340ULL) : (16830940067975586220ULL));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11606648870574385201ULL;
unsigned long long int var_2 = 13499238339244468645ULL;
signed char var_3 = (signed char)12;
unsigned long long int var_4 = 12991782490639508252ULL;
unsigned long long int var_5 = 4639456834557373209ULL;
unsigned long long int var_6 = 3486875729819523960ULL;
unsigned long long int var_7 = 716438897992621793ULL;
unsigned long long int var_9 = 12337292813575315365ULL;
int zero = 0;
signed char var_10 = (signed char)-15;
unsigned long long int var_11 = 3055209417377682481ULL;
signed char var_12 = (signed char)117;
unsigned long long int var_13 = 2603285575936634302ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (signed char)-67;
    value_mismatch |= var_11 != 2412783508761772949ULL;
    value_mismatch |= var_12 != (signed char)-43;
    value_mismatch |= var_13 != 16830940067975586220ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_5, var_6, var_7, var_9, zero, &var_10, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
