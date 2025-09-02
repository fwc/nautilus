/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 480
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=480
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
void test(val<int> var_0, val<int> var_2, val<int> var_3, val<unsigned int> var_8, val<signed char> var_9, val<int> zero, val<unsigned int*> var_10, val<unsigned int*> var_11) {
    *var_10 = ((/* implicit */val<unsigned int>) var_0);
    *var_11 = (((!(((/* implicit */val<bool>) ((((/* implicit */val<unsigned int>) var_0)) | (var_8)))))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((max((((/* implicit */val<int>) var_9)), (var_3))) <= (((1612284119) >> (((var_2) + (1711128105))))))))) : (var_8));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1244498596;
int var_2 = -1711128079;
int var_3 = 501956391;
unsigned int var_8 = 289684992U;
signed char var_9 = (signed char)1;
int zero = 0;
unsigned int var_10 = 2106944858U;
unsigned int var_11 = 2880773703U;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 3050468700U;
    value_mismatch |= var_11 != 289684992U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_8, var_9, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
