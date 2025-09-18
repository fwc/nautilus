/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4209
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4209
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
void test(val<unsigned char> var_6, val<unsigned short> var_8, val<int> zero, val<short*> var_12, val<int*> var_13) {
    *var_12 = ((/* implicit */val<short>) max((0ULL), (((/* implicit */val<unsigned long long int>) max((var_6), (((/* implicit */val<unsigned char>) (!(((/* implicit */val<bool>) var_8))))))))));
    *var_13 = ((/* implicit */val<int>) min((-488310282932306144LL), (((/* implicit */val<long long int>) (val<signed char>)63))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)228;
unsigned short var_8 = (unsigned short)16549;
int zero = 0;
short var_12 = (short)12773;
int var_13 = 767178806;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (short)228;
    value_mismatch |= var_13 != -2052702432;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_8, zero, &var_12, &var_13);
  checksum();
}
