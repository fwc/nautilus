/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3996
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3996
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
void test(val<bool> var_0, val<unsigned int> var_3, val<unsigned short> var_4, val<unsigned char> var_7, val<unsigned short> var_8, val<unsigned short> var_10, val<int> zero, val<long long int*> var_17, val<short*> var_18) {
    *var_17 = ((/* implicit */val<long long int>) max((((/* implicit */val<unsigned int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<int>) var_8)) % (((/* implicit */val<int>) var_10)))))))), ((~(min((((/* implicit */val<unsigned int>) var_0)), (2U)))))));
    *var_18 = ((/* implicit */val<short>) max((((val<int>) min((var_3), (((/* implicit */val<unsigned int>) var_7))))), (((/* implicit */val<int>) var_4))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
unsigned int var_3 = 3066756062U;
unsigned short var_4 = (unsigned short)57558;
unsigned char var_7 = (unsigned char)207;
unsigned short var_8 = (unsigned short)61457;
unsigned short var_10 = (unsigned short)60876;
int zero = 0;
long long int var_17 = 7189451618483556114LL;
short var_18 = (short)3962;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 4294967295LL;
    value_mismatch |= var_18 != (short)-7978;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_4, var_7, var_8, var_10, zero, &var_17, &var_18);
  checksum();
}
