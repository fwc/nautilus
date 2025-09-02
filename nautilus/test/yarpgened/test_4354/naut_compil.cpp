/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4354
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4354
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
void test(val<unsigned long long int> var_1, val<unsigned long long int> var_5, val<unsigned int> var_9, val<unsigned int> var_13, val<int> zero, val<unsigned char*> var_15, val<unsigned int*> var_16, val<signed char*> var_17) {
    *var_15 = ((/* implicit */val<unsigned char>) min((*var_15), (((/* implicit */val<unsigned char>) (-(((((/* implicit */val<unsigned long long int>) ((var_9) * (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned char>)75)))))) / (var_1))))))));
    *var_16 = ((/* implicit */val<unsigned int>) (((!(((/* implicit */val<bool>) (val<unsigned char>)71)))) ? (((/* implicit */val<unsigned long long int>) (~(-850572492)))) : (var_5)));
    *var_17 = ((/* implicit */val<signed char>) (~(max((((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) 0ULL)) ? (850572493) : (((/* implicit */val<int>) (val<bool>)1))))), (var_13)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 18215640856316805715ULL;
unsigned long long int var_5 = 819597633146366374ULL;
unsigned int var_9 = 2380657616U;
unsigned int var_13 = 1955736249U;
int zero = 0;
unsigned char var_15 = (unsigned char)80;
unsigned int var_16 = 847891792U;
signed char var_17 = (signed char)28;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned char)0;
    value_mismatch |= var_16 != 1987094950U;
    value_mismatch |= var_17 != (signed char)70;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_5, var_9, var_13, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
