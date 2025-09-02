/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9381
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9381
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
void test(val<unsigned char> var_3, val<signed char> var_9, val<int> zero, val<unsigned long long int*> var_10, val<unsigned short*> var_11, val<int*> var_12) {
    *var_10 |= ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) var_3)) * (((/* implicit */val<int>) var_3))));
    *var_11 = ((/* implicit */val<unsigned short>) (+(min((((/* implicit */val<int>) (val<bool>)1)), ((~(((/* implicit */val<int>) (val<bool>)1))))))));
    *var_12 |= ((/* implicit */val<int>) (((((val<bool>)1) ? (((/* implicit */val<int>) max(((val<bool>)1), ((val<bool>)1)))) : ((~(((/* implicit */val<int>) var_3)))))) < (((/* implicit */val<int>) ((val<signed char>) min((12255914987402169420ULL), (((/* implicit */val<unsigned long long int>) var_9))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)194;
signed char var_9 = (signed char)-18;
int zero = 0;
unsigned long long int var_10 = 8031310102442050299ULL;
unsigned short var_11 = (unsigned short)46978;
int var_12 = 1714418466;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 8031310102442054655ULL;
    value_mismatch |= var_11 != (unsigned short)65534;
    value_mismatch |= var_12 != 1714418467;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_9, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
