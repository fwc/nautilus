/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6979
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6979
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
void test(val<unsigned long long int> var_2, val<signed char> var_8, val<unsigned short> var_9, val<unsigned int> var_10, val<int> var_12, val<int> zero, val<short*> var_13, val<unsigned long long int*> var_14) {
    *var_13 = ((/* implicit */val<short>) var_2);
    *var_14 = max((((((/* implicit */val<bool>) var_12)) ? (var_2) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<unsigned int>) var_12)) | (var_10)))))), (((/* implicit */val<unsigned long long int>) max((((/* implicit */val<unsigned int>) max((((/* implicit */val<unsigned short>) var_8)), ((val<unsigned short>)55638)))), (((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_9))) ^ (3401489264U)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9029646464062209780ULL;
signed char var_8 = (signed char)-79;
unsigned short var_9 = (unsigned short)65433;
unsigned int var_10 = 374679998U;
int var_12 = -115739235;
int zero = 0;
short var_13 = (short)-18757;
unsigned long long int var_14 = 2769890593812138062ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (short)16116;
    value_mismatch |= var_14 != 9029646464062209780ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_8, var_9, var_10, var_12, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
