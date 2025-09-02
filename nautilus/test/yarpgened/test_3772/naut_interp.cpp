/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3772
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3772
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
void test(val<unsigned int> var_0, val<unsigned int> var_2, val<long long int> var_5, val<unsigned short> var_6, val<unsigned long long int> var_9, val<int> zero, val<unsigned int*> var_11, val<int*> var_12) {
    *var_11 = min((((/* implicit */val<unsigned int>) var_6)), ((+(var_2))));
    *var_12 = ((/* implicit */val<int>) (!(((/* implicit */val<bool>) max((((((/* implicit */val<bool>) 0ULL)) ? (((/* implicit */val<unsigned long long int>) var_2)) : (var_9))), (((/* implicit */val<unsigned long long int>) min((((/* implicit */val<long long int>) var_0)), (var_5)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 926300045U;
unsigned int var_2 = 3520222896U;
long long int var_5 = -6217351656940088573LL;
unsigned short var_6 = (unsigned short)32835;
unsigned long long int var_9 = 11732377171717772424ULL;
int zero = 0;
unsigned int var_11 = 1467716162U;
int var_12 = -1496460792;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 32835U;
    value_mismatch |= var_12 != 0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_5, var_6, var_9, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
