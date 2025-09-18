/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 491
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=491
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
void test(val<unsigned char> var_0, val<unsigned char> var_6, val<unsigned long long int> var_8, val<short> var_10, val<int> zero, val<unsigned long long int*> var_11, val<unsigned long long int*> var_12, val<short*> var_13) {
    if (((/* implicit */val<bool>) var_8))
    {
        *var_11 = ((/* implicit */val<unsigned long long int>) ((7083568500043743442ULL) < (7083568500043743442ULL)));
        *var_12 = ((/* implicit */val<unsigned long long int>) var_10);
    }

    *var_13 = ((/* implicit */val<short>) min((*var_13), (((/* implicit */val<short>) ((((/* implicit */val<int>) var_6)) - (((/* implicit */val<int>) var_0)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)163;
unsigned char var_6 = (unsigned char)176;
unsigned long long int var_8 = 7104328889175985784ULL;
short var_10 = (short)9925;
int zero = 0;
unsigned long long int var_11 = 10975463589546942505ULL;
unsigned long long int var_12 = 7134579714882658271ULL;
short var_13 = (short)355;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 0ULL;
    value_mismatch |= var_12 != 9925ULL;
    value_mismatch |= var_13 != (short)13;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_6, var_8, var_10, zero, &var_11, &var_12, &var_13);
  checksum();
}
