/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7929
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7929
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
void test(val<unsigned char> var_1, val<long long int> var_5, val<unsigned int> var_16, val<int> zero, val<bool*> var_19, val<unsigned int*> var_20, val<unsigned char*> var_21) {
    *var_19 = ((/* implicit */val<bool>) var_1);
    *var_20 = ((/* implicit */val<unsigned int>) ((val<unsigned char>) var_16));
    *var_21 = ((/* implicit */val<unsigned char>) min((*var_21), (((/* implicit */val<unsigned char>) var_5))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)121;
long long int var_5 = 1171658155358551478LL;
unsigned int var_16 = 21223434U;
int zero = 0;
bool var_19 = (bool)1;
unsigned int var_20 = 2719553579U;
unsigned char var_21 = (unsigned char)151;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (bool)1;
    value_mismatch |= var_20 != 10U;
    value_mismatch |= var_21 != (unsigned char)151;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_5, var_16, zero, &var_19, &var_20, &var_21);
  checksum();
}
