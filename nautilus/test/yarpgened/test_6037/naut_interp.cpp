/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6037
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6037
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
void test(val<unsigned char> var_5, val<bool> var_8, val<signed char> var_9, val<signed char> var_13, val<int> zero, val<signed char*> var_15, val<signed char*> var_16) {
    *var_15 = var_13;
    *var_16 = ((/* implicit */val<signed char>) (((-(((/* implicit */val<int>) var_5)))) * ((+(((((/* implicit */val<int>) var_9)) / (((/* implicit */val<int>) var_8))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)225;
bool var_8 = (bool)1;
signed char var_9 = (signed char)52;
signed char var_13 = (signed char)37;
int zero = 0;
signed char var_15 = (signed char)65;
signed char var_16 = (signed char)-15;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (signed char)37;
    value_mismatch |= var_16 != (signed char)76;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_8, var_9, var_13, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
