/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5961
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5961
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
void test(val<unsigned char> var_1, val<bool> var_2, val<long long int> var_5, val<signed char> var_10, val<int> var_11, val<bool> var_14, val<int> zero, val<int*> var_17, val<bool*> var_18, val<unsigned int*> var_19) {
    *var_17 = ((/* implicit */val<int>) var_5);
    *var_18 = ((/* implicit */val<bool>) ((((/* implicit */val<int>) var_2)) * (((((/* implicit */val<bool>) var_10)) ? (((((/* implicit */val<int>) var_1)) / (var_11))) : (((/* implicit */val<int>) var_1))))));
    *var_19 = ((/* implicit */val<unsigned int>) var_14);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)191;
bool var_2 = (bool)1;
long long int var_5 = 6179458362287952547LL;
signed char var_10 = (signed char)13;
int var_11 = -942157237;
bool var_14 = (bool)0;
int zero = 0;
int var_17 = 1450950348;
bool var_18 = (bool)1;
unsigned int var_19 = 1059876111U;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != -327314781;
    value_mismatch |= var_18 != (bool)0;
    value_mismatch |= var_19 != 0U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_5, var_10, var_11, var_14, zero, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
