/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1601
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1601
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
void test(val<unsigned int> var_1, val<bool> var_3, val<int> var_4, val<unsigned char> var_5, val<bool> var_8, val<unsigned long long int> var_11, val<int> zero, val<int*> var_12, val<bool*> var_13, val<unsigned char*> var_14) {
    *var_12 = ((/* implicit */val<int>) var_5);
    *var_13 = ((/* implicit */val<bool>) (~(max((((/* implicit */val<unsigned int>) (val<signed char>)-112)), (((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<unsigned int>) var_4)) : (var_1)))))));
    *var_14 &= ((/* implicit */val<unsigned char>) ((((/* implicit */val<int>) var_8)) > (((/* implicit */val<int>) ((var_4) >= (((var_3) ? (((/* implicit */val<int>) (val<unsigned char>)149)) : (((/* implicit */val<int>) var_8)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 758841543U;
bool var_3 = (bool)1;
int var_4 = 655070895;
unsigned char var_5 = (unsigned char)137;
bool var_8 = (bool)1;
unsigned long long int var_11 = 4757616266037083240ULL;
int zero = 0;
int var_12 = 1483546439;
bool var_13 = (bool)1;
unsigned char var_14 = (unsigned char)192;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 137;
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != (unsigned char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_4, var_5, var_8, var_11, zero, &var_12, &var_13, &var_14);
  checksum();
}
