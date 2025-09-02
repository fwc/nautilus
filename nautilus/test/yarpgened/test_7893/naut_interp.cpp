/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7893
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7893
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
void test(val<bool> var_0, val<unsigned short> var_4, val<long long int> var_5, val<unsigned char> var_10, val<int> zero, val<unsigned char*> var_11, val<int*> var_12) {
    *var_11 = ((/* implicit */val<unsigned char>) (-((-(max((((/* implicit */val<long long int>) var_10)), (var_5)))))));
    *var_12 = ((/* implicit */val<int>) max((((/* implicit */val<unsigned long long int>) var_0)), (max((((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<unsigned long long int>) var_5)) : (15160623886413435547ULL))), (((/* implicit */val<unsigned long long int>) var_0))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
unsigned short var_4 = (unsigned short)63937;
long long int var_5 = -6971806607190556490LL;
unsigned char var_10 = (unsigned char)170;
int zero = 0;
unsigned char var_11 = (unsigned char)179;
int var_12 = 857817227;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (unsigned char)170;
    value_mismatch |= var_12 != 934248630;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_5, var_10, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
