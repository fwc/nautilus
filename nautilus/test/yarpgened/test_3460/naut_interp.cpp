/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3460
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3460
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
void test(val<unsigned short> var_1, val<unsigned char> var_2, val<short> var_3, val<unsigned char> var_4, val<long long int> var_7, val<bool> var_10, val<bool> var_11, val<int> zero, val<unsigned char*> var_12, val<unsigned long long int*> var_13, val<int*> var_14) {
    *var_12 = ((/* implicit */val<unsigned char>) var_10);
    *var_13 = ((/* implicit */val<unsigned long long int>) min((*var_13), (((/* implicit */val<unsigned long long int>) var_2))));
    *var_14 *= ((/* implicit */val<int>) ((((/* implicit */val<int>) min((((var_11) || (((/* implicit */val<bool>) var_4)))), (((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_1))) <= (2323330006802372739ULL)))))) < (((/* implicit */val<int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_3))) < (var_7))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)48840;
unsigned char var_2 = (unsigned char)215;
short var_3 = (short)-20870;
unsigned char var_4 = (unsigned char)24;
long long int var_7 = -6870855041524844305LL;
bool var_10 = (bool)0;
bool var_11 = (bool)1;
int zero = 0;
unsigned char var_12 = (unsigned char)37;
unsigned long long int var_13 = 6919957828383185742ULL;
int var_14 = 1477530261;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned char)0;
    value_mismatch |= var_13 != 215ULL;
    value_mismatch |= var_14 != 0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_4, var_7, var_10, var_11, zero, &var_12, &var_13, &var_14);
  checksum();
}
