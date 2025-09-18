/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6680
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6680
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
void test(val<bool> var_0, val<bool> var_1, val<unsigned char> var_3, val<bool> var_4, val<unsigned char> var_6, val<unsigned char> var_8, val<bool> var_9, val<int> zero, val<int*> var_11, val<bool*> var_12, val<unsigned char*> var_13, val<int*> var_14) {
    *var_11 ^= max((((/* implicit */val<int>) var_0)), (max((((((/* implicit */val<int>) var_9)) * (((/* implicit */val<int>) var_6)))), (((/* implicit */val<int>) ((var_4) || (var_1)))))));
    *var_12 = var_4;
    *var_13 += ((/* implicit */val<unsigned char>) (+(((val<int>) ((val<unsigned char>) var_0)))));
    *var_14 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) (~(((((/* implicit */val<int>) var_8)) | (((/* implicit */val<int>) var_3))))))) && (((/* implicit */val<bool>) min((((/* implicit */val<unsigned char>) (val<bool>)1)), ((val<unsigned char>)158))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
bool var_1 = (bool)0;
unsigned char var_3 = (unsigned char)64;
bool var_4 = (bool)0;
unsigned char var_6 = (unsigned char)226;
unsigned char var_8 = (unsigned char)140;
bool var_9 = (bool)0;
int zero = 0;
int var_11 = -18420696;
bool var_12 = (bool)1;
unsigned char var_13 = (unsigned char)128;
int var_14 = -1711264714;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != -18420695;
    value_mismatch |= var_12 != (bool)0;
    value_mismatch |= var_13 != (unsigned char)129;
    value_mismatch |= var_14 != 1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_4, var_6, var_8, var_9, zero, &var_11, &var_12, &var_13, &var_14);
  checksum();
}
