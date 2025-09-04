/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2869
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2869
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>
#ifndef USE_COMPILATION
#define USE_COMPILATION true
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
void test(val<short> var_0, val<int> var_7, val<int> zero, val<unsigned char*> var_11, val<int*> var_12) {
    *var_11 += ((/* implicit */val<unsigned char>) (-((-(16437690416534956929ULL)))));
    *var_12 += ((((/* implicit */val<bool>) (val<unsigned short>)65528)) ? (var_7) : (((/* implicit */val<int>) ((val<signed char>) ((((/* implicit */val<bool>) (val<unsigned short>)65528)) ? (var_7) : (((/* implicit */val<int>) var_0)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)1810;
int var_7 = -1046244480;
int zero = 0;
unsigned char var_11 = (unsigned char)233;
int var_12 = 2047828417;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (unsigned char)106;
    value_mismatch |= var_12 != 1001583937;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_7, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
