/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2640
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2640
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
void test(val<unsigned char> var_0, val<int> var_3, val<signed char> var_11, val<int> zero, val<unsigned short*> var_16, val<long long int*> var_17, val<unsigned short*> var_18, val<bool*> var_19) {
    *var_16 = ((/* implicit */val<unsigned short>) (((~(((/* implicit */val<int>) var_0)))) - (var_3)));
    *var_17 = -3286427477393108LL;
    *var_18 = ((/* implicit */val<unsigned short>) var_11);
    *var_19 |= ((/* implicit */val<bool>) 18446744073709551615ULL);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)183;
int var_3 = 574647470;
signed char var_11 = (signed char)-19;
int zero = 0;
unsigned short var_16 = (unsigned short)35077;
long long int var_17 = 3792171311806306217LL;
unsigned short var_18 = (unsigned short)3864;
bool var_19 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned short)37530;
    value_mismatch |= var_17 != -3286427477393108LL;
    value_mismatch |= var_18 != (unsigned short)65517;
    value_mismatch |= var_19 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_11, zero, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
