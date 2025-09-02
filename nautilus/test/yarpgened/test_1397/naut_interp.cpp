/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1397
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1397
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
void test(val<short> var_0, val<signed char> var_1, val<unsigned char> var_2, val<unsigned long long int> var_4, val<bool> var_8, val<unsigned char> var_9, val<int> zero, val<signed char*> var_10, val<long long int*> var_11, val<int*> var_12) {
    *var_10 = ((/* implicit */val<signed char>) (+(((/* implicit */val<int>) var_2))));
    *var_11 = ((/* implicit */val<long long int>) var_9);
    *var_12 = ((/* implicit */val<int>) ((var_4) & (((/* implicit */val<unsigned long long int>) min((((/* implicit */val<int>) var_8)), (((((/* implicit */val<int>) var_0)) ^ (((/* implicit */val<int>) var_1)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25329;
signed char var_1 = (signed char)112;
unsigned char var_2 = (unsigned char)112;
unsigned long long int var_4 = 400437108578556630ULL;
bool var_8 = (bool)0;
unsigned char var_9 = (unsigned char)159;
int zero = 0;
signed char var_10 = (signed char)-39;
long long int var_11 = -2045640960887510748LL;
int var_12 = 1122778222;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (signed char)112;
    value_mismatch |= var_11 != 159LL;
    value_mismatch |= var_12 != -1145726890;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_8, var_9, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
