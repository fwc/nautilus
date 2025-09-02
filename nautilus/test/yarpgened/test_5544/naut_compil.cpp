/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5544
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5544
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
void test(val<unsigned char> var_0, val<unsigned long long int> var_2, val<short> var_3, val<unsigned int> var_4, val<unsigned char> var_7, val<unsigned int> var_8, val<long long int> var_10, val<int> zero, val<unsigned short*> var_12, val<unsigned short*> var_13, val<bool*> var_14) {
    *var_12 = ((/* implicit */val<unsigned short>) (!(((/* implicit */val<bool>) min((((/* implicit */val<unsigned int>) max((var_0), (var_0)))), ((+(var_8))))))));
    *var_13 = ((/* implicit */val<unsigned short>) max((min((min((((/* implicit */val<unsigned long long int>) (val<unsigned char>)36)), (var_2))), (((/* implicit */val<unsigned long long int>) min((var_3), (((/* implicit */val<short>) (val<unsigned char>)220))))))), (((/* implicit */val<unsigned long long int>) max((max((var_8), (var_8))), (max((((/* implicit */val<unsigned int>) 1803251376)), (var_4))))))));
    *var_14 &= ((/* implicit */val<bool>) max((max((((/* implicit */val<unsigned long long int>) (+(((/* implicit */val<int>) var_7))))), (min((10805137949349600504ULL), (((/* implicit */val<unsigned long long int>) 448043154530763167LL)))))), (((/* implicit */val<unsigned long long int>) min((((/* implicit */val<long long int>) (!(((/* implicit */val<bool>) var_8))))), ((+(var_10))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)252;
unsigned long long int var_2 = 16272960989033739446ULL;
short var_3 = (short)25792;
unsigned int var_4 = 2687678452U;
unsigned char var_7 = (unsigned char)61;
unsigned int var_8 = 905013577U;
long long int var_10 = -4534408871728455692LL;
int zero = 0;
unsigned short var_12 = (unsigned short)16403;
unsigned short var_13 = (unsigned short)60864;
bool var_14 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned short)0;
    value_mismatch |= var_13 != (unsigned short)47092;
    value_mismatch |= var_14 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_7, var_8, var_10, zero, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
