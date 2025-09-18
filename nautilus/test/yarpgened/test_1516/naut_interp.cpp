/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1516
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1516
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
void test(val<unsigned short> var_1, val<unsigned long long int> var_2, val<unsigned char> var_3, val<short> var_5, val<int> var_10, val<int> zero, val<unsigned long long int*> var_11, val<unsigned char*> var_12) {
    *var_11 ^= ((/* implicit */val<unsigned long long int>) (+(((/* implicit */val<int>) var_3))));
    *var_12 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) var_1)) ? (var_2) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) ((val<unsigned char>) var_5))) % (((/* implicit */val<int>) ((val<unsigned char>) var_10))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)38976;
unsigned long long int var_2 = 5048276463954074471ULL;
unsigned char var_3 = (unsigned char)73;
short var_5 = (short)-9381;
int var_10 = -2134380801;
int zero = 0;
unsigned long long int var_11 = 14199609418718435258ULL;
unsigned char var_12 = (unsigned char)17;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 14199609418718435315ULL;
    value_mismatch |= var_12 != (unsigned char)103;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_5, var_10, zero, &var_11, &var_12);
  checksum();
}
