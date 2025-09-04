/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 541
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=541
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
void test(val<unsigned long long int> var_2, val<unsigned long long int> var_3, val<unsigned int> var_10, val<unsigned char> var_13, val<int> zero, val<bool*> var_14, val<short*> var_15) {
    *var_14 = ((/* implicit */val<bool>) (~(((((/* implicit */val<bool>) var_10)) ? (max((var_3), (((/* implicit */val<unsigned long long int>) var_13)))) : (((/* implicit */val<unsigned long long int>) 1314892565U))))));
    *var_15 = ((/* implicit */val<short>) var_2);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17382810110907885616ULL;
unsigned long long int var_3 = 12474657730766876657ULL;
unsigned int var_10 = 1840396438U;
unsigned char var_13 = (unsigned char)88;
int zero = 0;
bool var_14 = (bool)0;
short var_15 = (short)32115;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (bool)1;
    value_mismatch |= var_15 != (short)-22480;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_10, var_13, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
