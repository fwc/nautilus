/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9920
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9920
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
void test(val<unsigned char> var_6, val<long long int> var_8, val<int> zero, val<signed char*> var_11, val<long long int*> var_12, val<unsigned char*> var_13) {
    *var_11 = ((/* implicit */val<signed char>) min((*var_11), (((/* implicit */val<signed char>) (val<unsigned char>)0))));
    *var_12 = var_8;
    *var_13 |= ((/* implicit */val<unsigned char>) (((~(((/* implicit */val<int>) (val<unsigned char>)0)))) - ((-(((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<int>) (val<unsigned char>)142)) : (((/* implicit */val<int>) (val<unsigned char>)255))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)178;
long long int var_8 = -2462861926325909280LL;
int zero = 0;
signed char var_11 = (signed char)83;
long long int var_12 = 8826494631943772432LL;
unsigned char var_13 = (unsigned char)251;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (signed char)0;
    value_mismatch |= var_12 != -2462861926325909280LL;
    value_mismatch |= var_13 != (unsigned char)255;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_8, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
