/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5591
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5591
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
void test(val<bool> var_8, val<unsigned int> var_9, val<signed char> var_10, val<unsigned int> var_12, val<unsigned char> var_15, val<int> zero, val<unsigned int*> var_20, val<signed char*> var_21) {
    *var_20 = min(((+((-(var_12))))), (((var_8) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) min((var_15), (((/* implicit */val<unsigned char>) (val<bool>)1)))))) : (var_9))));
    *var_21 = ((/* implicit */val<signed char>) (-(((/* implicit */val<int>) ((val<signed char>) var_10)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_8 = (bool)0;
unsigned int var_9 = 430542235U;
signed char var_10 = (signed char)77;
unsigned int var_12 = 3788810830U;
unsigned char var_15 = (unsigned char)252;
int zero = 0;
unsigned int var_20 = 2509205392U;
signed char var_21 = (signed char)-101;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 430542235U;
    value_mismatch |= var_21 != (signed char)-77;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, var_9, var_10, var_12, var_15, zero, &var_20, &var_21);
  checksum();
}
