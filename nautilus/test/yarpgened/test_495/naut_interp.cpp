/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 495
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=495
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
void test(val<int> var_9, val<int> var_12, val<unsigned long long int> var_14, val<int> var_17, val<int> zero, val<int*> var_18, val<int*> var_19) {
    *var_18 = ((/* implicit */val<int>) max((*var_18), (((/* implicit */val<int>) max((((/* implicit */val<unsigned long long int>) ((((((((/* implicit */val<bool>) -321272250)) ? (var_9) : (var_12))) + (2147483647))) << (((((val<int>) var_12)) - (1290402873)))))), (var_14))))));
    *var_19 = var_17;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_9 = -874293057;
int var_12 = 1290402873;
unsigned long long int var_14 = 15866627491545207137ULL;
int var_17 = -1431981618;
int zero = 0;
int var_18 = -418094355;
int var_19 = 1739005531;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 2030031201;
    value_mismatch |= var_19 != -1431981618;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_9, var_12, var_14, var_17, zero, &var_18, &var_19);
  checksum();
}
