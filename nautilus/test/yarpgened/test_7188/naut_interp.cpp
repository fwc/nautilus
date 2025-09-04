/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7188
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7188
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
void test(val<unsigned int> var_1, val<int> var_8, val<bool> var_19, val<int> zero, val<unsigned long long int*> var_20, val<long long int*> var_21, val<unsigned char*> var_22) {
    *var_20 = ((/* implicit */val<unsigned long long int>) var_1);
    *var_21 = ((/* implicit */val<long long int>) var_1);
    *var_22 = ((/* implicit */val<unsigned char>) max((var_19), ((!(((/* implicit */val<bool>) min((((/* implicit */val<int>) (val<unsigned char>)32)), (var_8))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2124713114U;
int var_8 = 285915442;
bool var_19 = (bool)0;
int zero = 0;
unsigned long long int var_20 = 5971517421530749567ULL;
long long int var_21 = 6032478232768757968LL;
unsigned char var_22 = (unsigned char)244;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 2124713114ULL;
    value_mismatch |= var_21 != 2124713114LL;
    value_mismatch |= var_22 != (unsigned char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_8, var_19, zero, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
