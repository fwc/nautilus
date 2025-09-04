/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3862
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3862
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
void test(val<bool> var_0, val<unsigned long long int> var_1, val<bool> var_2, val<unsigned char> var_7, val<int> var_9, val<unsigned char> var_14, val<int> zero, val<unsigned char*> var_17, val<unsigned char*> var_18) {
    *var_17 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<int>) ((val<unsigned char>) ((val<signed char>) var_0)))) : (((((val<bool>) var_1)) ? (((var_9) | (((/* implicit */val<int>) var_2)))) : (((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) var_14))))))));
    *var_18 = ((/* implicit */val<unsigned char>) var_9);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
unsigned long long int var_1 = 8353683872670737123ULL;
bool var_2 = (bool)1;
unsigned char var_7 = (unsigned char)88;
int var_9 = 135606652;
unsigned char var_14 = (unsigned char)163;
int zero = 0;
unsigned char var_17 = (unsigned char)48;
unsigned char var_18 = (unsigned char)230;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (unsigned char)0;
    value_mismatch |= var_18 != (unsigned char)124;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_7, var_9, var_14, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
