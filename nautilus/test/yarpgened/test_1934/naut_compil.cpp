/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1934
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1934
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
void test(val<unsigned long long int> var_1, val<unsigned int> var_10, val<unsigned long long int> var_13, val<int> var_15, val<int> zero, val<int*> var_16, val<long long int*> var_17) {
    *var_16 = ((/* implicit */val<int>) max((((/* implicit */val<signed char>) (val<bool>)1)), ((val<signed char>)-73)));
    *var_17 = ((/* implicit */val<long long int>) min(((((!(((/* implicit */val<bool>) 2011052573268664251ULL)))) ? (var_1) : (((/* implicit */val<unsigned long long int>) ((var_10) | (((/* implicit */val<unsigned int>) var_15))))))), (((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) max((var_1), (var_13)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2002358643253493236ULL;
unsigned int var_10 = 3921995216U;
unsigned long long int var_13 = 9049661453861847378ULL;
int var_15 = -415963631;
int zero = 0;
int var_16 = -1952612088;
long long int var_17 = 5285409995735940084LL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 1;
    value_mismatch |= var_17 != 0LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_10, var_13, var_15, zero, &var_16, &var_17);
  checksum();
}
