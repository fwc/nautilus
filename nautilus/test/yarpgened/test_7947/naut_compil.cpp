/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7947
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7947
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
void test(val<int> zero, val<unsigned long long int*> var_10, val<unsigned char*> var_11) {
    *var_10 = ((/* implicit */val<unsigned long long int>) (-(1288464280)));
    *var_11 *= ((/* implicit */val<unsigned char>) (-(((/* implicit */val<int>) (val<unsigned short>)0))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
unsigned long long int var_10 = 15706742807284475632ULL;
unsigned char var_11 = (unsigned char)78;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 18446744072421087336ULL;
    value_mismatch |= var_11 != (unsigned char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
