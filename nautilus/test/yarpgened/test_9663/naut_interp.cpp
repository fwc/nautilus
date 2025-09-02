/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9663
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9663
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
void test(val<int> var_0, val<long long int> var_2, val<int> var_5, val<signed char> var_7, val<int> var_8, val<int> zero, val<signed char*> var_15, val<signed char*> var_16, val<int*> var_17) {
    *var_15 = ((/* implicit */val<signed char>) max((*var_15), (((/* implicit */val<signed char>) var_8))));
    *var_16 = ((/* implicit */val<signed char>) ((((((/* implicit */val<bool>) ((((var_5) + (2147483647))) >> (((var_0) - (1317217216)))))) ? (var_2) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_7))))) / (((/* implicit */val<long long int>) var_8))));
    *var_17 = ((((/* implicit */val<int>) (val<signed char>)85)) | (((/* implicit */val<int>) (val<signed char>)-74)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1317217244;
long long int var_2 = -1875053804889884323LL;
int var_5 = -1120041617;
signed char var_7 = (signed char)43;
int var_8 = 1673971156;
int zero = 0;
signed char var_15 = (signed char)-62;
signed char var_16 = (signed char)82;
int var_17 = -453022071;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (signed char)-44;
    value_mismatch |= var_16 != (signed char)10;
    value_mismatch |= var_17 != -9;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_5, var_7, var_8, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
