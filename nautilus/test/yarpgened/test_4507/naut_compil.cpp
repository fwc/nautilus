/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4507
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4507
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
void test(val<bool> var_9, val<unsigned char> var_11, val<bool> var_12, val<bool> var_13, val<unsigned long long int> var_14, val<int> zero, val<bool*> var_18, val<signed char*> var_19, val<unsigned char*> var_20) {
    *var_18 *= var_12;
    *var_19 ^= ((/* implicit */val<signed char>) min((((/* implicit */val<int>) var_9)), (((((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_13))) <= (var_14)))) << (max((-2339390575582726342LL), (((/* implicit */val<long long int>) var_11))))))));
    *var_20 = ((/* implicit */val<unsigned char>) min((*var_20), (((/* implicit */val<unsigned char>) var_12))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_9 = (bool)0;
unsigned char var_11 = (unsigned char)22;
bool var_12 = (bool)0;
bool var_13 = (bool)0;
unsigned long long int var_14 = 8120948953983182945ULL;
int zero = 0;
bool var_18 = (bool)0;
signed char var_19 = (signed char)-94;
unsigned char var_20 = (unsigned char)141;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (bool)0;
    value_mismatch |= var_19 != (signed char)-94;
    value_mismatch |= var_20 != (unsigned char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_9, var_11, var_12, var_13, var_14, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
