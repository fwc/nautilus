/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3423
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3423
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
void test(val<long long int> var_1, val<bool> var_2, val<unsigned long long int> var_8, val<bool> var_9, val<int> zero, val<unsigned char*> var_12, val<signed char*> var_13, val<long long int*> var_14) {
    *var_12 = ((/* implicit */val<unsigned char>) max((*var_12), (((/* implicit */val<unsigned char>) ((var_9) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_9))) : ((~(((((var_1) + (9223372036854775807LL))) >> (((/* implicit */val<int>) var_9)))))))))));
    *var_13 = ((/* implicit */val<signed char>) (-(var_8)));
    *var_14 = ((/* implicit */val<long long int>) var_2);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3693258646979332368LL;
bool var_2 = (bool)0;
unsigned long long int var_8 = 4062888308220284101ULL;
bool var_9 = (bool)0;
int zero = 0;
unsigned char var_12 = (unsigned char)77;
signed char var_13 = (signed char)-51;
long long int var_14 = -3581745448063389633LL;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned char)77;
    value_mismatch |= var_13 != (signed char)59;
    value_mismatch |= var_14 != 0LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_8, var_9, zero, &var_12, &var_13, &var_14);
  checksum();
}
