/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3202
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3202
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
void test(val<int> var_2, val<unsigned long long int> var_5, val<long long int> var_10, val<bool> var_12, val<unsigned int> var_14, val<unsigned long long int> var_15, val<bool> var_16, val<unsigned int> var_17, val<int> zero, val<unsigned int*> var_18, val<unsigned int*> var_19, val<bool*> var_20) {
    *var_18 = ((/* implicit */val<unsigned int>) max((((((/* implicit */val<bool>) var_15)) ? (((/* implicit */val<int>) ((val<bool>) var_14))) : (((/* implicit */val<int>) var_16)))), ((-(((((/* implicit */val<int>) (val<bool>)1)) + (((/* implicit */val<int>) var_12))))))));
    *var_19 = ((/* implicit */val<unsigned int>) ((((((/* implicit */val<bool>) var_5)) ? (max((((/* implicit */val<long long int>) var_17)), (var_10))) : (var_10))) < (((/* implicit */val<long long int>) (+(33554431U))))));
    *var_20 -= ((/* implicit */val<bool>) (~(max((max((var_15), (((/* implicit */val<unsigned long long int>) var_14)))), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_2)) ? (-1LL) : (((/* implicit */val<long long int>) var_2)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -215182696;
unsigned long long int var_5 = 12645880082722057447ULL;
long long int var_10 = 4828875227023498409LL;
bool var_12 = (bool)1;
unsigned int var_14 = 367383865U;
unsigned long long int var_15 = 235927123403927869ULL;
bool var_16 = (bool)1;
unsigned int var_17 = 1790026904U;
int zero = 0;
unsigned int var_18 = 1171273625U;
unsigned int var_19 = 4008598299U;
bool var_20 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 1U;
    value_mismatch |= var_19 != 0U;
    value_mismatch |= var_20 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_10, var_12, var_14, var_15, var_16, var_17, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
