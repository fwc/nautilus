/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5474
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5474
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
void test(val<unsigned long long int> var_0, val<unsigned long long int> var_2, val<unsigned long long int> var_3, val<signed char> var_5, val<unsigned long long int> var_6, val<signed char> var_7, val<unsigned long long int> var_9, val<signed char> var_10, val<int> zero, val<unsigned long long int*> var_11, val<unsigned long long int*> var_12, val<unsigned short*> var_13, val<unsigned long long int*> var_14) {
    *var_11 = ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_0)) ? (var_6) : (((val<unsigned long long int>) var_7))))) ? (((val<unsigned long long int>) ((var_3) % (var_2)))) : (min((((((/* implicit */val<bool>) 17810877648120964460ULL)) ? (2563406038536247576ULL) : (var_0))), (((((/* implicit */val<bool>) var_5)) ? (var_9) : (var_2))))));
    if (((/* implicit */val<bool>) ((val<long long int>) max((635866425588587156ULL), (((/* implicit */val<unsigned long long int>) ((val<long long int>) var_0)))))))
    {
        *var_12 = max((((val<unsigned long long int>) (+(0ULL)))), (var_9));
        *var_13 = ((/* implicit */val<unsigned short>) min((*var_13), (((/* implicit */val<unsigned short>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_10))) <= (var_3))))));
    }

    *var_14 = 5165881888786653976ULL;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16951167697855944543ULL;
unsigned long long int var_2 = 1927299275980622213ULL;
unsigned long long int var_3 = 8506475703410857662ULL;
signed char var_5 = (signed char)-109;
unsigned long long int var_6 = 10407666037534802798ULL;
signed char var_7 = (signed char)-92;
unsigned long long int var_9 = 9854144784972489736ULL;
signed char var_10 = (signed char)-93;
int zero = 0;
unsigned long long int var_11 = 6158030663053107868ULL;
unsigned long long int var_12 = 10870393994219908293ULL;
unsigned short var_13 = (unsigned short)9909;
unsigned long long int var_14 = 5096416448230461758ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 797278599488368810ULL;
    value_mismatch |= var_12 != 9854144784972489736ULL;
    value_mismatch |= var_13 != (unsigned short)0;
    value_mismatch |= var_14 != 5165881888786653976ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_5, var_6, var_7, var_9, var_10, zero, &var_11, &var_12, &var_13, &var_14);
  checksum();
}
