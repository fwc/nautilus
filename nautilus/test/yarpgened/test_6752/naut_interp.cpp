/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6752
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6752
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
void test(val<unsigned short> var_1, val<unsigned char> var_2, val<unsigned char> var_7, val<int> zero, val<unsigned char*> var_10, val<unsigned short*> var_11, val<unsigned char*> var_12) {
    *var_10 = ((/* implicit */val<unsigned char>) max((*var_10), (((/* implicit */val<unsigned char>) min((((/* implicit */val<unsigned short>) var_2)), (var_1))))));
    *var_11 = ((/* implicit */val<unsigned short>) var_2);
    *var_12 = var_7;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)26935;
unsigned char var_2 = (unsigned char)208;
unsigned char var_7 = (unsigned char)170;
int zero = 0;
unsigned char var_10 = (unsigned char)107;
unsigned short var_11 = (unsigned short)9885;
unsigned char var_12 = (unsigned char)171;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned char)208;
    value_mismatch |= var_11 != (unsigned short)208;
    value_mismatch |= var_12 != (unsigned char)170;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_7, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
