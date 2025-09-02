/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7036
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7036
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
void test(val<long long int> var_0, val<unsigned int> var_3, val<unsigned int> var_5, val<unsigned long long int> var_8, val<short> var_9, val<int> zero, val<short*> var_13, val<long long int*> var_14) {
    *var_13 = ((/* implicit */val<short>) min((((/* implicit */val<unsigned int>) var_9)), ((((-(var_5))) | (var_3)))));
    *var_14 = ((/* implicit */val<long long int>) ((var_0) < (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) (-(var_0)))) || (((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<int>) var_9)) : (((/* implicit */val<int>) var_9)))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6536420179124806562LL;
unsigned int var_3 = 968623278U;
unsigned int var_5 = 3055110455U;
unsigned long long int var_8 = 17137199433459984ULL;
short var_9 = (short)-27258;
int zero = 0;
short var_13 = (short)11572;
long long int var_14 = -1281242280375647276LL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (short)-18705;
    value_mismatch |= var_14 != 1LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_5, var_8, var_9, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
