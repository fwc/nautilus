/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9926
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9926
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
void test(val<int> var_7, val<unsigned long long int> var_17, val<int> zero, val<unsigned long long int*> var_19, val<short*> var_20) {
    *var_19 += var_17;
    *var_20 = ((/* implicit */val<short>) var_7);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -374177284;
unsigned long long int var_17 = 7618037612837767934ULL;
int zero = 0;
unsigned long long int var_19 = 10251695852231403944ULL;
short var_20 = (short)-31112;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 17869733465069171878ULL;
    value_mismatch |= var_20 != (short)-32260;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, var_17, zero, &var_19, &var_20);
  checksum();
}
