/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4989
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4989
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
void test(val<unsigned char> var_6, val<unsigned int> var_10, val<unsigned int> var_17, val<int> zero, val<unsigned long long int*> var_18, val<long long int*> var_19) {
    *var_18 *= ((/* implicit */val<unsigned long long int>) ((val<unsigned char>) max((((13534388136973573065ULL) / (6984391211990695748ULL))), (((/* implicit */val<unsigned long long int>) ((var_17) / (var_10)))))));
    *var_19 = ((/* implicit */val<long long int>) min((*var_19), (((/* implicit */val<long long int>) var_6))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)31;
unsigned int var_10 = 2645838155U;
unsigned int var_17 = 242710633U;
int zero = 0;
unsigned long long int var_18 = 9502424259392035744ULL;
long long int var_19 = 2031356704701094026LL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 9502424259392035744ULL;
    value_mismatch |= var_19 != 31LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_10, var_17, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
