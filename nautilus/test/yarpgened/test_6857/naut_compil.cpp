/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6857
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6857
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
void test(val<unsigned long long int> var_0, val<unsigned long long int> var_6, val<int> zero, val<unsigned char*> var_12, val<int*> var_13) {
    *var_12 = ((/* implicit */val<unsigned char>) max((min((((/* implicit */val<unsigned long long int>) ((val<signed char>) (val<unsigned short>)11751))), (min((((/* implicit */val<unsigned long long int>) (val<unsigned short>)53803)), (var_0))))), (((/* implicit */val<unsigned long long int>) ((val<signed char>) ((((/* implicit */val<bool>) (val<unsigned short>)53792)) ? (((/* implicit */val<int>) (val<unsigned short>)11746)) : (((/* implicit */val<int>) (val<short>)-5575))))))));
    *var_13 = ((/* implicit */val<int>) var_6);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16649429900732881794ULL;
unsigned long long int var_6 = 4914730689641302827ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)173;
int var_13 = -1597018380;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned char)226;
    value_mismatch |= var_13 != -624440533;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_6, zero, &var_12, &var_13);
  checksum();
}
