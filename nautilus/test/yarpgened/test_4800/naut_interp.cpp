/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4800
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4800
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
void test(val<bool> var_2, val<long long int> var_8, val<unsigned char> var_10, val<bool> var_12, val<int> zero, val<unsigned long long int*> var_14, val<long long int*> var_15) {
    *var_14 = ((/* implicit */val<unsigned long long int>) max((*var_14), (((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) (+(((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<int>) var_12)) : (((/* implicit */val<int>) var_2))))))))))));
    *var_15 = ((/* implicit */val<long long int>) ((val<int>) max((((/* implicit */val<long long int>) min(((val<signed char>)62), (((/* implicit */val<signed char>) var_12))))), (min((4539241657975058159LL), (var_8))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_2 = (bool)0;
long long int var_8 = -1413846143252731905LL;
unsigned char var_10 = (unsigned char)255;
bool var_12 = (bool)0;
int zero = 0;
unsigned long long int var_14 = 6887576646364828485ULL;
long long int var_15 = 1066506409158951828LL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 6887576646364828485ULL;
    value_mismatch |= var_15 != 0LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_8, var_10, var_12, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
