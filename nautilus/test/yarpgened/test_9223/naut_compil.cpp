/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9223
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9223
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
void test(val<int> var_4, val<int> zero, val<long long int*> var_10, val<unsigned char*> var_11) {
    *var_10 = ((/* implicit */val<long long int>) var_4);
    *var_11 = ((/* implicit */val<unsigned char>) 16232707004068753707ULL);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1816201008;
int zero = 0;
long long int var_10 = -8974815473816119992LL;
unsigned char var_11 = (unsigned char)237;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != -1816201008LL;
    value_mismatch |= var_11 != (unsigned char)43;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, zero, &var_10, &var_11);
  checksum();
}
