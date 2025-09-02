/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 338
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=338
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
void test(val<long long int> var_8, val<long long int> var_12, val<unsigned char> var_18, val<int> zero, val<unsigned char*> var_20, val<bool*> var_21, val<bool*> var_22) {
    *var_20 = ((/* implicit */val<unsigned char>) min((((/* implicit */val<int>) ((val<unsigned short>) min((var_18), (((/* implicit */val<unsigned char>) (val<bool>)1)))))), ((~(((/* implicit */val<int>) ((((/* implicit */val<int>) (val<bool>)1)) == (-1248975678))))))));
    *var_21 = ((/* implicit */val<bool>) var_12);
    *var_22 = ((/* implicit */val<bool>) var_8);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = 4170761976574587007LL;
long long int var_12 = 8785239796582806836LL;
unsigned char var_18 = (unsigned char)219;
int zero = 0;
unsigned char var_20 = (unsigned char)211;
bool var_21 = (bool)1;
bool var_22 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (unsigned char)255;
    value_mismatch |= var_21 != (bool)1;
    value_mismatch |= var_22 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, var_12, var_18, zero, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
