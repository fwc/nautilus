/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6994
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6994
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
void test(val<bool> var_9, val<int> zero, val<unsigned long long int*> var_19, val<unsigned char*> var_20, val<unsigned long long int*> var_21) {
    if (((/* implicit */val<bool>) ((min((max((((/* implicit */val<unsigned long long int>) (val<bool>)1)), (17773697961979151961ULL))), (17179869183ULL))) >> (((/* implicit */val<int>) var_9)))))
    {
        *var_19 = ((/* implicit */val<unsigned long long int>) (val<bool>)1);
        *var_20 = ((/* implicit */val<unsigned char>) ((val<bool>) 11899651353398856066ULL));
    }

    *var_21 = ((/* implicit */val<unsigned long long int>) 1420210270);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_9 = (bool)0;
int zero = 0;
unsigned long long int var_19 = 14195349222954272407ULL;
unsigned char var_20 = (unsigned char)207;
unsigned long long int var_21 = 18046369453509293903ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 1ULL;
    value_mismatch |= var_20 != (unsigned char)1;
    value_mismatch |= var_21 != 1420210270ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_9, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
