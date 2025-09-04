/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 175
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=175
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
void test(val<int> var_0, val<unsigned int> var_5, val<unsigned long long int> var_8, val<int> zero, val<signed char*> var_19, val<unsigned long long int*> var_20) {
    *var_19 = ((/* implicit */val<signed char>) var_8);
    *var_20 ^= max((max((((/* implicit */val<unsigned long long int>) var_5)), ((-(5120602860830358341ULL))))), (((/* implicit */val<unsigned long long int>) var_0)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 391364672;
unsigned int var_5 = 3456931538U;
unsigned long long int var_8 = 1731761895032180390ULL;
int zero = 0;
signed char var_19 = (signed char)-49;
unsigned long long int var_20 = 7894079096884871574ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (signed char)-90;
    value_mismatch |= var_20 != 15376012370991334701ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_5, var_8, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
