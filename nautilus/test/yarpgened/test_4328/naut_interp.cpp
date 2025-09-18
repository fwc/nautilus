/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4328
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4328
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
void test(val<int> var_2, val<int> var_11, val<int> zero, val<long long int*> var_16, val<short*> var_17) {
    *var_16 = ((/* implicit */val<long long int>) var_2);
    *var_17 = ((/* implicit */val<short>) (+(var_11)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -40874208;
int var_11 = -2066905224;
int zero = 0;
long long int var_16 = 6472781356993626252LL;
short var_17 = (short)-30420;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != -40874208LL;
    value_mismatch |= var_17 != (short)-30856;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_11, zero, &var_16, &var_17);
  checksum();
}
