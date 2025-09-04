/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4417
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4417
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
void test(val<int> var_3, val<unsigned short> var_12, val<unsigned short> var_15, val<unsigned char> var_17, val<int> zero, val<unsigned short*> var_20, val<unsigned long long int*> var_21, val<signed char*> var_22) {
    *var_20 = ((/* implicit */val<unsigned short>) ((((((/* implicit */val<bool>) 13274677677039798043ULL)) && (((/* implicit */val<bool>) (val<short>)-32764)))) && (((((((/* implicit */val<bool>) var_15)) || (((/* implicit */val<bool>) var_12)))) || (((/* implicit */val<bool>) max((((/* implicit */val<unsigned long long int>) (val<unsigned short>)19)), (5172066396669753572ULL))))))));
    *var_21 = ((/* implicit */val<unsigned long long int>) (-((-(((/* implicit */val<int>) var_17))))));
    *var_22 = ((/* implicit */val<signed char>) var_3);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 401106368;
unsigned short var_12 = (unsigned short)3520;
unsigned short var_15 = (unsigned short)34742;
unsigned char var_17 = (unsigned char)115;
int zero = 0;
unsigned short var_20 = (unsigned short)52425;
unsigned long long int var_21 = 17753591133655197296ULL;
signed char var_22 = (signed char)-114;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (unsigned short)1;
    value_mismatch |= var_21 != 115ULL;
    value_mismatch |= var_22 != (signed char)-64;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_12, var_15, var_17, zero, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
