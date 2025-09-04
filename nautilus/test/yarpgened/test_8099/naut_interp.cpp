/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8099
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8099
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
void test(val<unsigned long long int> var_5, val<unsigned long long int> var_14, val<unsigned char> var_15, val<int> zero, val<unsigned char*> var_17, val<long long int*> var_18) {
    *var_17 = ((/* implicit */val<unsigned char>) min(((!(((/* implicit */val<bool>) max((((/* implicit */val<unsigned long long int>) (val<unsigned char>)22)), (var_5)))))), ((!(((/* implicit */val<bool>) var_14))))));
    *var_18 = ((/* implicit */val<long long int>) var_15);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 4761430352807483672ULL;
unsigned long long int var_14 = 5839058680019315312ULL;
unsigned char var_15 = (unsigned char)24;
int zero = 0;
unsigned char var_17 = (unsigned char)232;
long long int var_18 = 5300447223334909192LL;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (unsigned char)0;
    value_mismatch |= var_18 != 24LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_14, var_15, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
