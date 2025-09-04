/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6228
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6228
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
void test(val<signed char> var_4, val<unsigned char> var_5, val<unsigned char> var_6, val<signed char> var_11, val<unsigned short> var_14, val<int> zero, val<long long int*> var_16, val<unsigned int*> var_17) {
    *var_16 = ((/* implicit */val<long long int>) max((*var_16), (((/* implicit */val<long long int>) ((max((((((((/* implicit */val<int>) var_11)) + (2147483647))) >> (((((/* implicit */val<int>) var_6)) - (20))))), (((((/* implicit */val<int>) var_14)) / (((/* implicit */val<int>) var_4)))))) - (((/* implicit */val<int>) (val<unsigned short>)16)))))));
    *var_17 = ((/* implicit */val<unsigned int>) var_5);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)14;
unsigned char var_5 = (unsigned char)229;
unsigned char var_6 = (unsigned char)32;
signed char var_11 = (signed char)-42;
unsigned short var_14 = (unsigned short)31416;
int zero = 0;
long long int var_16 = 1012959348985955912LL;
unsigned int var_17 = 1464168365U;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 1012959348985955912LL;
    value_mismatch |= var_17 != 229U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_5, var_6, var_11, var_14, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
