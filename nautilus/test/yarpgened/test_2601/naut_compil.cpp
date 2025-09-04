/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2601
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2601
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
void test(val<bool> var_2, val<long long int> var_5, val<unsigned int> var_7, val<signed char> var_13, val<int> zero, val<signed char*> var_14, val<signed char*> var_15) {
    *var_14 = ((/* implicit */val<signed char>) min((*var_14), (((/* implicit */val<signed char>) var_2))));
    *var_15 = ((/* implicit */val<signed char>) min((*var_15), (((/* implicit */val<signed char>) (+(((((/* implicit */val<bool>) ((var_5) | (((/* implicit */val<long long int>) 190444842))))) ? (((/* implicit */val<unsigned int>) max((-1170232691), (((/* implicit */val<int>) (val<short>)7424))))) : (min((((/* implicit */val<unsigned int>) var_13)), (var_7))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_2 = (bool)0;
long long int var_5 = -362050411168169193LL;
unsigned int var_7 = 860782050U;
signed char var_13 = (signed char)121;
int zero = 0;
signed char var_14 = (signed char)-48;
signed char var_15 = (signed char)31;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (signed char)-48;
    value_mismatch |= var_15 != (signed char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_7, var_13, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
