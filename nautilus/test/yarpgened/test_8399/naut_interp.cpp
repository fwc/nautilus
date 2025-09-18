/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8399
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8399
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
void test(val<int> var_3, val<signed char> var_4, val<long long int> var_5, val<unsigned short> var_6, val<int> zero, val<unsigned char*> var_10, val<bool*> var_11) {
    *var_10 = ((/* implicit */val<unsigned char>) max((((((/* implicit */val<bool>) min((((/* implicit */val<int>) (val<unsigned short>)47040)), (var_3)))) ? (max((var_5), (((/* implicit */val<long long int>) (val<short>)-32755)))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) max((var_6), (((/* implicit */val<unsigned short>) var_4)))))))), (((/* implicit */val<long long int>) ((val<signed char>) ((val<unsigned long long int>) (val<unsigned short>)65535))))));
    *var_11 = ((/* implicit */val<bool>) min((*var_11), (((/* implicit */val<bool>) var_3))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1464848222;
signed char var_4 = (signed char)-90;
long long int var_5 = -8228346877200817377LL;
unsigned short var_6 = (unsigned short)16517;
int zero = 0;
unsigned char var_10 = (unsigned char)149;
bool var_11 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned char)255;
    value_mismatch |= var_11 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_5, var_6, zero, &var_10, &var_11);
  checksum();
}
