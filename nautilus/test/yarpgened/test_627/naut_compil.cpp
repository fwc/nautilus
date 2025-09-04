/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 627
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=627
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
void test(val<int> var_1, val<short> var_4, val<bool> var_11, val<unsigned long long int> var_12, val<int> zero, val<long long int*> var_14, val<unsigned long long int*> var_15) {
    *var_14 = ((/* implicit */val<long long int>) var_12);
    *var_15 = ((/* implicit */val<unsigned long long int>) max((var_1), (((/* implicit */val<int>) max((min((var_4), (((/* implicit */val<short>) (val<bool>)0)))), (((/* implicit */val<short>) max((var_11), ((val<bool>)0)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1305613393;
short var_4 = (short)13426;
bool var_11 = (bool)0;
unsigned long long int var_12 = 9905301497017994892ULL;
int zero = 0;
long long int var_14 = 4940542118200349744LL;
unsigned long long int var_15 = 15121281120087435745ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != -8541442576691556724LL;
    value_mismatch |= var_15 != 1305613393ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_11, var_12, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
