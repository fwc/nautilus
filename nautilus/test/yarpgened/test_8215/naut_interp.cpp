/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8215
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8215
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
void test(val<signed char> var_1, val<int> var_2, val<unsigned char> var_10, val<int> zero, val<unsigned char*> var_13, val<unsigned int*> var_14) {
    *var_13 = ((/* implicit */val<unsigned char>) max((var_2), (((/* implicit */val<int>) ((((/* implicit */val<bool>) max((2959851276U), (((/* implicit */val<unsigned int>) var_1))))) && (((/* implicit */val<bool>) 979551044)))))));
    *var_14 = ((/* implicit */val<unsigned int>) max((*var_14), (((/* implicit */val<unsigned int>) min((max((max((((/* implicit */val<long long int>) (val<unsigned short>)0)), (1870398730949200067LL))), (((/* implicit */val<long long int>) 1426183900U)))), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_10)) || (((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<signed char>)-45)) ? (6993185078314049199LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<short>)32748))))))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)83;
int var_2 = 1891578285;
unsigned char var_10 = (unsigned char)202;
int zero = 0;
unsigned char var_13 = (unsigned char)215;
unsigned int var_14 = 1375708991U;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned char)173;
    value_mismatch |= var_14 != 1375708991U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_10, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
