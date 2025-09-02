/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5871
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5871
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
void test(val<int> var_1, val<int> var_9, val<int> zero, val<short*> var_10, val<bool*> var_11, val<long long int*> var_12, val<unsigned long long int*> var_13) {
    *var_10 = ((/* implicit */val<short>) (~(((/* implicit */val<int>) (val<unsigned char>)2))));
    *var_11 += ((((/* implicit */val<bool>) var_9)) && (((/* implicit */val<bool>) (val<short>)-15955)));
    *var_12 *= ((/* implicit */val<long long int>) ((((/* implicit */val<int>) max((((((/* implicit */val<int>) (val<bool>)0)) >= (((/* implicit */val<int>) (val<unsigned short>)65513)))), ((val<bool>)1)))) < (((((/* implicit */val<bool>) 2147483647)) ? ((~(((/* implicit */val<int>) (val<short>)15950)))) : (((/* implicit */val<int>) (val<unsigned short>)22))))));
    *var_13 = ((/* implicit */val<unsigned long long int>) min((*var_13), (((/* implicit */val<unsigned long long int>) var_1))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1866514357;
int var_9 = -476497123;
int zero = 0;
short var_10 = (short)17274;
bool var_11 = (bool)1;
long long int var_12 = 7109364987052905461LL;
unsigned long long int var_13 = 13315868229473071615ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (short)-3;
    value_mismatch |= var_11 != (bool)1;
    value_mismatch |= var_12 != 0LL;
    value_mismatch |= var_13 != 13315868229473071615ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_9, zero, &var_10, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
