/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8706
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8706
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
void test(val<unsigned long long int> var_0, val<signed char> var_2, val<long long int> var_12, val<bool> var_14, val<unsigned int> var_15, val<int> zero, val<signed char*> var_18, val<unsigned long long int*> var_19, val<unsigned int*> var_20) {
    if (((/* implicit */val<bool>) ((max((min((((/* implicit */val<unsigned long long int>) (val<unsigned char>)255)), (7162679258200093909ULL))), (((/* implicit */val<unsigned long long int>) 2906319982976052604LL)))) & (((/* implicit */val<unsigned long long int>) var_15)))))
    {
        *var_18 ^= ((/* implicit */val<signed char>) ((val<unsigned int>) (+(var_12))));
        *var_19 = (+(((((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) (val<unsigned char>)6))))) | (min((((/* implicit */val<unsigned long long int>) var_14)), (var_0))))));
    }

    *var_20 = ((/* implicit */val<unsigned int>) var_2);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16520410738577396501ULL;
signed char var_2 = (signed char)-47;
long long int var_12 = -4054222921706443887LL;
bool var_14 = (bool)0;
unsigned int var_15 = 3205332268U;
int zero = 0;
signed char var_18 = (signed char)-74;
unsigned long long int var_19 = 7222771972352912358ULL;
unsigned int var_20 = 3201893597U;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (signed char)39;
    value_mismatch |= var_19 != 18446744073709551609ULL;
    value_mismatch |= var_20 != 4294967249U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_12, var_14, var_15, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
