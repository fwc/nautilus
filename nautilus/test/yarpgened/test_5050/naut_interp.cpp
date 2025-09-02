/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5050
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5050
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
void test(val<bool> var_0, val<bool> var_2, val<unsigned char> var_6, val<int> var_7, val<long long int> var_9, val<int> zero, val<bool*> var_12, val<int*> var_13, val<bool*> var_14, val<long long int*> var_15, val<long long int*> var_16, val<long long int*> var_17) {
    if (var_0)
    {
        *var_12 &= ((/* implicit */val<bool>) var_9);
        *var_13 = ((/* implicit */val<int>) var_6);
    }

    if (((/* implicit */val<bool>) max((((val<long long int>) 3475101447U)), (((/* implicit */val<long long int>) ((val<unsigned short>) ((((/* implicit */val<bool>) (val<short>)3)) ? (((/* implicit */val<int>) var_0)) : (((/* implicit */val<int>) var_2)))))))))
    {
        *var_14 = ((/* implicit */val<bool>) max((var_7), (((/* implicit */val<int>) ((val<unsigned short>) 819865843U)))));
        *var_15 = var_9;
        *var_16 = var_9;
        *var_17 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) 3475101447U)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) max((var_6), (((/* implicit */val<unsigned char>) var_2))))))))) : (max(((~(0ULL))), (((/* implicit */val<unsigned long long int>) var_0))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
bool var_2 = (bool)1;
unsigned char var_6 = (unsigned char)126;
int var_7 = -1984528181;
long long int var_9 = 4491045443061368672LL;
int zero = 0;
bool var_12 = (bool)1;
int var_13 = -1834319985;
bool var_14 = (bool)0;
long long int var_15 = -2475561887871986508LL;
long long int var_16 = 1693995571709630933LL;
long long int var_17 = -6411496295754508258LL;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (bool)1;
    value_mismatch |= var_13 != -1834319985;
    value_mismatch |= var_14 != (bool)1;
    value_mismatch |= var_15 != 4491045443061368672LL;
    value_mismatch |= var_16 != 4491045443061368672LL;
    value_mismatch |= var_17 != 0LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_6, var_7, var_9, zero, &var_12, &var_13, &var_14, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
