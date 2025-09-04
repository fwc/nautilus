/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7688
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7688
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
void test(val<long long int> var_0, val<unsigned short> var_1, val<bool> var_6, val<signed char> var_8, val<unsigned long long int> var_10, val<long long int> var_11, val<int> zero, val<signed char*> var_13, val<unsigned char*> var_14, val<unsigned char*> var_15) {
    *var_13 = ((/* implicit */val<signed char>) var_10);
    *var_14 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) 12549740290006005662ULL)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_6))) : (((((/* implicit */val<bool>) max((var_10), (((/* implicit */val<unsigned long long int>) var_8))))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_1))) != (var_11))))) : (var_0)))));
    *var_15 = ((/* implicit */val<unsigned char>) (val<unsigned short>)4859);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3860178799125939481LL;
unsigned short var_1 = (unsigned short)9000;
bool var_6 = (bool)0;
signed char var_8 = (signed char)-72;
unsigned long long int var_10 = 10466912500062737588ULL;
long long int var_11 = 67808114861077482LL;
int zero = 0;
signed char var_13 = (signed char)51;
unsigned char var_14 = (unsigned char)218;
unsigned char var_15 = (unsigned char)153;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (signed char)-76;
    value_mismatch |= var_14 != (unsigned char)0;
    value_mismatch |= var_15 != (unsigned char)251;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_6, var_8, var_10, var_11, zero, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
