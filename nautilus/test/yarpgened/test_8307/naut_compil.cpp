/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8307
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8307
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
void test(val<signed char> var_1, val<signed char> var_5, val<int> zero, val<int*> var_18, val<unsigned short*> var_19) {
    *var_18 |= ((/* implicit */val<int>) var_5);
    *var_19 += ((/* implicit */val<unsigned short>) var_1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-27;
signed char var_5 = (signed char)41;
int zero = 0;
int var_18 = -909309347;
unsigned short var_19 = (unsigned short)43956;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != -909309315;
    value_mismatch |= var_19 != (unsigned short)43929;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_5, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
