/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 715
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=715
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
void test(val<signed char> var_4, val<int> var_5, val<unsigned short> var_7, val<unsigned short> var_11, val<signed char> var_12, val<int> zero, val<unsigned long long int*> var_16, val<long long int*> var_17) {
    *var_16 = ((/* implicit */val<unsigned long long int>) ((((((/* implicit */val<int>) var_11)) != (((/* implicit */val<int>) var_7)))) && (((/* implicit */val<bool>) min((((((/* implicit */val<int>) var_7)) % (((/* implicit */val<int>) var_7)))), (((/* implicit */val<int>) var_11)))))));
    *var_17 = ((val<long long int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<int>) var_12)) : (((/* implicit */val<int>) var_4)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)91;
int var_5 = -100460034;
unsigned short var_7 = (unsigned short)61082;
unsigned short var_11 = (unsigned short)43189;
signed char var_12 = (signed char)70;
int zero = 0;
unsigned long long int var_16 = 2836660196495659002ULL;
long long int var_17 = 6249844487462778279LL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 0ULL;
    value_mismatch |= var_17 != 0LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_5, var_7, var_11, var_12, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
