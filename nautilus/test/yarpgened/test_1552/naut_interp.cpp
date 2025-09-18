/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1552
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1552
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
void test(val<unsigned char> var_0, val<signed char> var_1, val<unsigned short> var_2, val<unsigned char> var_4, val<unsigned char> var_5, val<unsigned short> var_6, val<signed char> var_7, val<unsigned short> var_8, val<unsigned short> var_9, val<int> zero, val<unsigned char*> var_11, val<signed char*> var_12, val<signed char*> var_13, val<signed char*> var_14) {
    *var_11 = ((/* implicit */val<unsigned char>) max((((/* implicit */val<unsigned short>) var_5)), (var_9)));
    *var_12 = ((/* implicit */val<signed char>) min(((-(((/* implicit */val<int>) ((((/* implicit */val<int>) var_4)) < (((/* implicit */val<int>) var_0))))))), (((((/* implicit */val<int>) max((((/* implicit */val<unsigned short>) var_1)), (var_8)))) / (((((/* implicit */val<int>) var_5)) | (((/* implicit */val<int>) var_6))))))));
    *var_13 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) min(((+(((/* implicit */val<int>) var_7)))), (((/* implicit */val<int>) var_7))))) ? (max((((/* implicit */val<int>) (val<unsigned short>)53905)), (((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<int>) var_2)) : (((/* implicit */val<int>) var_4)))))) : (((((/* implicit */val<int>) var_4)) * (((/* implicit */val<int>) var_8))))));
    *var_14 = ((/* implicit */val<signed char>) ((min((((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_9))))), (((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<int>) var_2)) : (((/* implicit */val<int>) var_7)))))) % (((/* implicit */val<int>) max(((val<unsigned short>)11637), (((/* implicit */val<unsigned short>) max((var_5), (var_0)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)181;
signed char var_1 = (signed char)-31;
unsigned short var_2 = (unsigned short)50926;
unsigned char var_4 = (unsigned char)211;
unsigned char var_5 = (unsigned char)75;
unsigned short var_6 = (unsigned short)14413;
signed char var_7 = (signed char)-7;
unsigned short var_8 = (unsigned short)21181;
unsigned short var_9 = (unsigned short)40495;
int zero = 0;
unsigned char var_11 = (unsigned char)9;
signed char var_12 = (signed char)-4;
signed char var_13 = (signed char)-68;
signed char var_14 = (signed char)-120;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (unsigned char)47;
    value_mismatch |= var_12 != (signed char)0;
    value_mismatch |= var_13 != (signed char)-111;
    value_mismatch |= var_14 != (signed char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_5, var_6, var_7, var_8, var_9, zero, &var_11, &var_12, &var_13, &var_14);
  checksum();
}
