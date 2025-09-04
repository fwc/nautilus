/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5772
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5772
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
void test(val<unsigned long long int> var_2, val<bool> var_13, val<signed char> var_15, val<int> zero, val<signed char*> var_19, val<unsigned short*> var_20) {
    *var_19 = ((/* implicit */val<signed char>) min((((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) (-(((/* implicit */val<int>) var_15)))))))), (max((var_2), (((/* implicit */val<unsigned long long int>) min(((val<unsigned char>)1), ((val<unsigned char>)51))))))));
    *var_20 = ((/* implicit */val<unsigned short>) max((*var_20), (((/* implicit */val<unsigned short>) var_13))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4060308810427562350ULL;
bool var_13 = (bool)0;
signed char var_15 = (signed char)-92;
int zero = 0;
signed char var_19 = (signed char)-27;
unsigned short var_20 = (unsigned short)34893;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (signed char)0;
    value_mismatch |= var_20 != (unsigned short)34893;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_13, var_15, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
