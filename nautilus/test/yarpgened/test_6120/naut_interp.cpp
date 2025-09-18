/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6120
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6120
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
void test(val<unsigned char> var_2, val<short> var_3, val<int> var_9, val<unsigned long long int> var_10, val<short> var_11, val<bool> var_12, val<int> zero, val<signed char*> var_14, val<unsigned long long int*> var_15) {
    *var_14 = ((/* implicit */val<signed char>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<int>) var_12)) : (((/* implicit */val<int>) var_3))))) ? (((/* implicit */val<unsigned long long int>) ((val<int>) var_9))) : (max((((/* implicit */val<unsigned long long int>) (val<unsigned short>)13302)), (var_10))))))));
    *var_15 = ((/* implicit */val<unsigned long long int>) var_2);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)96;
short var_3 = (short)-16091;
int var_9 = -581095469;
unsigned long long int var_10 = 11481399713413648291ULL;
short var_11 = (short)6723;
bool var_12 = (bool)0;
int zero = 0;
signed char var_14 = (signed char)-57;
unsigned long long int var_15 = 4005548995264790756ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (signed char)0;
    value_mismatch |= var_15 != 96ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_9, var_10, var_11, var_12, zero, &var_14, &var_15);
  checksum();
}
