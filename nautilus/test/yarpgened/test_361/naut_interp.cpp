/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 361
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=361
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
void test(val<unsigned short> var_0, val<unsigned char> var_7, val<int> zero, val<unsigned char*> var_13, val<long long int*> var_14) {
    *var_13 = ((/* implicit */val<unsigned char>) min((((/* implicit */val<long long int>) var_0)), (8034883897541102861LL)));
    *var_14 = ((/* implicit */val<long long int>) var_7);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)10035;
unsigned char var_7 = (unsigned char)101;
int zero = 0;
unsigned char var_13 = (unsigned char)151;
long long int var_14 = 1525467436417997660LL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned char)51;
    value_mismatch |= var_14 != 101LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_7, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
