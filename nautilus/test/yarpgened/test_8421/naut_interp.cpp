/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8421
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8421
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
void test(val<short> var_0, val<unsigned int> var_2, val<unsigned long long int> var_3, val<unsigned int> var_4, val<bool> var_8, val<signed char> var_9, val<unsigned long long int> var_12, val<int> zero, val<int*> var_13, val<long long int*> var_14, val<long long int*> var_15) {
    if (((/* implicit */val<bool>) var_12))
    {
        *var_13 &= ((/* implicit */val<int>) ((((((/* implicit */val<bool>) min((13385184722951739611ULL), (((/* implicit */val<unsigned long long int>) var_2))))) ? (var_3) : (((/* implicit */val<unsigned long long int>) ((val<int>) var_9))))) * (min((var_12), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) (val<bool>)0)) / (((/* implicit */val<int>) var_8)))))))));
        *var_14 = ((/* implicit */val<long long int>) var_4);
    }

    *var_15 = ((/* implicit */val<long long int>) var_0);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16070;
unsigned int var_2 = 3037837500U;
unsigned long long int var_3 = 1875641409636476372ULL;
unsigned int var_4 = 346094405U;
bool var_8 = (bool)1;
signed char var_9 = (signed char)-14;
unsigned long long int var_12 = 10214546104757518005ULL;
int zero = 0;
int var_13 = -355892352;
long long int var_14 = -7183976524800126215LL;
long long int var_15 = -1851889411013490410LL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 0;
    value_mismatch |= var_14 != 346094405LL;
    value_mismatch |= var_15 != 16070LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_8, var_9, var_12, zero, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
