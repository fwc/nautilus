/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9877
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9877
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
void test(val<int> var_1, val<int> var_3, val<unsigned char> var_4, val<signed char> var_5, val<bool> var_8, val<long long int> var_10, val<unsigned char> var_11, val<int> zero, val<unsigned char*> var_12, val<unsigned short*> var_13, val<unsigned long long int*> var_14) {
    *var_12 = ((/* implicit */val<unsigned char>) ((((((/* implicit */val<bool>) min((var_5), (((/* implicit */val<signed char>) var_8))))) ? (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_4)) ? (var_1) : (((/* implicit */val<int>) var_4))))) : (max((((/* implicit */val<long long int>) var_4)), (var_10))))) < (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_4)))));
    *var_13 = ((/* implicit */val<unsigned short>) min((*var_13), (((/* implicit */val<unsigned short>) (-(((/* implicit */val<int>) var_5)))))));
    *var_14 = ((/* implicit */val<unsigned long long int>) max((*var_14), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<int>) var_5)) : (((/* implicit */val<int>) var_5))))) && (((/* implicit */val<bool>) ((var_8) ? (((/* implicit */val<int>) var_8)) : (((/* implicit */val<int>) var_11)))))))) / ((~(((var_3) ^ (((/* implicit */val<int>) var_5)))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -361170592;
int var_3 = -1591249152;
unsigned char var_4 = (unsigned char)127;
signed char var_5 = (signed char)102;
bool var_8 = (bool)1;
long long int var_10 = 3189262053221584608LL;
unsigned char var_11 = (unsigned char)102;
int zero = 0;
unsigned char var_12 = (unsigned char)184;
unsigned short var_13 = (unsigned short)40111;
unsigned long long int var_14 = 14310992139145442382ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned char)1;
    value_mismatch |= var_13 != (unsigned short)40111;
    value_mismatch |= var_14 != 14310992139145442382ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_4, var_5, var_8, var_10, var_11, zero, &var_12, &var_13, &var_14);
  checksum();
}
