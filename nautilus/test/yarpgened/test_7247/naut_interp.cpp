/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7247
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7247
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
void test(val<unsigned char> var_0, val<unsigned long long int> var_9, val<int> zero, val<bool*> var_20, val<long long int*> var_21) {
    *var_20 = ((/* implicit */val<bool>) ((var_9) >> (((((/* implicit */val<int>) min((((/* implicit */val<short>) (val<signed char>)-1)), ((val<short>)-20044)))) + (20047)))));
    *var_21 ^= ((/* implicit */val<long long int>) (!(((/* implicit */val<bool>) ((val<unsigned char>) ((6388733586882157908LL) < (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_0)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)73;
unsigned long long int var_9 = 15903028371314369359ULL;
int zero = 0;
bool var_20 = (bool)0;
long long int var_21 = -8548188479914937935LL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (bool)1;
    value_mismatch |= var_21 != -8548188479914937936LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_9, zero, &var_20, &var_21);
  checksum();
}
