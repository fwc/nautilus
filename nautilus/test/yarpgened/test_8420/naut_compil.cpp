/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8420
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8420
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
void test(val<long long int> var_1, val<unsigned char> var_4, val<unsigned int> var_6, val<unsigned int> var_10, val<int> zero, val<signed char*> var_15, val<unsigned long long int*> var_16, val<bool*> var_17) {
    *var_15 = ((/* implicit */val<signed char>) min((*var_15), (((/* implicit */val<signed char>) (val<unsigned char>)139))));
    if (((/* implicit */val<bool>) ((((/* implicit */val<unsigned long long int>) min((((/* implicit */val<long long int>) ((val<bool>) -3920333108126067566LL))), (var_1)))) ^ (1176063065653983341ULL))))
    {
        *var_16 = ((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) (-(((((/* implicit */val<bool>) var_4)) ? (var_6) : (var_10))))))));
        *var_17 = ((/* implicit */val<bool>) max((*var_17), (((/* implicit */val<bool>) (val<signed char>)12))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7442057040676176106LL;
unsigned char var_4 = (unsigned char)153;
unsigned int var_6 = 2756471781U;
unsigned int var_10 = 1858422364U;
int zero = 0;
signed char var_15 = (signed char)-63;
unsigned long long int var_16 = 11595123024421332492ULL;
bool var_17 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (signed char)-117;
    value_mismatch |= var_16 != 0ULL;
    value_mismatch |= var_17 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_6, var_10, zero, &var_15, &var_16, &var_17);
  checksum();
}
