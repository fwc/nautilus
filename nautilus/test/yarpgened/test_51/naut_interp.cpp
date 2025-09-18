/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 51
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=51
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
void test(val<long long int> var_0, val<bool> var_18, val<int> zero, val<unsigned int*> var_19, val<signed char*> var_20, val<long long int*> var_21) {
    *var_19 = 8126464U;
    if (((/* implicit */val<bool>) var_0))
    {
        *var_20 = ((/* implicit */val<signed char>) min((((/* implicit */val<unsigned short>) var_18)), ((val<unsigned short>)31838)));
        *var_21 = ((/* implicit */val<long long int>) (!(((/* implicit */val<bool>) 4286840832U))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4216658994478522356LL;
bool var_18 = (bool)1;
int zero = 0;
unsigned int var_19 = 34546907U;
signed char var_20 = (signed char)-124;
long long int var_21 = 1950676709725260395LL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 8126464U;
    value_mismatch |= var_20 != (signed char)1;
    value_mismatch |= var_21 != 0LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_18, zero, &var_19, &var_20, &var_21);
  checksum();
}
