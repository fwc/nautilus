/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4093
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4093
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
void test(val<unsigned long long int> var_5, val<int> zero, val<unsigned char*> var_18, val<unsigned char*> var_19) {
    *var_18 = ((/* implicit */val<unsigned char>) max((*var_18), (((/* implicit */val<unsigned char>) var_5))));
    *var_19 = ((/* implicit */val<unsigned char>) var_5);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 9786304203146651631ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)234;
unsigned char var_19 = (unsigned char)215;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned char)239;
    value_mismatch |= var_19 != (unsigned char)239;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, zero, &var_18, &var_19);
  checksum();
}
