/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7558
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7558
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
void test(val<unsigned char> var_2, val<short> var_6, val<int> var_10, val<int> zero, val<long long int*> var_11, val<unsigned char*> var_12, val<unsigned char*> var_13) {
    *var_11 = ((/* implicit */val<long long int>) ((val<unsigned char>) ((((var_10) + (2147483647))) >> (((((/* implicit */val<int>) var_2)) - (82))))));
    *var_12 *= ((/* implicit */val<unsigned char>) var_6);
    *var_13 = ((/* implicit */val<unsigned char>) max((*var_13), (((/* implicit */val<unsigned char>) ((val<short>) ((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<int>) (val<unsigned char>)123)) : (((/* implicit */val<int>) (!(((/* implicit */val<bool>) 3973455120U)))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)112;
short var_6 = (short)-27110;
int var_10 = -884026754;
int zero = 0;
long long int var_11 = 3582795589419176693LL;
unsigned char var_12 = (unsigned char)65;
unsigned char var_13 = (unsigned char)16;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 1LL;
    value_mismatch |= var_12 != (unsigned char)154;
    value_mismatch |= var_13 != (unsigned char)123;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_6, var_10, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
