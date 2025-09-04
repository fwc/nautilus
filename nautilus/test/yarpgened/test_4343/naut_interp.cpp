/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4343
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4343
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
void test(val<long long int> var_0, val<short> var_2, val<int> zero, val<unsigned char*> var_11, val<signed char*> var_12, val<int*> var_13, val<unsigned char*> var_14) {
    *var_11 += (val<unsigned char>)16;
    *var_12 |= ((/* implicit */val<signed char>) var_0);
    *var_13 = ((/* implicit */val<int>) (val<signed char>)-22);
    *var_14 += ((/* implicit */val<unsigned char>) var_2);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8988210156496729623LL;
short var_2 = (short)-28676;
int zero = 0;
unsigned char var_11 = (unsigned char)15;
signed char var_12 = (signed char)90;
int var_13 = -1048788684;
unsigned char var_14 = (unsigned char)6;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (unsigned char)31;
    value_mismatch |= var_12 != (signed char)-5;
    value_mismatch |= var_13 != -22;
    value_mismatch |= var_14 != (unsigned char)2;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, zero, &var_11, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
