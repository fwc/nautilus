/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6873
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6873
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
void test(val<long long int> var_0, val<short> var_8, val<unsigned long long int> var_10, val<int> zero, val<long long int*> var_11, val<unsigned int*> var_12, val<signed char*> var_13) {
    *var_11 = ((/* implicit */val<long long int>) (+(((/* implicit */val<int>) var_8))));
    if (((/* implicit */val<bool>) -1LL))
    {
        *var_12 = ((/* implicit */val<unsigned int>) min((*var_12), (((/* implicit */val<unsigned int>) var_0))));
        *var_13 = ((/* implicit */val<signed char>) max((*var_13), (((/* implicit */val<signed char>) var_10))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7564278016613574147LL;
short var_8 = (short)-4545;
unsigned long long int var_10 = 13184620862962084402ULL;
int zero = 0;
long long int var_11 = -1252510144913151638LL;
unsigned int var_12 = 4217482781U;
signed char var_13 = (signed char)-35;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != -4545LL;
    value_mismatch |= var_12 != 1653368323U;
    value_mismatch |= var_13 != (signed char)50;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_8, var_10, zero, &var_11, &var_12, &var_13);
  checksum();
}
