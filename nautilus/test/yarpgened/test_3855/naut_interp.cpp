/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3855
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3855
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
void test(val<bool> var_3, val<unsigned int> var_5, val<short> var_8, val<unsigned char> var_11, val<int> zero, val<long long int*> var_13, val<unsigned char*> var_14) {
    *var_13 = ((/* implicit */val<long long int>) (~(((((/* implicit */val<bool>) min((((/* implicit */val<unsigned char>) var_3)), (var_11)))) ? (min((((/* implicit */val<unsigned long long int>) var_8)), (15934485463734123274ULL))) : (2512258609975428341ULL)))));
    *var_14 = ((/* implicit */val<unsigned char>) (~(var_5)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_3 = (bool)1;
unsigned int var_5 = 678305726U;
short var_8 = (short)33;
unsigned char var_11 = (unsigned char)243;
int zero = 0;
long long int var_13 = -5190735460993766710LL;
unsigned char var_14 = (unsigned char)38;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != -34LL;
    value_mismatch |= var_14 != (unsigned char)65;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_5, var_8, var_11, zero, &var_13, &var_14);
  checksum();
}
