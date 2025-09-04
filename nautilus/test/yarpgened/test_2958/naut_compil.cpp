/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2958
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2958
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
void test(val<unsigned long long int> var_1, val<int> var_11, val<signed char> var_13, val<unsigned short> var_14, val<unsigned char> var_16, val<int> zero, val<unsigned long long int*> var_19, val<signed char*> var_20) {
    *var_19 = ((/* implicit */val<unsigned long long int>) (+(((((/* implicit */val<bool>) max(((val<short>)32760), (((/* implicit */val<short>) var_13))))) ? (var_11) : (((/* implicit */val<int>) var_13))))));
    *var_20 = ((/* implicit */val<signed char>) max((*var_20), (((/* implicit */val<signed char>) ((((/* implicit */val<int>) var_16)) ^ (((/* implicit */val<int>) (((+(var_1))) <= (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_14)))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16383986991066103172ULL;
int var_11 = 50672758;
signed char var_13 = (signed char)17;
unsigned short var_14 = (unsigned short)39694;
unsigned char var_16 = (unsigned char)179;
int zero = 0;
unsigned long long int var_19 = 10044117128344107980ULL;
signed char var_20 = (signed char)-56;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 50672758ULL;
    value_mismatch |= var_20 != (signed char)-56;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_11, var_13, var_14, var_16, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
