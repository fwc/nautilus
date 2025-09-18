/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7596
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7596
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
void test(val<long long int> var_3, val<short> var_4, val<short> var_7, val<unsigned int> var_8, val<int> zero, val<unsigned long long int*> var_10, val<unsigned int*> var_11, val<bool*> var_12, val<int*> var_13) {
    *var_10 -= ((/* implicit */val<unsigned long long int>) var_3);
    *var_11 = ((/* implicit */val<unsigned int>) min((((/* implicit */val<short>) (!((!(((/* implicit */val<bool>) (val<unsigned char>)176))))))), (var_4)));
    *var_12 = ((/* implicit */val<bool>) min((((/* implicit */val<long long int>) 4294967293U)), (-1383864669434505645LL)));
    *var_13 = ((/* implicit */val<int>) min((var_8), (((/* implicit */val<unsigned int>) (!(((/* implicit */val<bool>) var_7)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -4343930826618706839LL;
short var_4 = (short)31600;
short var_7 = (short)3880;
unsigned int var_8 = 1464963170U;
int zero = 0;
unsigned long long int var_10 = 4705592399587188510ULL;
unsigned int var_11 = 379618896U;
bool var_12 = (bool)1;
int var_13 = 243451388;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 9049523226205895349ULL;
    value_mismatch |= var_11 != 1U;
    value_mismatch |= var_12 != (bool)1;
    value_mismatch |= var_13 != 0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_7, var_8, zero, &var_10, &var_11, &var_12, &var_13);
  checksum();
}
