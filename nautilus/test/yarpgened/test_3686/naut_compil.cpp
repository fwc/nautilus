/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3686
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3686
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
void test(val<unsigned long long int> var_1, val<bool> var_2, val<bool> var_5, val<int> zero, val<unsigned int*> var_10, val<unsigned int*> var_11, val<unsigned long long int*> var_12, val<unsigned char*> var_13) {
    *var_10 ^= 4294967279U;
    if (((/* implicit */val<bool>) var_1))
    {
        if (((/* implicit */val<bool>) min((4294967279U), (((/* implicit */val<unsigned int>) (val<unsigned char>)226)))))
        {
            *var_11 = ((/* implicit */val<unsigned int>) ((var_1) << (((/* implicit */val<int>) var_2))));
            *var_12 = ((/* implicit */val<unsigned long long int>) (-(41U)));
        }

        *var_13 = ((/* implicit */val<unsigned char>) var_5);
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 18339632519347751709ULL;
bool var_2 = (bool)1;
bool var_5 = (bool)1;
int zero = 0;
unsigned int var_10 = 2790583930U;
unsigned int var_11 = 3317301618U;
unsigned long long int var_12 = 14295129999632794333ULL;
unsigned char var_13 = (unsigned char)80;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 1504383381U;
    value_mismatch |= var_11 != 3050935866U;
    value_mismatch |= var_12 != 4294967255ULL;
    value_mismatch |= var_13 != (unsigned char)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_5, zero, &var_10, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
