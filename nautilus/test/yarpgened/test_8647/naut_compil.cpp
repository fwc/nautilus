/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8647
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8647
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
void test(val<bool> var_1, val<unsigned char> var_3, val<bool> var_4, val<int> var_5, val<int> var_6, val<unsigned short> var_7, val<int> zero, val<bool*> var_10, val<long long int*> var_11, val<signed char*> var_12) {
    *var_10 += ((/* implicit */val<bool>) 572958733805135217LL);
    *var_11 = ((/* implicit */val<long long int>) min((*var_11), (((/* implicit */val<long long int>) (-(max((max((((/* implicit */val<int>) var_7)), (var_5))), ((+(((/* implicit */val<int>) var_1)))))))))));
    *var_12 &= ((/* implicit */val<signed char>) (!(((/* implicit */val<bool>) min((((((/* implicit */val<int>) var_4)) % (var_6))), (((/* implicit */val<int>) var_3)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)0;
unsigned char var_3 = (unsigned char)114;
bool var_4 = (bool)1;
int var_5 = 1008647192;
int var_6 = -649865765;
unsigned short var_7 = (unsigned short)63701;
int zero = 0;
bool var_10 = (bool)1;
long long int var_11 = 167189621085476874LL;
signed char var_12 = (signed char)-5;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (bool)1;
    value_mismatch |= var_11 != -1008647192LL;
    value_mismatch |= var_12 != (signed char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_4, var_5, var_6, var_7, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
