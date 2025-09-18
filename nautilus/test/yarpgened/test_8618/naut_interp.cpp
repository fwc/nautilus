/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8618
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8618
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
void test(val<int> var_12, val<unsigned int> var_13, val<int> zero, val<int*> var_18, val<unsigned int*> var_19) {
    *var_18 = var_12;
    *var_19 &= var_13;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_12 = -1751245348;
unsigned int var_13 = 2566482835U;
int zero = 0;
int var_18 = 1762993679;
unsigned int var_19 = 2780003800U;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != -1751245348;
    value_mismatch |= var_19 != 2159110544U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_12, var_13, zero, &var_18, &var_19);
  checksum();
}
