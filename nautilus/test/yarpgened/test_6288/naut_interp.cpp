/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6288
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6288
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
void test(val<unsigned long long int> var_2, val<int> zero, val<unsigned short*> var_18, val<unsigned long long int*> var_19) {
    *var_18 = ((/* implicit */val<unsigned short>) var_2);
    *var_19 = ((/* implicit */val<unsigned long long int>) 4294967281U);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 283006142235276918ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)1623;
unsigned long long int var_19 = 6286527003442454358ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned short)63094;
    value_mismatch |= var_19 != 4294967281ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, zero, &var_18, &var_19);
  checksum();
}
