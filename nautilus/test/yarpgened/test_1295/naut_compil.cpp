/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1295
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1295
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
void test(val<long long int> var_0, val<unsigned char> var_3, val<long long int> var_17, val<int> zero, val<signed char*> var_18, val<signed char*> var_19) {
    *var_18 = ((/* implicit */val<signed char>) (+(((/* implicit */val<int>) var_3))));
    *var_19 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) var_17)) ? (var_0) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_3)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8974754969553304180LL;
unsigned char var_3 = (unsigned char)147;
long long int var_17 = 6007741685600423174LL;
int zero = 0;
signed char var_18 = (signed char)-49;
signed char var_19 = (signed char)110;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (signed char)-109;
    value_mismatch |= var_19 != (signed char)116;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_17, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
