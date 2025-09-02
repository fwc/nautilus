/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 446
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=446
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
void test(val<bool> var_5, val<signed char> var_10, val<unsigned short> var_15, val<unsigned long long int> var_19, val<int> zero, val<bool*> var_20, val<signed char*> var_21, val<int*> var_22, val<bool*> var_23) {
    *var_20 = var_5;
    *var_21 = ((val<signed char>) ((((/* implicit */val<unsigned long long int>) (+(((/* implicit */val<int>) (val<bool>)1))))) != (((((/* implicit */val<bool>) var_10)) ? (7993361752941063184ULL) : (var_19)))));
    *var_22 = ((/* implicit */val<int>) var_15);
    *var_23 = ((/* implicit */val<bool>) (-(((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<short>)1536)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_5 = (bool)0;
signed char var_10 = (signed char)-19;
unsigned short var_15 = (unsigned short)7670;
unsigned long long int var_19 = 1579570730490865390ULL;
int zero = 0;
bool var_20 = (bool)0;
signed char var_21 = (signed char)-81;
int var_22 = -1216620418;
bool var_23 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (bool)0;
    value_mismatch |= var_21 != (signed char)1;
    value_mismatch |= var_22 != 7670;
    value_mismatch |= var_23 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_10, var_15, var_19, zero, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
