/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2831
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2831
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
void test(val<unsigned long long int> var_0, val<unsigned char> var_5, val<unsigned char> var_6, val<unsigned char> var_10, val<int> zero, val<unsigned long long int*> var_11, val<unsigned char*> var_12) {
    *var_11 ^= ((/* implicit */val<unsigned long long int>) max((var_10), (((val<unsigned char>) ((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)109))) : (var_0))))));
    *var_12 = max((((val<unsigned char>) ((val<unsigned char>) (val<unsigned char>)109))), (var_6));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9841530998317391029ULL;
unsigned char var_5 = (unsigned char)36;
unsigned char var_6 = (unsigned char)182;
unsigned char var_10 = (unsigned char)49;
int zero = 0;
unsigned long long int var_11 = 17271088098950175540ULL;
unsigned char var_12 = (unsigned char)24;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 17271088098950175577ULL;
    value_mismatch |= var_12 != (unsigned char)182;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_5, var_6, var_10, zero, &var_11, &var_12);
  checksum();
}
