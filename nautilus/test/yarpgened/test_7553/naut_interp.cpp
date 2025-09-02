/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7553
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7553
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
void test(val<signed char> var_0, val<bool> var_4, val<long long int> var_5, val<unsigned char> var_6, val<bool> var_7, val<unsigned char> var_8, val<bool> var_9, val<int> var_12, val<int> zero, val<bool*> var_13, val<signed char*> var_14, val<long long int*> var_15, val<signed char*> var_16) {
    *var_13 |= ((/* implicit */val<bool>) ((var_5) % (((/* implicit */val<long long int>) min((((((/* implicit */val<int>) var_8)) / (((/* implicit */val<int>) var_7)))), (((/* implicit */val<int>) var_8)))))));
    *var_14 += ((/* implicit */val<signed char>) ((((/* implicit */val<int>) ((((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_4))) ^ (4366063340235625620ULL))) >= (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_9)))))) != (((/* implicit */val<int>) max((min((((/* implicit */val<unsigned char>) var_0)), (var_6))), (var_6))))));
    *var_15 |= ((/* implicit */val<long long int>) var_0);
    *var_16 = ((/* implicit */val<signed char>) var_12);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-78;
bool var_4 = (bool)0;
long long int var_5 = -8040506339363917820LL;
unsigned char var_6 = (unsigned char)234;
bool var_7 = (bool)1;
unsigned char var_8 = (unsigned char)229;
bool var_9 = (bool)1;
int var_12 = 1215371757;
int zero = 0;
bool var_13 = (bool)0;
signed char var_14 = (signed char)-76;
long long int var_15 = -8970828631088578291LL;
signed char var_16 = (signed char)-26;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != (signed char)-75;
    value_mismatch |= var_15 != -65LL;
    value_mismatch |= var_16 != (signed char)-19;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_5, var_6, var_7, var_8, var_9, var_12, zero, &var_13, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
